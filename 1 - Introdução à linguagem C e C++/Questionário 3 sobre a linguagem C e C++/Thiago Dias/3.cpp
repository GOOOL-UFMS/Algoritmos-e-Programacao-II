#include <stdio.h>

#define TAM 100

int crescente(int v[TAM], int tam){
    for (int i = 0; i < tam - 1; i++){
        if (v[i] < v[i+1])
            continue;
        else
            return 0;
    }
    return 1;
}

int main(){
    int n, lista[TAM], valor;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &lista[i]);

    valor = crescente(lista, n);

    if (valor == 1)
        printf("verdadeiro\n");
    else
        printf("falso");


    return 0;
}
