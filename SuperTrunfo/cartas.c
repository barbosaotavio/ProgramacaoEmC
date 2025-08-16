#include <stdio.h>

int main() {
    
    // Carta 1
    char carta1[50] = "Carta 1";
    char codigo1[20] = "A01";
    char estado1[20] = "RJ";
    char cidade1[50] = "Itaboraí";
    float populacao1 = 43.532;
    float area1 = 512.55;
    float pib1 = 752.422;
    int pontost1 = 31;

    // Carta 2
    char carta2[50] = "Carta 2";
    char codigo2[20] = "B02";
    char estado2[20] = "SP";
    char cidade2[50] = "Guarulhos";
    float populacao2 = 12325.0;
    float area2 = 1521.11;
    float pib2 = 1800.550;
    int pontost2 = 50;

    char resultado1[500];
    char resultado2[500];

    // Monta o texto da carta 1
    sprintf(resultado1,
        "Carta: %s\n"
        "Código da carta: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "População da cidade: %.3f\n"
        "Área da cidade: %.2f km²\n"
        "PIB: %.3f bilhões de reais\n"
        "Pontos turísticos da cidade: %d\n",
        carta1, codigo1, estado1, cidade1, populacao1, area1, pib1, pontost1
    );

    // Monta o texto da carta 2
    sprintf(resultado2,
        "Carta: %s\n"
        "Código da carta: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "População da cidade: %.3f\n"
        "Área da cidade: %.2f km²\n"
        "PIB: %.3f bilhões de reais\n"
        "Pontos turísticos da cidade: %d\n",
        carta2, codigo2, estado2, cidade2, populacao2, area2, pib2, pontost2
    );

    // Exibe as cartas
    printf("%s\n", resultado1);
    printf("%s\n", resultado2);

    return 0;
}