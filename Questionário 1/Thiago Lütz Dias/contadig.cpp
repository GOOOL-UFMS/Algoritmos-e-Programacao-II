#include<stdio.h>

int main() {
   int numero,
       digito,
       temp,   // armazena o dígito menos significativo
       quant = 0;  // quantidade de dígitos iguais a digito

    scanf("%d %d", &numero, &digito);

    while (numero > 0) {
      temp = numero % 10;
      if (temp == digito){
         quant++;
      }
      numero = numero / 10;
    }

   printf("%d\n", quant);

   return 0;

}
