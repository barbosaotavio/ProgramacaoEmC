#include <stdio.h>

int main(){

     int idade, renda, dependentes;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua renda mensal:\n");
    scanf("%d", &renda);

    printf("DIigta suas depêndencias:\n");
    scanf("%d", &dependentes);

     if(idade >= 18 && idade < 65){
          if(renda < 3000){
               if(dependentes > 2){
                    printf("Você atende a todos os criterios.\n");
               } else{
                    printf("Você não atendende o criterio dependente.\n");
               }
          }else {
               printf("você não atende ao critério renda.\n");
          }
          
     } else{
          printf("Você não atende o critério idade.\n");
     }
     

    }

       