/*
Se A e B são duas matrizes m x n, de elementos de um determinado tipo, 
sua soma é definida como segue: Se ai,j e ai,j são os elementos 
da entrada da i-ésima linha e j-ésima coluna de A e B, respectivamente, 
então ai,j + bi,j é a entrada da i-ésima linha e j-ésima 
coluna da soma de A e B, a qual também é uma m x n matriz. 
Projete e implemente um programa para ler duas m x n matrizes, 
0 < m,n <= 100 de inteiros, calcular a sua soma, a matriz C, 
e imprimir C, onde cada elemento da matriz C, cij é dado por:
cij = aij + bij

A declaração das matrizes podem ser feitas como abaixo: 
// declaração das variáveis locais
int a[100][100], b[100][100], c[100][100];
A entrada é dada por um bloco de duas linhas, 
a primeira com dois números inteiros m, n indicando as dimensões 
da matriz e a segunda linha com os elementos da matriz.
A saída é dada pelo matriz soma para cada par de matrizes da entrada, 
impressa linha a linha. Ao final deve ser impressa uma linha em branco.

 

Exemplo 1
3 2

0  6 -1  2  5 0
0 -6  1 -2 -5 0

0 0
0 0
0 0

Exemplo 2
2 2

 3(0 0) -2 (0 1)
-2(1 0)  5 (1 1)

-2  2  
 2 -4

1  0
0  1

*/

#include <stdio.h>
int main()
{
    int linha, coluna, i, j;

    scanf("%d %d", &linha, &coluna);

    int matriz1[linha][coluna], matriz2[linha][coluna], matriz3[linha][coluna];

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j ++)
        {
        scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j ++)
        {
        scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (i = 0; i < linha; i ++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
