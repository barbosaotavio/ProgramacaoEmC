#include <stdio.h>

int main(){

    int idade = 26;
    int resultado;
    
    // idade >= 18 ? printf("Você é maior de idade.\n") : printf("Você é menor de idade.\n"); (usando o operador ternário).


    // Atribuindo o valor da idade na variável resultado.
    resultado = idade >= 18 ?  1 : 0;

    if (resultado == 1){
        printf("Você é maior de idade.\n");
    }else{
        printf("Você é menor de idade.\n");
    }
    

    
   

}