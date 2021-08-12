#include <stdio.h>

int main(){
    double raio, pi, area;
    pi = 3.14159;
    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &raio);

    area = pi * raio * raio;

    printf("A área de um círculo de raio %.2fcm é de %.2f\n", raio, area);

    return 0;
}
