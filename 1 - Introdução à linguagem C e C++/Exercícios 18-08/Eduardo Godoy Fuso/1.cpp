#include <stdio.h>
#define MAX 50
void calcula_max_min(float vetor[MAX], int n, int &ind_max, int &ind_min){
     ind_max = vetor[0];
     ind_min = vetor[0];
     vetor[n];
     
     for (int i = 0; i < n; ++i) {
        if (vetor[i] > ind_max){
            ind_max = vetor[i];
        }
            
        if (vetor[i] < ind_min){
            ind_min = vetor[i];
        } 
    }
    printf("Maior: %d\n", ind_max);
    printf("Menor: %d", ind_min);      
}

int main()
{
    int maior, menor, n, subt;
    float vetor[MAX];
    
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);


    for(int i = 0; i < n; ++i){
        printf("Elemento %d: ", i);
        scanf("%f", &vetor[i]);
    }
    calcula_max_min(vetor, n, maior, menor);
    subt = maior - menor;
    printf("\n%d - %d = %d", maior, menor, subt);
}