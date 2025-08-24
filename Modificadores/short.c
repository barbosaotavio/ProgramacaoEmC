#include <stdio.h> 

int main(){

    short int numeroPequeno = 32767;
    printf("Número pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 32768;
    printf("Número pequeno atualizado (short int): %d\n", numeroPequeno);

    printf("\n *** Tamanho das variaveis*** \n");
    printf("sort int: %lu B - int: %lu B - long long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("Float: %lu B - Double: %lu B - long double: %lu B\n", sizeof(float), sizeof(double), sizeof(long double));

    return 0;
}