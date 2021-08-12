#include <stdio.h>

int main(){
    double minWage, wage, qntMinWage;

    printf("Digite o valor de um salário mínimo: ");
    scanf("%lf", &minWage);
    printf("Digite o seu salário: ");
    scanf("%lf", &wage);

    qntMinWage = wage / minWage;

    printf("O seu salário é equivalente a %.2f salários mínimos", qntMinWage);

    return 0;
}
