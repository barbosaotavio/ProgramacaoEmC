#include <stdio.h>

int main(){

    int idade, renda;

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Digite a sua renda mensal:\n");
    scanf("%d", &renda);

    if(idade <= 18 || idade >= 60){
        if(renda < 2000){
            printf("você tem direito ao desconto!\n");
        } else{
            printf("Você não tem direito ao desconto devido a renda!\n");
        }
        
    }else{
        printf("Você não atende aos critérios devido a idade!\n");
    }

}