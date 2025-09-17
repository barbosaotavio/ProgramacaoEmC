#include <stdio.h>

int main(){

    int temperatura = 33;
    int resultado;

    resultado = temperatura > 30 ? 1 : 0;

    if(resultado == 1 ){
        printf("Está calor!\n");
    }else{
        printf("Está frio!\n");
    }

    // temperatura > 30 ? printf("Está calor!\n") : printf("Está frio\n");

    // if(temperatura > 30){
    //     printf("Está calor!\n");
    // } else{
    //     printf("Está frio!\n");
    // }

}