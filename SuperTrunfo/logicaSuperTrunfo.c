#include <stdio.h>

int main() {
    // Carta 1
    char carta1[50] = "Carta 1";
    char codigo1[20] = "A01";
    char estado1[20] = "RJ";
    char cidade1[50] = "Itaboraí";
    float populacao1 = 43532.0;
    float area1 = 512.55;
    float pib1 = 752.422;
    int pontost1 = 31;

    // Carta 2
    char carta2[50] = "Carta 2";
    char codigo2[20] = "B02";
    char estado2[20] = "SP";
    char cidade2[50] = "Guarulhos";
    float populacao2 = 12325000.0;
    float area2 = 1521.11;
    float pib2 = 1800.550;
    int pontost2 = 50;

    // Cálculos de densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibe cartas
    printf("=== CARTA 1 ===\n");
    printf("Cidade: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.3f bilhões\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n\n",
           cidade1, populacao1, area1, pib1, pontost1, densidade1, pibPerCapita1);

    printf("=== CARTA 2 ===\n");
    printf("Cidade: %s\nPopulação: %.0f\nÁrea: %.2f km²\nPIB: %.3f bilhões\nPontos Turísticos: %d\nDensidade: %.2f\nPIB per Capita: %.2f\n\n",
           cidade2, populacao2, area2, pib2, pontost2, densidade2, pibPerCapita2);

    // Comparações estilo Super Trunfo
    printf("=== RESULTADOS DO SUPER TRUNFO ===\n");

    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    // População
    printf("População: ");
    if (populacao1 > populacao2) { printf("%s vence!\n", carta1); pontosCarta1++; }
    else if (populacao1 < populacao2) { printf("%s vence!\n", carta2); pontosCarta2++; }
    else printf("Empate!\n");

    // Densidade Populacional
    printf("Densidade Populacional: ");
    if (densidade1 > densidade2) { printf("%s vence!\n", carta1); pontosCarta1++; }
    else if (densidade1 < densidade2) { printf("%s vence!\n", carta2); pontosCarta2++; }
    else printf("Empate!\n");

    // PIB per Capita
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) { printf("%s vence!\n", carta1); pontosCarta1++; }
    else if (pibPerCapita1 < pibPerCapita2) { printf("%s vence!\n", carta2); pontosCarta2++; }
    else printf("Empate!\n");

    // Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (pontost1 > pontost2) { printf("%s vence!\n", carta1); pontosCarta1++; }
    else if (pontost1 < pontost2) { printf("%s vence!\n", carta2); pontosCarta2++; }
    else printf("Empate!\n");

    // Exibe a carta vencedora geral
    printf("\n=== CARTA VENCEDORA GERAL ===\n");
    if (pontosCarta1 > pontosCarta2) printf("%s\n", carta1);
    else if (pontosCarta2 > pontosCarta1) printf("%s\n", carta2);
    else printf("Empate!\n");

    return 0;
}
