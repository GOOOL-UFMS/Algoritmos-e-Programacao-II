/*
Projete e implemente um programa para calcular 
o saldo da sua conta corrente. 
Seu programa deve ler o saldo disponível, 
a operação a ser realizada, (D) depósito ou (S) saque 
e o valor da operação.O programa deve calcular 
e imprimir o saldo após a operação. 
O valor máximo a ser impresso é R$ +99999.99 ou R$ -99999.99. 
O formato inclui uma posição para o sinal (+/-), 
são 5 caracteres para a parte inteira, 
uma posição para o ponto (.) e duas posições para a parte decimal. 
No caso do usuário fornecer um código inválido, a operação não deve ser considerada. 
A entrada é dada por um número real, um caractere e um número real, 
representando o saldo, o código da operação e o valor da operação, respectivamente. 
A saída consiste em imprimir para a operação de cálculo do saldo, o valor do saldo (com mensagens apropriadas). 
Os valores do saldo devem ser impressos utilizando 10 espaços, sinal e com duas casas decimais (%+10.2f).
Considerando que o usuário pode entrar com uma letra minúscula para a operação, 
transforme todos os caracteres lidos para maiúsculos 
usando a função toupper da biblioteca ctype (toupper(a) == A).

Exemplo 1
10000.00 D 1000.99
Saldo atual: R$ +11000.99

Exemplo 2
10000.00 S 250.49
Saldo atual: R$ +9749.51

Exemplo 3
1000.00 C 500.00
Saldo atual: R$ +1000.00

Exemplo 4
5000.00 S 5000.01
Saldo atual: R$ -0.01

Exemplo 5
1000.00 D 9000.00
Saldo atual: R$ +10000.00
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    double saldo, valor, saldoatual;
    char operacao;

    scanf("%lf", &saldo);
    scanf(" %c", &operacao);
    scanf("%lf", &valor);
    
    operacao = toupper(operacao);
    saldoatual = saldo;

    if (operacao == 'D')
    {
        saldoatual = saldo + valor;
    }
    else{
        if (operacao == 'S')
        {
            saldoatual = saldo - valor;
        }
    }

    if (saldoatual >= 0){
    printf("Saldo atual: R$ +%10.2f", saldoatual);
    }
    else{
        printf("Saldo atual: R$ -%10.2f", saldoatual);
    }
    return 0;
}
