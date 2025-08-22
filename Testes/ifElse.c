#include <stdio.h>
#include <string.h> // Necessário para strcmp

int main() {
    char pais[30];

    printf("Onde você mora? ");
    scanf("%s", pais);

    if(strcmp(pais, "Brasil") == 0) {  
        printf("Você é brasileiro!\n");
    } else {
        printf("Você é estrangeiro!\n");
    }

    return 0;
}

