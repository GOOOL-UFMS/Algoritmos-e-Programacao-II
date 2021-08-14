/*Projete um algoritmo e implemente um programa 
que leia um número inteiro e compute e imprime 
a soma dos dois dígitos menos significativos 
do número. A entrada é dada por um número 
inteiro. A saída consiste em escrever para o 
número lido a soma dos dois dígitos menos 
significativos desse número, seguido de uma 
nova linha.
Neste exercício não pode ser usado instruções 
condicionais nem de repetição.

Exemplo 1
123
5
Exemplo 2
1678
15
Exemplo 3
100
0
 */

#include <stdio.h>
int main()
{
    int num, resultado, algarismo1, algarismo2;
    scanf("%d", &num);

    algarismo1 = num % 10;
    algarismo2 = (num / 10) % 10;

    resultado = algarismo1 + algarismo2;
    printf("%d", resultado);

    return 0;
}