#include <stdio.h>

 int main(){

//     int nota1, nota2, nota3;
//     int media;
    

//     printf("*** Programa de Cálculo de Média ***\n");

//     printf("Primeira nota\n");
//     scanf("%d", &nota1);
    
//     printf("Segunda nota\n");
//     scanf("%d", &nota2);

//     printf("Terceira nota\n");
//     scanf("%d", &nota3);

//     media = (nota1 + nota2 + nota3) / 3;

//     printf("A média do aluno é: %d\n", media);



    // Usando o float

     float nota1, nota2, nota3;
     float media;
    

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Primeira nota\n");
     scanf("%f", &nota1);
    
    printf("Segunda nota\n");
     scanf("%f", &nota2);

    printf("Terceira nota\n");
     scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.1f\n", media);

    // Usando o Cast (conversão explicita)

    /*int nota1, nota2, nota3;
    float media;
    

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Primeira nota\n");
    scanf("%d", &nota1);
    
    printf("Segunda nota\n");
    scanf("%d", &nota2);

    printf("Terceira nota\n");
    scanf("%d", &nota3);

    media = (float) (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.1f\n", media);
    */

}