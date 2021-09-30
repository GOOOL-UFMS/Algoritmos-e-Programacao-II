#include <stdio.h>

int potencia(int x, int n){
    if(n == 1){
        return x;
    }
    else if(n == 0) {
        return 1;
    }
    else{
        return x * potencia(x, n-1);
    }
}

int main(void) {
    int base, expoente, potenciaX;

    scanf("%d %d", &base, &expoente);

    potenciaX = potencia(base, expoente);
    
    printf("%d\n", potenciaX);
    
    return 0;
}
