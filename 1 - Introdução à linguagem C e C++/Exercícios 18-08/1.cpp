#include<stdio.h>
#define MAX 50

void calcula_max_min(float vet[MAX], int n, int &ind_max, int &ind_min)
{
    ind_max = vet[0];
    ind_min = vet[0];

    for (int i = 0; i < n; i++)
    {
        if(vet[i] > ind_max)
        {
            ind_max = vet[i];
        }
        if(vet[i] < ind_min)
        {
            ind_min = vet[i];
        }
    }
}

int main()
{
    int n, id_maior, id_menor;
    float notas[MAX], nota_maior, nota_menor, diferenca;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &notas[i]);
    }

    calcula_max_min(notas, n, id_maior, id_menor);
    diferenca = notas[id_maior] - notas[id_menor];
    
    printf("%.2f\n", nota_maior);
    printf("%.2f\n", nota_menor);
    printf("%.2f\n", diferenca);

    return 0;
}
