/*
Projete e implemente um programa em C/C++ que leia três valores reais, 
representando os três lados de um triângulo. 
Calcule e imprima o perímetro e a área desse triângulo. 
A entrada é dada por três números reais representando 
os lados de um dado triângulo. 
Faça uma pesquisa na WEB para encontrar uma forma de computar 
a área de um triângulo tendo como entrada o valor dos lados. 
A saída consiste em imprimir os três números reais lidos representando 
os valores dos lados de um triângulo, perímetro e a área com 
mensagens apropriadas, seguido de uma nova linha. 
Os valores dos lados, perímetro e área devem ser impressos 
com 5 espaços, sendo duas casas decimais. 
O (.) também ocupa um espaço e para obter esse formato de uma 
lida no material sobre a função printf (%5.2f) da linguagem C.
Você pode usar a função sqrt da biblioteca math. 
Para usar essa função, você deve usar a instrução #include<math.h> 
e na compilação, incluir a chamada para essa biblioteca (-lm).
Neste exercício não pode ser usado instruções condicionais nem de repetição.

Exemplo 1
3.0
4.0
5.0
Lados =  3.00,  4.00,  5.00
Perímetro = 12.00
Área =  6.00

Exemplo 2
1.0
1.0
1.0
Lados =  1.00,  1.00,  1.00
Perímetro =  3.00
Área =  0.43

Exemplo 3
2.0
2.5
2.5
Lados =  2.00,  2.50,  2.50
Perímetro =  7.00
Área =  2.29
*/

#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, perimetro, area, semiperimetro;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    perimetro = a + b + c;
    semiperimetro = perimetro / 2;
    area = sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b ) * (semiperimetro - c));

    printf("Lados = %5.2f, %5.2f, %5.2f", a, b, c);
    printf("\nPerímetro = %5.2f", perimetro);
    printf("\nÁrea = %5.2f", area);
}
