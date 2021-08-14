/*Projete e implemente um programa em C/C++ 
para ler os coeficientes, a, b e c, onde a ≠ 0, 
de uma equação do segundo grau e calcule as raízes da equação. 
A entrada é dada por 3 números (podem ser do tipo double).
A saída consiste em imprimir as raízes da equação ou uma 
mensagem indicando que a equação não possui raízes reais. 
Para calcular a raiz quadrada, 
utilize a função sqrt(num) da biblioteca math.h.

Exemplo 1
1 4 3
-3.00, -1.00

Exemplo 2
1 4 0
-4.00, 0.00

Exemplo 3
1 1 4
A equação não possui raízes reais*/

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, raiz1, raiz2, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;
    /*  ∆ > 0, a equação possui duas raízes reais e distintas.
        ∆ = 0, a equação possui raízes reais iguais.
        ∆ < 0, a equação não possui raízes reais.*/
    if (delta >= 0){
        raiz1 = (-b - sqrt(delta)) / 2 * a;
        if (delta > 0){
            raiz2 = (-b + sqrt(delta)) / 2 * a;
            printf("%.2f, %.2f", raiz1, raiz2);
        }
        else{
            printf("%.2f, %.2f", raiz1, raiz1);
        }
    }
    else
    {
       printf("A equação não possui raízes reais"); 
    }

    return 0;
}