#include <stdio.h>

int main(){

    int nota;
    
    printf("Digite a sua Nota:\n");
    scanf("%d",&nota);

    if(nota >= 90){
        printf("O conceito é A\n");
    } else if(nota >= 80){
        printf("O conceito é B\n");
    } else if(nota >= 70){
        printf("O conceito é C\n");
    } else if(nota >= 60){
        printf("O conceito é D\n");
    } else if(nota >= 50){
        printf("O conceito é E\n");
    } else{
        printf("O conceito é F! Estude mais.\n");
    }

}