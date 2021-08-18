/* Seja A uma matriz m x n, de elementos de um determinado tipo, 
e B um vetor n x 1, de elementos de um determinado tipo. 
A multiplicação A x B é a matriz C, m x 1 tal que c[j] = ∑a[i][j]∗b[j] 
para 0 <= i < m e 0 <= j < n.  Projete e implemente um programa em C/C++ 
para ler as dimensões m, n, a matriz A, m x n, e o vetor M, n x 1. 
Considere que os elementos da matriz e do vetor são inteiros. 
Além disso, considere que m e n são menores ou iguais a 10.

A entrada é dada por um bloco de três linhas, 
a primeira com dois números inteiros m, 
n indicando as dimensões da matriz e a segunda linha com os elementos 
da matriz A e a terceira linha os elementos do vetor n x 1. 
A saída é dada pelo vetor C, em uma única linha.

Exemplo 1
3 2

0   6 
-1  2 
5   0 

1 1



6 1 5

 
Exemplo 2
2 2

3  -2 
-2  2 

2 1

3*2 + -2*1 = 4
-2*2 + 2*1 = -2


4 -2 

 

Exemplo 3
3  3

1  0  0  
0  0  1 
0  1  0

1  1  1 


1  1  1
*/

#include <stdio.h>
int main()
{
    int linha, coluna, i, j;
    scanf("%d %d", &linha, &coluna);

    int matriz1[linha][coluna], vetorB[coluna], vetorC[coluna];

    for (i = 0; i < linha; i ++)
    {
        for (j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (j = 0; j < coluna; j++)
    {
        scanf("%d", &vetorB[j]);
    }
    
    for (i = 0; i < linha; i++)
    {
            vetorC[i] = 0;
    }
    
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            vetorC[i] = vetorC[i] + matriz1[i][j] * vetorB[j];
        }
    }

  for (i = 0; i < linha; i++)
    {
            printf("%d ", vetorC[i]);
    }

    return 0;
}