/* Escreva uma função com o protótipo a seguir, que recebe um vetor de
tamanho MAX (MAX = 50), com n elementos armazenados, calcula e retorna
pelos parâmetros o índice do maior elemento e o índice do menor elemento.
void calcula_max_min(float vet[MAX], int n, float &ind_max, float &ind_min) */

#include <stdio.h>

#define MAX 50

void calcula_max_min(float vet[MAX], int n, int &ind_max, int &ind_min){
    int i;

    ind_max = 0;
    ind_min = 0;

    for (i = 0; i < n; i++){
        if (vet[i] > vet[ind_max]){
            ind_max = i;
        }
        if (vet[i] < vet[ind_min]){
            ind_min = i;
        }
    }
}

/*Escreva um programa que leia um número inteiro n e uma sequência de n
notas, onde n ≤ 50 (Observação: Use para isso um vetor com tamanho 50). O
seu programa deve calcular e imprimir a maior nota, a menor nota e a
diferença entre elas. Utilize a função do item a).*/

int main(){
    int n, i, indMaior, indMenor;
    float notas[MAX], maiorNota, menorNota, diff;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%f", &notas[i]);
    }

    calcula_max_min(notas, n, indMaior, indMenor);

    maiorNota = notas[indMaior];
    menorNota = notas[indMenor];
    diff = maiorNota - menorNota;

    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Diferença da maior nota para a menor: %.2f\n", diff);

    return 0;
}
