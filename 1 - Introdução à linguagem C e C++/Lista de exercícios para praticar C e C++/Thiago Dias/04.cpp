#include <stdio.h>

int main(){
    double dep, rend, total;
    int jur;

    printf("Digite o valor do depósito e a taxa de juros separados por espaço: ");
    scanf("%lf %d", &dep, &jur);

    rend = dep * (jur / 100.0);
    total = dep + rend;

    printf("%.2f\n", total);

    return 0;
}
