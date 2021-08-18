#include <stdio.h>

int main()
{
    int i, inicio, tamanho, resultado;

    scanf("%d", &tamanho);
    scanf("%d", &inicio);

    int vetor[tamanho];
    resultado = 1;

    if (tamanho > 1)
    {
        for (i = 1; i < tamanho; i++)
        {
            scanf("%d", &vetor[i]);
            if (vetor[i] >= inicio)
            {
                resultado = 0;
            }
        }
    }

    if (resultado == 0)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }
    return 0;
}