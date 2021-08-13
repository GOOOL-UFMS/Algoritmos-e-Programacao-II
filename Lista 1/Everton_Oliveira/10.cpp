#include<stdio.h>

int main(){


    double deposito, saque, custo=0.38*0.01;
    printf("Digite o valor do deposito: ");
    scanf("%lf",&deposito);
    printf("Digite o valor do saque: ");
    scanf("%lf",&saque);
    deposito = deposito - saque - saque*custo;
    printf("Digite o valor do saque: ");
    scanf("%lf",&saque);
    deposito = deposito - saque - saque*custo;
    printf("O valor do seu saldo é: RS%.2lf", deposito);
    return 0;
}
