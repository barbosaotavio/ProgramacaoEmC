#include <stdio.h>

int main(){

    int i, j;
    int num;

    for(i = 1; i <= 5; i++){
        num = 1;

        for(j = 1; j <= i; j++){
            printf("%d", num);
            ++num;
        }

        printf("\n");
    }        


}