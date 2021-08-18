#include<stdio.h>

int main(){

    double altura, base, area;

    printf("Digite o comprimento da base: ");
    scanf("%lf", &base);
    printf("Digite o comprimento da altura: ");
    scanf("%lf",&altura);

    area = base*altura/2;
    printf("A área é %.2f",area);



    return 0;
}
