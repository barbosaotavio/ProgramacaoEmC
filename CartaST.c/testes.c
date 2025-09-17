#include <stdio.h>
#include <string.h>

int main() {
    int opcao;

    // Carta 1
    char pais1[50] = "Brasil";
    char codigo1[20] = "A01";
    char estado1[20] = "RJ";
    char cidade1[50] = "Itaboraí";
    int populacao1 = 43532;
    float area1 = 512.55;
    float pib1 = 752.422;
    int pontost1 = 31;

    // Carta 2
    char pais2[50] = "Estados Unidos";
    char codigo2[20] = "B02";
    char estado2[20] = "CA";
    char cidade2[50] = "Los Angeles";
    int populacao2 = 12325000;
    float area2 = 1521.11;
    float pib2 = 1800.550;
    int pontost2 = 50;

    // Cálculos de densidade e PIB per capita
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    do {
        printf("\n=== MENU SUPER TRUNFO ===\n");
        printf("1 - Nome do país\n");
        printf("2 - População\n");
        printf("3 - Área\n");
        printf("4 - PIB\n");
        printf("5 - Pontos Turísticos\n");
        printf("6 - Densidade Demográfica\n");
        printf("7 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\n=== Nome dos Países ===\n");
                printf("Carta 1: %s\n", pais1);
                printf("Carta 2: %s\n", pais2);
                printf("Esse atributo não é comparável, apenas exibe os nomes.\n");
                break;

            case 2:
                printf("\n=== Comparação de População ===\n");
                printf("%s: %d habitantes\n", pais1, populacao1);
                printf("%s: %d habitantes\n", pais2, populacao2);

                if (populacao1 > populacao2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (populacao1 < populacao2) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 3:
                printf("\n=== Comparação de Área ===\n");
                printf("%s: %.2f km²\n", pais1, area1);
                printf("%s: %.2f km²\n", pais2, area2);

                if (area1 > area2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (area1 < area2) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 4:
                printf("\n=== Comparação de PIB ===\n");
                printf("%s: %.3f bilhões\n", pais1, pib1);
                printf("%s: %.3f bilhões\n", pais2, pib2);

                if (pib1 > pib2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (pib1 < pib2) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 5:
                printf("\n=== Comparação de Pontos Turísticos ===\n");
                printf("%s: %d pontos\n", pais1, pontost1);
                printf("%s: %d pontos\n", pais2, pontost2);

                if (pontost1 > pontost2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (pontost1 < pontost2) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 6:
                printf("\n=== Comparação de Densidade Demográfica ===\n");
                printf("%s: %.2f hab/km²\n", pais1, densidade1);
                printf("%s: %.2f hab/km²\n", pais2, densidade2);

                // Regra invertida: vence o menor valor
                if (densidade1 < densidade2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (densidade1 > densidade2) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                break;

            case 7:
                printf("\nSaindo do jogo... Até mais!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while(opcao != 7);

    return 0;
}
