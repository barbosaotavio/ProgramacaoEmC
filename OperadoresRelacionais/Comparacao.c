# include <stdio.h>

int main(){

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero 1 == numero2: %d\n", numero1 == numero2);


    float numero3 = 10.2;
    int numero4 = 10;

    printf("numero3 > numero4: %d\n", (int)numero3 > numero4);
    printf("numero 3 == numero4: %d\n", (int)numero3 == numero4);

    // Neste caso foi usado o (int) para fazer a  conversão explicita, descartando a parte decimal
    

}