#include<stdio.h>

int main() {
   int intNum, umDigito, doisDigito, soma;

   scanf("%d", &intNum);

   umDigito = intNum % 10;

   doisDigito = (intNum / 10) % 10;

   soma = umDigito + doisDigito;

   printf("%d\n", soma);

   return 0;
}
