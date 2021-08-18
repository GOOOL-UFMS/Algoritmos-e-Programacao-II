#include<stdio.h>


int main(){
    int numero, digito, contador=0, op;

    scanf("%d %d", &numero, &digito);


    while (true){
        op = numero % 10;
        if (op == digito){contador++;}
        numero = (int) numero / 10;
        if (numero == 0){break;}
    }
    printf("%d", contador);



    return 0;
}
