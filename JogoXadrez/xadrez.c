#include <stdio.h>

int main() {
    
    // Quantidade de casas que cada peça vai andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    
    // Movimento da TORRE (for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    // Movimento do BISPO (while)
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", j);
        j++;
    }

    // Movimento da RAINHA (do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 1;

    // Movimento para a esquerda
    do {
        printf("Esquerda (%d casa)\n", k);
        k++;
    } while (k <= casasRainha);

    // Movimento para cima
    k = 1;
    do {
        printf("Cima (%d casa)\n", k);
        k++;
    } while (k <= casasRainha);

    // Movimento para baixo
    k = 1;
    do {
        printf("Baixo (%d casa)\n", k);
        k++;
    } while (k <= casasRainha);

    // Movimento na diagonal: cima esquerda
    k = 1;
    do {
        printf("Cima, Esquerda (%d casa)\n", k);
        k++;
    } while (k <= casasRainha);

    // Movimento na diagonal: baixo direita
    k = 1;
    do {
        printf("Baixo, Direita (%d casa)\n", k);
        k++;
    } while (k <= casasRainha);

    
    // Movimento do CAVALO
    
    printf("\nMovimento do Cavalo:\n");

    int casasBaixo = 2;    // duas casas para baixo
    int casasEsquerda = 1; // uma casa para a esquerda

    // Loop externo (for) -> movimento para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo (%d casa)\n", i);

        // Loop interno (while) -> usado apenas para simular lógica aninhada
        int contador = 0;
        while (contador < 0) { 
            // Aqui não imprime nada, apenas mostra exemplo de loop interno
            contador++;
        }
    }

    // Agora movimento para a esquerda
    int m = 1;
    while (m <= casasEsquerda) {
        printf("Esquerda (%d casa)\n", m);
        m++;
    }

    return 0;
}