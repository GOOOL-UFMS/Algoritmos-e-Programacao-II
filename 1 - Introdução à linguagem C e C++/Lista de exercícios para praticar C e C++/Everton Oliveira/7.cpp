#include<stdio.h>


int main(){

    double pes, jardas, milhas, polegadas;

    printf("Digite o comprimento em pés: ");
    scanf("%lf", &pes);
    
    polegadas = 12*pes;
    jardas = pes/3;
    milhas = jardas/1760;

    printf("O valor de %.2f convertido para jardas é\n", pes, jardas);
    printf("O valor de %.2f convertido para milhas é\n", pes, milhas);
    printf("O valor de %.2f convertido para polegadas é\n", pes, polegadas);

    return 0;
}
