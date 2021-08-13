#include<stdio.h>
#include<math.h>

int main(){

    double  custoEspetaculo, precoConvite, calculo1;
    int calculo;
    printf("Digite o valor do custo do Teatro: ");
    scanf("%lf",&custoEspetaculo);
    printf("Digite o valor do convite: ");
    scanf("%lf",&precoConvite);
    //calculo = round(custoEspetaculo/precoConvite);
    //printf("%d\n", calculo);
    calculo = ceil(custoEspetaculo/precoConvite);
    //A FUNÇÃO CEIL SEMPRE APROXIMA PARA O VALOR ACIMA;
    printf("%d\n convite deverá ser vendidos para cobrir o valor do evento;", calculo);
    //printf("******************************");
    //calculo1 = round(custoEspetaculo/precoConvite);
    //printf("%lf\n", calculo1);
    //calculo1 = ceil(custoEspetaculo/precoConvite);
    //printf("%lf\n", calculo1);

    return 0;
}
