#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite)
        {
            printf("Você acertou!\n");
            printf("Número secreto %d\n", numeroSecreto);
        }else{
            printf("Você errou!\n");
            printf("Número secreto %d\n", numeroSecreto);
        }
        
        break;

    case 2:
        printf("Explicação das regras!\n");
        printf("Digite a opção relacionada as regras do jogo!\n");
        scanf("%d", &regras);

        switch (regras)
        {
        case 1:
            printf("O jogo é bem simples, você precisa adivinhar o número secreto que o jogo gera!\n");
            break;

        case 2:
            printf("Digite um número de 0 a 9 e veja se você acertou!\n");
            break;
        
        default:
        }

        break;

    case 3:
        printf("Saindo do jogo!\n");
        break;
    default:
        printf("Opção Invalida!\n");
    }

}