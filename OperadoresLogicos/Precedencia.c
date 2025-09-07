#include <stdio.h>

int main(){

    // int a = 5; 
    // int b = -10;
    // int c = 1;

    // a > 0 => verdadeiro
    // b < 0 => verdadeiro
    // verddadeiro && verdadeiro => verdadeiro
    // verdadeiro || c == 0
    // verdadeiro || falso => verdadeiro


    // if(a > 0 && b < 0 || c == 0){
    //     printf("A condição é verdadeira!");
    // }else{
    //     printf("A condição é falsa!");
    // }


    int a = 5;
    int b = 10;
    int c = 1;

    // a > 0 => verdadeiro
    // b < 0 => falso
    // verddadeiro && falso => falso
    // falso || c == 0
    // falso || falso => falso

    if(a > 0 && b < 0 || c == 0){
        printf("A condição é verdadeira!");
    }else{
        printf("A condição é falsa!");
    }
    

}