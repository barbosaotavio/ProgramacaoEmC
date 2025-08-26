#include <stdio.h>

int main() {
    // Carta 1
    char carta1[50] = "Carta 1";
    char codigo1[20] = "A01";
    char estado1[20] = "RJ";
    char cidade1[50] = "Itaboraí";
    unsigned long int populacao1 = 43532;   // agora é unsigned long int
    float area1 = 512.55;
    float pib1 = 752.422;   // PIB em bilhões
    int pontost1 = 31;

    // Carta 2
    char carta2[50] = "Carta 2";
    char codigo2[20] = "B02";
    char estado2[20] = "SP";
    char cidade2[50] = "Guarulhos";
    unsigned long int populacao2 = 1232500;
    float area2 = 1521.11;
    float pib2 = 1800.550;  // PIB em bilhões
    int pontost2 = 50;

    // Cálculos
    // Densidade = população / área
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    // PIB per capita = (PIB em bilhões convertido para reais) / população
    float pibPerCapita1 = (pib1 * 1000000000.0) / (float) populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0) / (float) populacao2;

    // Super Poder = soma dos atributos numéricos + inverso da densidade
    float superPoder1 = (float) populacao1 + area1 + pib1 + pontost1 + pibPerCapita1 + (1.0 / densidade1);
    float superPoder2 = (float) populacao2 + area2 + pib2 + pontost2 + pibPerCapita2 + (1.0 / densidade2);

    // Buffers para armazenar as strings formatadas
    char resultado1[800];
    char resultado2[800];

    // Monta o texto da carta 1
    sprintf(resultado1,
        "Carta: %s\n"
        "Código da carta: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "População da cidade: %lu\n"
        "Área da cidade: %.2f km²\n"
        "PIB: %.3f bilhões de reais\n"
        "Pontos turísticos da cidade: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder: %.2f\n",
        carta1, codigo1, estado1, cidade1, populacao1, area1, pib1, pontost1,
        densidade1, pibPerCapita1, superPoder1
    );

    // Monta o texto da carta 2
    sprintf(resultado2,
        "Carta: %s\n"
        "Código da carta: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "População da cidade: %lu\n"
        "Área da cidade: %.2f km²\n"
        "PIB: %.3f bilhões de reais\n"
        "Pontos turísticos da cidade: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder: %.2f\n",
        carta2, codigo2, estado2, cidade2, populacao2, area2, pib2, pontost2,
        densidade2, pibPerCapita2, superPoder2
    );

    // Exibe as cartas
    printf("%s\n", resultado1);
    printf("%s\n", resultado2);

    // Comparações 
    printf("===== Comparacao de Cartas =====\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontost1 > pontost2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
