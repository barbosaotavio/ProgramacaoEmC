#include <stdio.h>

int main(){
    /*
    Incremento(++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento(--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento %d\n", numero1);
    //numero1++;
    //numero1 = numero1 +1;
    //numero1 += 1;

    /*
    Pós incremento:
    resultado = numero1;
    numero1++
    */

    resultado = numero1 ++;

    printf("Apos Pós-incremento - Numero1: %d - resultado: %d\n", numero1, resultado);

    resultado = ++numero1;

    printf("Apos pré-incremento - Numero1: %d - resultado: %d\n", numero1, resultado);
    //numero1 = numero1 +1;
    //numero1 -=1
    //numero1 --;
   
    //printf("Apos decremento %d\n", numero1);

    resultado = numero1--;
    printf("Apos pós-decremento - Numero1: %d - resultado: %d\n", numero1, resultado);

    resultado = --numero1;
    printf("Apos pré-decremento - Numero1: %d - resultado: %d\n", numero1, resultado);

}