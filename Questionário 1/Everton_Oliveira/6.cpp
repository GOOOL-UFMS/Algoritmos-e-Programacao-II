#include<stdio.h>


int main(){

    int inicio, fim, soma = 0;

    scanf("%d %d", &inicio, &fim);
    

    for(inicio=inicio; inicio<=fim; inicio++){
        if (inicio%2!=0){
            soma = soma + inicio;
        }
    }

    printf("%d", soma);




    return 0;}
