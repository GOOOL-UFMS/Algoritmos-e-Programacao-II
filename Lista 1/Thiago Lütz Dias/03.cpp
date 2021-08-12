#include <stdio.h>

int main(){
    double sal, novoSal;
    int prcnt;

    printf("Digite o salário atual: ");
    scanf("%lf", &sal);
    printf("Digite a porcentagem de aumento: ");
    scanf("%d", &prcnt);

    novoSal = sal + (sal * (prcnt / 100.0));
    printf("Salário após aumento = R$%.2f", novoSal);

    return 0;
}
