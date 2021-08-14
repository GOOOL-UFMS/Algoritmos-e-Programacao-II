/* Projete e implemente um programa em C/C++ 
que leia dois números inteiros, inicio e fim 
e calcule a soma dos números inteiros ímpares 
maiores ou iguais a inicio e menores ou iguais 
a fim.

Exemplo 1
1 100
2500
Exemplo 2
2 99
2499
Exemplo 3
-9 -3
-24
Exemplo 4
2 2
0
*/
#include <stdio.h>
int main()
{
    int num1, num2, somatotal;
    scanf("%d %d", &num1, &num2);

    somatotal = 0;
    
    while (num1 <= num2)
    {
        if (num1 % 2 != 0)
        {
            somatotal += num1;
        }
        num1 += 1;
    }
    printf("%d", somatotal);
    return 0;
}