#include <stdio.h>

int main() {
    char carta[50] = "Carta 01";
    char estado[20] = "RJ";
    int codigo = 1;
    char cidade[50] = "Itaboraí";
    float populacao = 43.532;
    float area = 1512.55;
    float pib = 752.422;
    int pontost = 31;

    char resultado[500];

    sprintf(resultado,
        "Carta: %s\n"
        "Estado: %s\n"
        "Código da carta: %d\n"
        "Cidade: %s\n"
        "População da cidade: %.2f\n"
        "Área da cidade: %.2f\n"
        "PIB: %.3f\n"
        "Pontos turísticos da cidade: %d\n",
        carta, estado, codigo, cidade, populacao, area, pib, pontost
    );

    printf("%s", resultado);

    return 0;
}