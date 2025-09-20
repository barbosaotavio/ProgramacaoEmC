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

    // Cálculos de densidade
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
        printf("7 - Comparar Dois Atributos\n"); // nova opção
        printf("8 - Sair\n");
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

                if (populacao1 > populacao2) printf("Vencedor: %s\n", pais1);
                else if (populacao1 < populacao2) printf("Vencedor: %s\n", pais2);
                else printf("Empate!\n");
                break;

            case 3:
                printf("\n=== Comparação de Área ===\n");
                printf("%s: %.2f km²\n", pais1, area1);
                printf("%s: %.2f km²\n", pais2, area2);

                if (area1 > area2) printf("Vencedor: %s\n", pais1);
                else if (area1 < area2) printf("Vencedor: %s\n", pais2);
                else printf("Empate!\n");
                break;

            case 4:
                printf("\n=== Comparação de PIB ===\n");
                printf("%s: %.3f bilhões\n", pais1, pib1);
                printf("%s: %.3f bilhões\n", pais2, pib2);

                if (pib1 > pib2) printf("Vencedor: %s\n", pais1);
                else if (pib1 < pib2) printf("Vencedor: %s\n", pais2);
                else printf("Empate!\n");
                break;

            case 5:
                printf("\n=== Comparação de Pontos Turísticos ===\n");
                printf("%s: %d pontos\n", pais1, pontost1);
                printf("%s: %d pontos\n", pais2, pontost2);

                if (pontost1 > pontost2) printf("Vencedor: %s\n", pais1);
                else if (pontost1 < pontost2) printf("Vencedor: %s\n", pais2);
                else printf("Empate!\n");
                break;

            case 6:
                printf("\n=== Comparação de Densidade Demográfica ===\n");
                printf("%s: %.2f hab/km²\n", pais1, densidade1);
                printf("%s: %.2f hab/km²\n", pais2, densidade2);

                if (densidade1 < densidade2) printf("Vencedor: %s\n", pais1);
                else if (densidade1 > densidade2) printf("Vencedor: %s\n", pais2);
                else printf("Empate!\n");
                break;

            case 7: {
                int atr1, atr2;
                float val1_a1, val2_a1, val1_a2, val2_a2, soma1, soma2;

                // Exibe opções de atributos numéricos
                printf("\nEscolha o primeiro atributo:\n2 - População\n3 - Área\n4 - PIB\n5 - Pontos Turísticos\n6 - Densidade Demográfica\n");
                scanf("%d", &atr1);

                do {
                    printf("Escolha o segundo atributo (diferente do primeiro):\n2 - População\n3 - Área\n4 - PIB\n5 - Pontos Turísticos\n6 - Densidade Demográfica\n");
                    scanf("%d", &atr2);
                } while(atr2 == atr1);

                // Obter valores dos atributos
                switch(atr1){
                    case 2: 
                    val1_a1 = populacao1; val2_a1 = populacao2;
                        break;
                    case 3:
                     val1_a1 = area1; val2_a1 = area2; 
                        break;
                    case 4: 
                    val1_a1 = pib1; val2_a1 = pib2; 
                        break;
                    case 5:
                    val1_a1 = pontost1; val2_a1 = pontost2;
                        break;
                    case 6:
                    val1_a1 = densidade1; val2_a1 = densidade2;
                        break;
                }
                switch(atr2){
                    case 2:
                    val1_a2 = populacao1; val2_a2 = populacao2;
                        break;
                    case 3:
                     val1_a2 = area1; val2_a2 = area2;
                        break;
                    case 4:
                      val1_a2 = pontost1; val2_a2 = pontost2;
                        break;
                    case 6:
                    val1_a2 = densidade1; val2_a2 = densidade2; 
                        break;
                }

                // Ajusta regra para densidade (menor vence)
                soma1 = 0; soma2 = 0;
                if(atr1 == 6){
                    if(val1_a1 < val2_a1) soma1+=1; else if(val1_a1 > val2_a1) soma2+=1;
                } else {
                    if(val1_a1 > val2_a1) soma1+=1; else if(val1_a1 < val2_a1) soma2+=1;
                }
                if(atr2 == 6){
                    if(val1_a2 < val2_a2) soma1+=1; else if(val1_a2 > val2_a2) soma2+=1;
                } else {
                    if(val1_a2 > val2_a2) soma1+=1; else if(val1_a2 < val2_a2) soma2+=1;
                }

                printf("\n=== Comparação de Dois Atributos ===\n");
                printf("Países: %s vs %s\n", pais1, pais2);
                printf("Atributo 1: %.2f vs %.2f\n", val1_a1, val2_a1);
                printf("Atributo 2: %.2f vs %.2f\n", val1_a2, val2_a2);

                if(soma1 > soma2) printf("Vencedor: %s\n", pais1);
                else if(soma1 < soma2) printf("Vencedor: %s\n", pais2);
                else printf("Empate!\n");

                break;
            }

            case 8:
                printf("\nSaindo do jogo... Até mais!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while(opcao != 8);

    return 0;
}
