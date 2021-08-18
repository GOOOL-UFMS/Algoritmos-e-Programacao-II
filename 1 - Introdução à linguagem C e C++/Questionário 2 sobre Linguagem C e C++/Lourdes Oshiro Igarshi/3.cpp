/* Projete e implemente um programa que leia um vetor L 
de números inteiros e imprima true se o primeiro elemento 
de L for maior que todos os outros elementos de L, 
e false caso contrário.

A entrada é dada por duas linhas. 
A primeira linha contém um número inteiro 
tam indicando o tamanho do vetor, 
e a segunda linha contém tam números inteiros (vetor). 
A saída consiste em imprimir true se o primeiro elemento 
do vetor é maior que todos os demais elementos do vetor 
e false caso contrário.

Exemplo 1
6
8 2 6 5 1 3
true

Exemplo 2
4
7 2 1 7
false

Exemplo 3
1
10
true */

#include <stdio.h>
#include <math.h>
int main()
{
    int num, maior, x, inicio;
    scanf("%d", &num);
    scanf("%d", &maior);
    inicio = maior;
    
    if (num == 1)
    {
        printf("true");
    }
    else
    {
        while (num > 1)
        {
            scanf("%d", &x);
            if (x >= maior)
            {
                printf("false");
                break;
            }
            else
            {
                if (num == 2 && maior == inicio)
                {
                    printf("true");
                }
            }
            num = num - 1;
        }
    }
    return 0;

}