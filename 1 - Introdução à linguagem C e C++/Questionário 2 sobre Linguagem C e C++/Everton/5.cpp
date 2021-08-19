#include<stdio.h>

int main(){
    int i, j;
    scanf("%d %d", &i, &j);

    int matriz1[i][j], resultado[i];

    for(int k = 0; k<i; k++)
    {
        for(int w = 0; w<j; w++)
        {
        scanf("%d", &matriz1[k][w]);
        }
    }

    int vetor[j];
    for (int k = 0; k<j; k++)
    { 
        scanf("%d", &vetor[k]);
    }

    for (int w = 0; w<j; w++)
    {
        for (int k = 0; k < i; k++)
        {
            resultado[k] = 0;
        }
    }
    
    for (int w = 0; w<j; w++)
    {
        for (int k = 0; k < i; k++)
        {
            resultado[k] = resultado[k] + matriz1[k][w] * vetor[w];
        }

    }


/*    for(int k = 0; k<i; k++)
    {
        for(int w = 0; w<j; w++)
        {
        matriz[k][1] = matriz1[k][w] * vetor[k];
        
        }
    }
    */
    for (int k = 0; k < i; k++)
    {
         printf("%d ", resultado[k]);
    }
    
    return 0;
}
// printar uma matriz
 /*for (int k = 0; k < i; k++)
    {
      for (int w = 0; w < j; w++)
      {
         printf("%d", matriz1[k][w]);
      }
    }*/
