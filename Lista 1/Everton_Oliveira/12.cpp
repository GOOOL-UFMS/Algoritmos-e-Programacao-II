#include<stdio.h>
#include<math.h>

int main(){

   double salarioMinimo, salarioFuncionario, calculo;
   printf("Digite o valor do salário mínimo vigente: ");
   scanf("%lf",&salarioMinimo);
   printf("Digite o salário do funcionário: ");
   scanf("%lf",&salarioFuncionario);
   calculo = ceil(salarioFuncionario/salarioMinimo);
   printf("O funcionário recebe %.0f salários mínimos.", calculo);
   return 0;
}
