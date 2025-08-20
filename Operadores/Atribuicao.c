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

    resultado += 50; // resultado passou a valer 60
    printf("resultado %d\n", resultado);

    resultado -= 5; // resultado passou a valer 55
    printf("resultado %d\n", resultado); 

    resultado *= 10; // resultado passou a valer 550
    printf("resultado %d\n", resultado); 

    resultado /= 5; // resultado passou a valer 110
    printf("resultado %d\n", resultado); 

}