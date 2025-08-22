#include <stdio.h>

int main() {
    // Carta 1
    char carta1[50] = "Carta 1";
    char codigo1[20] = "A01";
    char estado1[20] = "RJ";
    char cidade1[50] = "Itaboraí";
    float populacao1 = 43532.0;    // Corrigi para número inteiro de habitantes
    float area1 = 512.55;
    float pib1 = 752.422;          // em bilhões
    int pontost1 = 31;

    // Carta 2
    char carta2[50] = "Carta 2";
    char codigo2[20] = "B02";
    char estado2[20] = "SP";
    char cidade2[50] = "Guarulhos";
    float populacao2 = 12325000.0; // Exemplo ajustado
    float area2 = 1521.11;
    float pib2 = 1800.550;         // em bilhões
    int pontost2 = 50;

    // Cálculos carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cálculos carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Buffers para armazenar o texto formatado
    char resultado1[600];
    char resultado2[600];

    // Monta o texto da carta 1
    sprintf(resultado1,
        "Carta: %s\n"
        "Código da carta: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "População da cidade: %.0f\n"
        "Área da cidade: %.2f km²\n"
        "PIB: %.3f bilhões de reais\n"
        "Pontos turísticos da cidade: %d\n"
        "Densidade populacional: %.2f hab/km²\n"
        "PIB per capita: %.2f reais\n",
        carta1, codigo1, estado1, cidade1, populacao1, area1, pib1, pontost1,
        densidade1, pibPerCapita1
    );

    // Monta o texto da carta 2
    sprintf(resultado2,
        "Carta: %s\n"
        "Código da carta: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "População da cidade: %.0f\n"
        "Área da cidade: %.2f km²\n"
        "PIB: %.3f bilhões de reais\n"
        "Pontos turísticos da cidade: %d\n"
        "Densidade populacional: %.2f hab/km²\n"
        "PIB per capita: %.2f reais\n",
        carta2, codigo2, estado2, cidade2, populacao2, area2, pib2, pontost2,
        densidade2, pibPerCapita2
    );

    // Exibe as cartas
    printf("%s\n", resultado1);
    printf("%s\n", resultado2);

    return 0;
}
