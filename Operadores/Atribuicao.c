#include <stdio.h> 

int main(){

     /*
     Atribuião simples(=)
     Atribuição com soma(+=)
     Atribuição com subritação(-=)
     Atribuição com multiplicação(*=)
     Atribuição com divisão(/=)
     */

    int numero1, numero2, resultado;

    resultado = 10;
    printf("resultado %d\n", resultado);

    resultado += 50;
    printf("resultado %d\n", resultado);

    resultado -= 5;
    printf("resultado %d\n", resultado);

    resultado *= 10;
    printf("resultado %d\n", resultado);

    resultado /= 5;
    printf("resultado %d\n", resultado);

}