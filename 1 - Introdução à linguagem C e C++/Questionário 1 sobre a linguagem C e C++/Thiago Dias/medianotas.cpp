#include<stdio.h>

int main() {
   double prova1, prova2, prova3, mediaProvas, trabalho1, trabalho2, mediaTrabalhos, mediaFinal;

   scanf("%lf %lf %lf %lf %lf", &prova1, &prova2, &prova3, &trabalho1, &trabalho2);

   mediaProvas = (prova1 + prova2 + prova3) / 3;
   mediaTrabalhos = (trabalho1 + trabalho2) / 2;

   mediaFinal = (mediaProvas * 7.5 + mediaTrabalhos * 2.5) / 10;

   printf("======= NOTAS ========\n");
   printf("Primeira Prova    %4.1f\n", prova1);
   printf("Segunda Prova     %4.1f\n", prova2);
   printf("Terceira Prova    %4.1f\n", prova3);
   printf("Média Provas      %4.1f\n\n", mediaProvas);
   printf("Primeiro Trabalho %4.1f\n", trabalho1);
   printf("Segundo Trabalho  %4.1f\n", trabalho2);
   printf("Média Trabalhos   %4.1f\n", mediaTrabalhos);
   printf("----------------------\n");
   printf("Média Final       %4.1f\n", mediaFinal);

   return 0;
}
