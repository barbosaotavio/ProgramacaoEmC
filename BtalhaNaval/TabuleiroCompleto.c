#include <stdio.h>

#define TAM 10       // tamanho do tabuleiro
#define NAVIO 3      // valor que representa parte do navio
#define TAM_NAVIO 3  // tamanho dos navios

// Função para verificar sobreposição
int podePosicionar(int tabuleiro[TAM][TAM], int linha, int coluna) {
    return tabuleiro[linha][coluna] == 0; // retorna 1 se livre e 0 se ocupado
}

int main() {
    int tabuleiro[TAM][TAM];
    int i, j;

    // Inicializar tabuleiro com água (0)
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // ---------------------------
    // COORDENADAS DOS NAVIOS
    // ---------------------------

    // Navio 1 - Vertical
    int n1_l = 1, n1_c = 2;

    // Navio 2 - Horizontal
    int n2_l = 5, n2_c = 4;

    // Navio 3 - Diagonal ↘ (linha ↑ e coluna ↑)
    int n3_l = 2, n3_c = 6;

    // Navio 4 - Diagonal ↗ (linha ↓ e coluna ↑)
    int n4_l = 7, n4_c = 1;

    // ---------------------------
    // POSICIONAR NAVIO 1 - VERTICAL
    // ---------------------------
    if (n1_l + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (!podePosicionar(tabuleiro, n1_l + i, n1_c)) {
                printf("Erro: Sobreposicao no navio vertical!\n");
                return 1;
            }
        }
        for (i = 0; i < TAM_NAVIO; i++)
            tabuleiro[n1_l + i][n1_c] = NAVIO;
    }

    // ---------------------------
    // POSICIONAR NAVIO 2 - HORIZONTAL
    // ---------------------------
    if (n2_c + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (!podePosicionar(tabuleiro, n2_l, n2_c + i)) {
                printf("Erro: Sobreposicao no navio horizontal!\n");
                return 1;
            }
        }
        for (i = 0; i < TAM_NAVIO; i++)
            tabuleiro[n2_l][n2_c + i] = NAVIO;
    }

    // ---------------------------
    // POSICIONAR NAVIO 3 - DIAGONAL ↘
    // ---------------------------
    if (n3_l + TAM_NAVIO <= TAM && n3_c + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (!podePosicionar(tabuleiro, n3_l + i, n3_c + i)) {
                printf("Erro: Sobreposicao no navio diagonal ↘!\n");
                return 1;
            }
        }
        for (i = 0; i < TAM_NAVIO; i++)
            tabuleiro[n3_l + i][n3_c + i] = NAVIO;
    }

    // ---------------------------
    // POSICIONAR NAVIO 4 - DIAGONAL ↗
    // ---------------------------
    if (n4_l - (TAM_NAVIO - 1) >= 0 && n4_c + TAM_NAVIO <= TAM) {
        for (i = 0; i < TAM_NAVIO; i++) {
            if (!podePosicionar(tabuleiro, n4_l - i, n4_c + i)) {
                printf("Erro: Sobreposicao no navio diagonal ↗!\n");
                return 1;
            }
        }
        for (i = 0; i < TAM_NAVIO; i++)
            tabuleiro[n4_l - i][n4_c + i] = NAVIO;
    }

    // ---------------------------
    // PRINTAR TABULEIRO
    // ---------------------------
    printf("\n===== TABULEIRO BATALHA NAVAL =====\n\n");

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]); // imprimir matriz
        }
        printf("\n");
    }

    return 0;
}
