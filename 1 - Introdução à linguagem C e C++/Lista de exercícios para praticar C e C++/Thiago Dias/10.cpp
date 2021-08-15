#include <stdio.h>

int main(){
    double dep, saq1, saq2, vFinal, imposto;
    imposto = 0.38 / 100;
    printf("Digite os valores de depósito, saque 1 e saque 2, separados por espaço:\n");
    scanf("%lf %lf %lf", &dep, &saq1, &saq2);

    vFinal = dep - ((saq1 + saq1 * imposto) + (saq2 + saq2 * imposto));

    printf("Saldo restante: %.2f", vFinal);

    return 0;
}
