#include <stdio.h>

int main() {
   int inicio, fim, soma, i;

   scanf("%d %d", &inicio, &fim);
   i = inicio;
   soma = 0;

   if (i % 2 == 0){
      i++;
   }

   while (i <= fim){
      soma += i;
      i += 2;
   }

   printf("%d\n", soma);

   return 0;

}
