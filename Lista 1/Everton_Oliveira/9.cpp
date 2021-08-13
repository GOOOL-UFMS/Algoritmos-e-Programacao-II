#include<stdio.h>

int main(){


    int anoNascimento, anoAtual, calculo;

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano em que estamos: ");
    scanf("%d", &anoAtual);
    calculo = anoAtual - anoNascimento;
    printf("Você tem/completará neste ano %d anos.\n", calculo);
    calculo = 2034 - anoNascimento;
    printf("Em 2034 você terá %d", calculo);
    return 0;
}
