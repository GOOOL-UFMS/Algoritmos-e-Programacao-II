#include<stdio.h>
#include<ctype.h>

int main() {
   double saldo_Anterior;
   double valor_Operacao;
   double saldo_Atual;
   char   operacao;

   scanf("%lf %c %lf", &saldo_Anterior, &operacao, &valor_Operacao);

   operacao = toupper(operacao);

   if (operacao == 'D'){
      saldo_Atual = saldo_Anterior + valor_Operacao;
   } else if (operacao == 'S'){
      saldo_Atual = saldo_Anterior - valor_Operacao;
   }else{
      saldo_Atual = saldo_Anterior;
   }

   printf("Saldo atual: R$%+10.2f\n", saldo_Atual);

   return 0;
}
