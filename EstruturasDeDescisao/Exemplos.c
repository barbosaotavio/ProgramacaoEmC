#include <stdio.h>

int main(){

int idade;

printf("Digite a sua idade:\n");
scanf("%d", &idade);

    if(idade >= 60){
        printf("você é um idoso!\n");
    } else if(idade < 60 && idade >= 18){
        printf("você é um adulto!\n");
    } else if(idade < 18 && idade >= 12){
        printf("Voçê é um adolescente!\n");
    } else{
        printf("Você é uma criança!\n");
    }

}