#include <stdio.h>

int main(){
    double n1, n2, n3, p1, p2, p3, media;

    printf("Digite as 3 notas, separadas por espaço: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    printf("Digite os pesos de cada nota, respectivamente, separados por espaço: ");
    scanf("%lf %lf %lf", &p1, &p2, &p3);

    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    printf("%.2f", media);
}
