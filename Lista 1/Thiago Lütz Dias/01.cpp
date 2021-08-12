#include <stdio.h>

int main(){
    int matr, nFilhos, i;
    double nHoras, vHora, sal, bonus, salTotal;

    printf("Digite o número de matrícula do funcionário: ");
    scanf("%d", &matr);
    printf("Digite o número de horas trabalhadas: ");
    scanf("%lf", &nHoras);
    printf("Digite o valor que ele recebe por hora: ");
    scanf("%lf", &vHora);
    printf("Digite o número de filhos do fúncionário: ");
    scanf("%d", &nFilhos);

    sal = nHoras * vHora;
    bonus = (nFilhos * 10) / 100.0;
    salTotal = sal + (sal * bonus);

    printf("O funcionário de número de matrícula %d trabalhou %.2f horas, recebendo %.2f por hora e ele tem %d filhos.\n", matr, nHoras, vHora, nFilhos);
    printf("Seu salário é %.2f", salTotal);

    return 0;
}
