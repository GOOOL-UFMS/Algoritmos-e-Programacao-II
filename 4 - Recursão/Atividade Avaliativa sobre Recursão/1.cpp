#include <stdio.h>

int mdc(int a, int b, int divisor){

    if(a % divisor == 0 && b % divisor == 0){
        return divisor;
    }
    else{
        return mdc(a, b, divisor - 1);
    }
}


int main(void) {
    int maximoDivisor, x1, x2, menor, maior;

    scanf("%d %d", &x1, &x2);
    
    if (x1 < x2){
        menor = x1;
        maior = x2;
    }
    else{
        menor = x2;
        maior = x1;
    }

    maximoDivisor = mdc(menor, maior, menor);
    
    printf("%d\n", maximoDivisor);
    
    return 0;
}
