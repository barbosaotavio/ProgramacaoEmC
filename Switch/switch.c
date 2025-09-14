#include <stdio.h>

int main(){

    int variavel;

    printf("Digite um valor:\n");
    scanf("%d", &variavel);

    switch (variavel)
    {
    case 1:
        printf("Código a ser executado se a variavel for == 1\n");
        printf("Teste do case 1");
    break;

    case 2:
        printf("Código a ser executado se a variavel for == 2\n");
        ("Teste do case 2");
    break;    
    default:
        printf("Código a ser executado se a variavel não for um ou 2\n");
    }

}