#include <stdio.h>

int main(){
    char carta[50] = "Carta 01";
    char estado[20] = "RJ";
    int codigo = 01;
    char cidade[50] = "Itaboraí";
    float populacao = 43532;
    float area = 1512.55;
    float pib = 752.42;
    int pontost = 31;

    printf("Carta. %s\n", carta);
    printf("Estado: %s \n", estado);
    printf("Código da carta: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População da cidade: %f \n", populacao);
    printf("Area da cidade: %f\n", area);
    printf("PIB: %f\n",pib);
    printf("Pontos turísticos da cidade: %d\n");
}

