#include <stdio.h>

int main(){

    int idade;
    printf("Digite a sua idade:\n");
    scanf("%d", &idade);
    
    // Criança < 12
    // Adolescente 12 <= x < 18
    // Adulto >= 18 X < 60
    // Idoso > 60

    if(idade < 12){
        printf("Você é criança!\n");
    } else if(idade >= 12 && idade < 18 ){
        printf("você é um adolescente!\n");
    } else if(idade >= 18 && idade < 60){
        printf("você é um adulto!\n");
    } else{
        printf("você é um idoso!\n");
    }

    
}