
#include<stdio.h> // printf, scanf
#include<math.h>  // sqrt
// início da função principal
int main(void) {
// declaração das variáveis locais
double lado1, lado2, lado3;
double perimetro, semip;                    // semiperímetro
double area;
    
// entrada: lado1 lado2 lado3 

// Passo 1. Leia os lados do triângulo
   printf("Entre com os valores dos lados do triângulo: ");
    scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
   
// Passo 2. Calcule o perímetro e o semiperímetro
    perimetro = lado1 + lado2 + lado3;
    semip = (lado1 + lado2 + lado3)/2;
// Passo 3. Calcule a área
    area = sqrt(semip*(semip-lado1)*(semip-lado2)*(semip-lado3));
// Passo 4. Imprima o lado, perímetro e área
   printf("Lados = %5.2f, %5.2f, %5.2f\n", lado1, lado2, lado3);
   printf("Perímetro = %5.2f\n", perimetro);
   printf("Área = %5.2f\n", area);

   return 0;

// saida: perímetro == lado1 + lado2 +lado3 && semi == perímetro/2 
//      área == sqrt(semip*(semip-lado1)*(semip-lado2)*(semip-lado3))
} // fim da função principal