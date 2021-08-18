/* Escreva um programa que leia um vetor L de 2 <= tam <= 100 
números inteiros e verifique se os elementos do vetor estão em ordem crescente. 
O programa deverá imprimir verdadeiro se os elementos do vetor estiverem 
em ordem crescente ou falso caso contrário. Note que o seguinte predicado 
pode ser usado para descrever esta propriedade de L, 
caso os elementos de L estiverem em ordem crescente:
para todo i em {1,...,tam-1}: L[i] < L[i+1]}

A entrada é dada por um vetor de números inteiros, 
onde o primeiro elemento é um número tam indicando o tamanho do vetor, 
seguido de tam números inteiros.
A saída consiste em imprimir verdadeiro se o vetor está 
em ordem crescente e falso caso contrário.

Exemplo 1
8 
1 2 3 4 5 6 9 15
verdadeiro

Exemplo 2
4 
1 2 7 7
falso
*/

#include <stdio.h>
int main()
{
    int tamanho, anterior, x1, x2, i, resultado;

    scanf("%d", &tamanho);

    int vetor[tamanho];
    resultado = 1;

    for (i = 1; i <= tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] <= vetor[i - 1] && i > 1)
        {
            resultado = 0;
            break;
        }
    }
    if (resultado == 1)
    {
        printf("verdadeiro");
    }
    else
    {
        printf("falso");
    }

    return 0;
}
