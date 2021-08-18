#include<stdio.h>
#include<math.h>
int main(){

    int numero1, numero2, calculo;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &numero1, &numero2);
    calculo = pow(numero1, numero2);
    printf("numero1^numero2 = %d\n", calculo);
    printf("((numero1^numero2)**(1/2))=%.2f",sqrt(calculo));


    return 0;
}
