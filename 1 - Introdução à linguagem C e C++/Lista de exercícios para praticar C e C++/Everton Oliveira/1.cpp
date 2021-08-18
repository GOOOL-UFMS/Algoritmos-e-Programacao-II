#include<stdio.h>

int main(){
    int numeroMatricula, horasTrabalhadas, nFilhos;
    double valorHora, salario;
    printf("Digite o número da matrícula: ");
    scanf("%d", &numeroMatricula);
    printf("Digite a quantidade de horas trabalhadas mensais: ");
    scanf("%d", &horasTrabalhadas);
    printf("Digite o valor que recebe por horas trabalhadas: ");
    scanf("%lf", &valorHora);
    printf("Digite a quantidade de filhos: ");
    scanf("%d", &nFilhos);
    salario = ((0.1 * nFilhos) + 1) * horasTrabalhadas * valorHora;
    printf("O salário é: %.2f", salario);
    return 0;
}
