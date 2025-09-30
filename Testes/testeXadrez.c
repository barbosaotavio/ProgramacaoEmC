#include <stdio.h>

// Função recursiva para Torre
void moverTorre(int casas, int atual) {
    if (atual > casas) return; 
    printf("Direita (%d casa)\n", atual);
    moverTorre(casas, atual + 1); 
}

// Função recursiva para Rainha
void moverRainha(char direcao[], int casas, int atual) {
    if (atual > casas) return; 
    printf("%s (%d casa)\n", direcao, atual);
    moverRainha(direcao, casas, atual + 1); 
}

// Função recursiva auxiliar para o Bispo (horizontal)
void moverBispoHorizontal(int vertical, int horizontal, int casas) {
    if (horizontal > casas) return;
    if (vertical == horizontal) {
        printf("Cima, Direita (%d casa)\n", vertical);
    }
    moverBispoHorizontal(vertical, horizontal + 1, casas);
}

// Função recursiva principal para o Bispo (vertical)
void moverBispo(int vertical, int casas) {
    if (vertical > casas) return;
    moverBispoHorizontal(vertical, 1, casas);
    moverBispo(vertical + 1, casas);
}

// Movimento do Cavalo com loops aninhados complexos
void moverCavalo() {
    int movimentoVertical = 2;  
    int movimentoHorizontal = 1; 

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movimentoVertical; i++) {
        for (int j = 1; j <= movimentoHorizontal + 1; j++) {
            if (i == 1 && j == 1) {
                printf("Cima (%d casa)\n", i);
                continue; // vai direto para a próxima iteração
            }
            if (i == 2 && j == 1) {
                printf("Cima (%d casas)\n", i);
            }
            if (i == 2 && j == 2) {
                printf("Direita (%d casa)\n", j - 1);
                break; // encerra o loop interno depois do movimento correto
            }
        }
    }
}

// Função principal
int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre, 1);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(1, casasBispo);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha("Esquerda", casasRainha, 1);
    moverRainha("Cima", casasRainha, 1);
    moverRainha("Baixo", casasRainha, 1);
    moverRainha("Cima, Esquerda", casasRainha, 1);
    moverRainha("Baixo, Direita", casasRainha, 1);

    // Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}