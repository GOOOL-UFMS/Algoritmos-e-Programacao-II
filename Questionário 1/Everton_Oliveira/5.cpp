#include<stdio.h>
#include<math.h>

int main(){

    double lado_a,
           lado_b,
           lado_c,
           perimetro,
           area;
    scanf("%lf %lf %lf", &lado_a, &lado_b, &lado_c);
    perimetro = (lado_a+lado_b+lado_c)/2;
    area = sqrt(perimetro*(perimetro-lado_a)*(perimetro-lado_b)*(perimetro-lado_c));
    printf("Lados = %5.2f, %5.2f, %5.2f\n", lado_a, lado_b, lado_c);
    printf("Perímetro = %5.2f\n", perimetro*2);
    printf("Área = %5.2f\n", area);


    return 0;
}
