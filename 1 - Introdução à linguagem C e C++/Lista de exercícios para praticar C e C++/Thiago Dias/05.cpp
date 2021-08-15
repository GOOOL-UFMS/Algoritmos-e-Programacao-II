#include <stdio.h>

int main(){
    double b, h, a;

    printf("Digite valores da base e altura de um triângulo, separados por espaço: ");
    scanf("%lf %lf", &b, &h);

    a = (b * h) / 2;

    printf("Área do triângulo = %.2f", a);

    return 0;
}
