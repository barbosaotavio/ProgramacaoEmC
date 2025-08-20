#include <stdio.h>

int main(){

    // int a = 10;
    // float b =3.5;
    // float soma = a + b;

    // printf("A soma é: %.2f\n", soma); // A varial 'a' é convertida implicitamente para float.

    int a = 10;
    int b = 3;
    float quociente = (float) a / b;

    printf("Quociente: %.2f\n", quociente);

    int x = 15;
    int y = 2;
    float res = (float) x / y;

    printf("Res é: %.2f\n", res);

    int m = 19;
    int n = 2;
    float resultado = (float) m / n;

    printf("O resultado é: %.1f\n", resultado);

}
