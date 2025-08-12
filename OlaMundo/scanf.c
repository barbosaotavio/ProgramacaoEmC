#include <stdio.h>

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];
    
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura:");
    scanf("%f", &altura);
    printf("A sua altura é:%.2f\n", altura);

    printf("Digite a primeira letra do seu nome:");
    scanf(" %c", &opcao);
    printf("A primeira letra do seu nome é: %c\n", opcao);

    printf("Digite o seu nome:");
    scanf("%s", nome);
    printf("O seu nome é: %s\n", nome);
}