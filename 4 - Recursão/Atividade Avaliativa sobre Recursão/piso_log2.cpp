#include <stdio.h>

int piso_log2(int n){
    if(n /2 == 1){
        return 1;
    }
    else{
        return 1 + piso_log2(n/2);
    }
}


int main(void) {
    int num, resultado;

    scanf("%d", &num);

    resultado = piso_log2(num);
    
    printf("%d\n", resultado);
    
    return 0;
}
