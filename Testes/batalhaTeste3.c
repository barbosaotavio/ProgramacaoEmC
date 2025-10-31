#include <stdio.h>

#define TAM 10       // Tamanho do tabuleiro (10x10)
#define NAVIO 3      // Valor que representa parte do navio
#define EFETIVO 5    // Valor que representa célula afetada por habilidade
#define HSIZE 5      // Tamanho das matrizes de habilidade (5x5)
#define HALF (HSIZE/2) // 2 para HSIZE=5

/*
  Observações sobre mapeamento das matrizes de habilidade:
  - Matriz "cone" é construída com o ponto de origem na linha 0, coluna central (topo-centro).
    Ao sobrepor no tabuleiro, o ponto de origem fornecido no tabuleiro representa a
    **ponta superior** do cone (ou seja, o índice do tabuleiro onde a linha 0 da matriz será colocada).
  - Matrizes "cruz" e "octaedro" têm origem no centro da matriz (índice HALF,HALF)
    e ao sobrepor no tabuleiro usamos esse centro para alinhar com o ponto de origem.
  - As matrizes são geradas dinamicamente com loops e condicionais (exigência do exercício).
*/

int main() {
    int tab[TAM][TAM];
    int i, j, k;

    // 1) Inicializar tabuleiro com água (0)
    for (i = 0; i < TAM; i++)
        for (j = 0; j < TAM; j++)
            tab[i][j] = 0;

    // 2) Posicionar 4 navios de tamanho 3 (reaproveitando posições anteriores)
    // Navio 1 - Vertical
    int n1_l = 1, n1_c = 2;
    for (i = 0; i < 3; i++) tab[n1_l + i][n1_c] = NAVIO;

    // Navio 2 - Horizontal
    int n2_l = 5, n2_c = 4;
    for (i = 0; i < 3; i++) tab[n2_l][n2_c + i] = NAVIO;

    // Navio 3 - Diagonal ↘
    int n3_l = 2, n3_c = 6;
    for (i = 0; i < 3; i++) tab[n3_l + i][n3_c + i] = NAVIO;

    // Navio 4 - Diagonal ↗
    int n4_l = 7, n4_c = 1;
    for (i = 0; i < 3; i++) tab[n4_l - i][n4_c + i] = NAVIO;

    // 3) Construir dinamicamente as matrizes de habilidade (HSIZE x HSIZE)
    int cone[HSIZE][HSIZE];
    int cruz[HSIZE][HSIZE];
    int octaedro[HSIZE][HSIZE];

    // --- Cone (ponta no topo, expandindo para baixo) ---
    // regra: para cada linha r (0..HSIZE-1), marca colunas de center - r .. center + r
    int center = HALF; // 2 quando HSIZE=5
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) {
            // inicialmente tudo 0
            cone[i][j] = 0;

            // calcular se j está dentro do "range" do cone na linha i
            // limites: left = center - i, right = center + i
            int left = center - i;
            int right = center + i;
            if (left < 0) left = 0;
            if (right > HSIZE - 1) right = HSIZE - 1;

            if (j >= left && j <= right) {
                // nesta simplificação consideramos todo o bloco como cone
                cone[i][j] = 1;
            }
        }
    }

    // --- Cruz (linha central + coluna central) ---
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) {
            if (i == center || j == center)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // --- Octaedro (vista frontal ≈ losango) ---
    // Usamos distância de Manhattan do centro: if |i-center| + |j-center| <= center -> 1
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) {
            int manhattan = (i > center ? i - center : center - i) + (j > center ? j - center : center - j);
            if (manhattan <= center)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    // 4) Definir pontos de origem no tabuleiro para cada habilidade
    // Nota: para cone, o ponto (cone_orig_l, cone_orig_c) representa a posição do tabuleiro
    // onde a linha 0 da matriz cone será alinhada (ponta do cone).
    // Para cruz e octaedro, o ponto representa o centro da habilidade.
    int cone_orig_l = 0, cone_orig_c = 3;   // ponta do cone ficará em (0,3)
    int cruz_orig_l = 4, cruz_orig_c = 7;   // centro da cruz em (4,7)
    int oct_orig_l = 6, oct_orig_c = 4;     // centro do octaedro em (6,4)

    // 5) Sobrepor a matriz CONE ao tabuleiro
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) {
            if (cone[i][j] == 1) {
                // mapa: linha_tab = cone_orig_l + i (porque cone's row 0 é a ponta)
                int linha_tab = cone_orig_l + i;
                int col_tab = cone_orig_c - center + j; 
                // Explicação: a coluna 0 da matriz deve mapear para cone_orig_c - center
                // para centralizar a matriz em relação à coluna de origem.
                if (linha_tab >= 0 && linha_tab < TAM && col_tab >= 0 && col_tab < TAM) {
                    tab[linha_tab][col_tab] = EFETIVO; // marca área afetada
                }
            }
        }
    }

    // 6) Sobrepor a matriz CRUZ ao tabuleiro (centro da matriz = cruz_orig)
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) {
            if (cruz[i][j] == 1) {
                int linha_tab = cruz_orig_l + (i - center); // desloca para que center->cruz_orig_l
                int col_tab   = cruz_orig_c + (j - center);
                if (linha_tab >= 0 && linha_tab < TAM && col_tab >= 0 && col_tab < TAM) {
                    tab[linha_tab][col_tab] = EFETIVO;
                }
            }
        }
    }

    // 7) Sobrepor a matriz OCTAEDRO ao tabuleiro (centro da matriz = oct_orig)
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) {
            if (octaedro[i][j] == 1) {
                int linha_tab = oct_orig_l + (i - center);
                int col_tab   = oct_orig_c + (j - center);
                if (linha_tab >= 0 && linha_tab < TAM && col_tab >= 0 && col_tab < TAM) {
                    tab[linha_tab][col_tab] = EFETIVO;
                }
            }
        }
    }

    // Observação: no código acima nós sobrescrevemos células do tabuleiro com EFETIVO (5),
    // inclusive se já existia um NAVIO (3). Se você preferir manter navios visíveis (3)
    // quando uma habilidade passa por cima, troque as atribuições:
    // if (tab[linha_tab][col_tab] == 0) tab[linha_tab][col_tab] = EFETIVO;
    // Assim somente água é substituída por 5, preservando navios.

    // 8) Imprimir tabuleiro (com cabeçalho)
    printf("\n=== TABULEIRO: 0=agua  3=navio  5=habilidade ===\n\n");
    printf("   ");
    for (i = 0; i < TAM; i++) printf("%d ", i);
    printf("\n");

    for (i = 0; i < TAM; i++) {
        printf("%d  ", i);
        for (j = 0; j < TAM; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    // 9) (Opcional) Imprimir as matrizes de habilidade para debug/visualização
    printf("\nMATRIZ CONE (1=area):\n");
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) printf("%d ", cone[i][j]);
        printf("\n");
    }

    printf("\nMATRIZ CRUZ (1=area):\n");
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) printf("%d ", cruz[i][j]);
        printf("\n");
    }

    printf("\nMATRIZ OCTAEDRO (1=area):\n");
    for (i = 0; i < HSIZE; i++) {
        for (j = 0; j < HSIZE; j++) printf("%d ", octaedro[i][j]);
        printf("\n");
    }

    return 0;
}