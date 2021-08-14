/*
Dado um número inteiro num > 0 e um dígito d, com 0 <= d <= 9, 
determinar quantas vezes o dígito d ocorre no número num. 
Neste exercício não pode ser usado string. 
A entrada é dada por dois números inteiros, 
o primeiro representa o número num e o segundo representa o dígito d. 
A saída consiste em escrever para o número num a quantidade 
de dígitos d que ele possui.
Neste exercício não pode ser usado listas nem arrays (arranjos).
Exemplo 1
231 2
1

Exemplo 2
34134223 2
2

Exemplo 3
22222 2
5
 */

 #include <stdio.h>
 int main()
 {
    int num, digito, xvezes, resultado;
    scanf("%d %d", &num, &digito);

    xvezes = 0;
    while (num != 0){
        if (num % 10 == digito)
        {
            xvezes += 1;
        }
        num = num / 10;
    }
    printf("%d", xvezes);

    return 0;
 }