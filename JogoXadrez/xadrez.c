#include <stdio.h>

// Função recursiva para Torre

void moverTorre(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Direita (%d casa)\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}


// Função recursiva para Rainha

void moverRainha(char direcao[], int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("%s (%d casa)\n", direcao, atual);
    moverRainha(direcao, casas, atual + 1); // chamada recursiva
}


// Função recursiva + loops aninhados para Bispo
// Movimento na diagonal (Cima, Direita)

void moverBispo(int casas) {
    for (int vertical = 1; vertical <= casas; vertical++) {
        for (int horizontal = 1; horizontal <= casas; horizontal++) {
            if (vertical == horizontal) { 
                printf("Cima, Direita (%d casa)\n", vertical);
            }
        }
    }
}


// Movimento do Cavalo (loops aninhados, L = 2 cima + 1 direita)

void moverCavalo() {
    int movimentoVertical = 2;  // duas casas para cima
    int movimentoHorizontal = 1; // uma casa para direita

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movimentoVertical; i++) {
        if (i == 1) {
            printf("Cima (%d casa)\n", i);
            continue; // vai direto para próxima iteração
        }
        if (i == 2) {
            printf("Cima (%d casas)\n", i);
        }
    }

    // loop interno para movimento horizontal
    for (int j = 1; j <= movimentoHorizontal; j++) {
        if (j > 1) break; // controle de fluxo
        printf("Direita (%d casa)\n", j);
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
    moverBispo(casasBispo);

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