#include<stdio.h>

int main(){
    double p = 3.14159;
    double raio;
    double area;
    
    printf("Digite o raio da circunferência: ");
    scanf("%lf", &raio);
    area = p*raio*raio;
    printf("A=%.4f\n",area);
    return 0;
}
