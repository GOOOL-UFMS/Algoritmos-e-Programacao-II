#include <stdio.h>

int main(){
    double salario, aritmetica;
    int porcentagem;


    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);
    printf("Digite uma porcentagem: ");
    scanf("%d",&porcentagem);
    aritmetica = ((porcentagem/100.0)+1)*salario;
    printf("O novo saláio é: %.2f", aritmetica);


    return 0;
}
