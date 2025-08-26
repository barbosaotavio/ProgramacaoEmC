#include <stdio.h>

int main(){

    // Declarar variáveis produto, u i estoque, double ou float valor unitario

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40; 

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB; 

    int resultadoA, resultadoB;

    // Exibir as informações do produto
    printf("Produto %s tem o estoque %u e o valor unitario é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem o estoque %u e o valor unitario é R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparação com o valor mínimo

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    // Comparações entre os valores totais dos produtos.
    printf("O valor total de A (R$ %.2f) é maior que o valor total do B (R$%.2f)? %d\n",
    estoqueA * valorA,
    estoqueB * valorB,    
    (estoqueA * valorA) > (estoqueB * valorB));
   

}