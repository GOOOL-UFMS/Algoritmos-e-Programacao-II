#include<stdio.h>

int main(){
    double nota1, nota2, nota3, aritmetica;
    int peso1, peso2, peso3;

    printf("Digite as notas separadas por espaço: ");
    scanf("%lf%lf%lf", &nota1, &nota2, &nota3);
    printf("Digite os respectivos pesos de cada nota: ");
    scanf("%d%d%d", &peso1, &peso2, &peso3);
    aritmetica = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);
    printf("A média das notas é: %.2f", aritmetica);

    return 0;
}
