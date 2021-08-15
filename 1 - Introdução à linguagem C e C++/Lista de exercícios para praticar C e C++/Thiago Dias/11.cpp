#include <stdio.h>
#include <math.h>

int main(){
    double vTotal, vTick;
    int qntMinTick;

    printf("Digite o valor do custo teatral e o valor de cada ticket:\n");
    scanf("%lf %lf", &vTotal, &vTick);

    qntMinTick = ceil(vTotal / vTick);

    printf("O número mínimo de ingressos que devem ser vendidos para custear o show é de %d ingressos", qntMinTick);

    return 0;
}
