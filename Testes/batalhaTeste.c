#include <stdio.h>

#define TAM 10     // Tamanho do tabuleiro 10x10
#define NAVIO 3    // Valor que representa uma parte do navio
#define TAM_NAVIO 3 // Tamanho fixo do navio

int main() {
    int tabuleiro[TAM][TAM];  // Matriz do tabuleiro
    
    // Coordenadas iniciais dos navios
    int linhaNavioVertical = 1, colunaNavioVertical = 2;
    int linhaNavioHorizontal = 5, colunaNavioHorizontal = 4;

    int i, j;

    // Inicializando o tabuleiro com água (0)
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // *** Validando se o navio vertical cabe no tabuleiro ***
    if(linhaNavioVertical + TAM_NAVIO <= TAM){
        // Posicionando navio vertical
        for(i = 0; i < TAM_NAVIO; i++){
            tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = NAVIO;
        }
    } else {
        printf("Erro: Navio vertical fora do limite do tabuleiro!\n");
        return 1;
    }

    // *** Validando se o navio horizontal cabe no tabuleiro ***
    if(colunaNavioHorizontal + TAM_NAVIO <= TAM){
        // Checando sobreposição antes de colocar
        for(i = 0; i < TAM_NAVIO; i++){
            if(tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] == NAVIO){
                printf("Erro: Navios se sobrepõem!\n");
                return 1;
            }
        }

        // Posicionando navio horizontal
        for(i = 0; i < TAM_NAVIO; i++){
            tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = NAVIO;
        }
    } else {
        printf("Erro: Navio horizontal fora do limite do tabuleiro!\n");
        return 1;
    }

    // *** Exibindo o tabuleiro ***
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}