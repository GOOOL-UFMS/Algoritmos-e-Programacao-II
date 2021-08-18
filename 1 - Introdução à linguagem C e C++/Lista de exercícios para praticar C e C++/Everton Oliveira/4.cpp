#include<stdio.h>

int main(){

    double deposito, taxaJuros, aritmetica, calculo;
    printf("Digite o valor do depósito: ");
    scanf("%lf", &deposito);
    printf("Digite a taxa de juros: ");
    scanf("%lf", &taxaJuros);

    aritmetica = deposito * ((taxaJuros/100.0)+1);
    calculo = aritmetica - deposito;

    printf("O valor total é %.2f, e o valor do rendimento é %.2f", aritmetica, calculo);



    return 0;
}
