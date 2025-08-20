#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    int media;
    

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Primeira nota\n");
    scanf("%d", &nota1);
    
    printf("Segunda nota\n");
    scanf("%d", &nota2);

    printf("Terceira nota\n");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %d\n", media);

}