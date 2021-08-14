#include <stdio.h>
int main()
{
    double prova1, prova2, prova3, mediaprova, trabalho1, trabalho2, mediatrabalho, mediafinal;
    scanf("%lf %lf %lf %lf %lf", &prova1, &prova2, &prova3, &trabalho1, &trabalho2);

    mediaprova = (prova1 + prova2 + prova3) / 3;
    mediatrabalho = (trabalho1 + trabalho2) / 2;
    mediafinal = mediaprova * 0.75 + mediatrabalho * 0.25;

    printf("======= NOTAS ========\n");
    printf("Primeira Prova    %4.1f\n", prova1);
    printf("Segunda Prova     %4.1f\n", prova2);
    printf("Terceira Prova    %4.1f\n", prova3);
    printf("Média Provas      %4.1f\n\n", mediaprova);
    printf("Primeiro Trabalho %4.1f\n", trabalho1);
    printf("Segundo Trabalho  %4.1f\n", trabalho2);
    printf("Média Trabalhos   %4.1f\n", mediatrabalho);
    printf("----------------------\n");
    printf("Média Final       %4.1f", mediafinal);


return 0;
}
