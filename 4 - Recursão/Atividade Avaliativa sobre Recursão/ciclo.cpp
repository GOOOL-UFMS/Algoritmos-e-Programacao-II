#include <stdio.h>

int ciclo(int x){
    if(x == 1){
        printf("%d ", x);
        return 1;
    }
    else{
        printf("%d ", x);
        
        if(x % 2 == 0){
            x = x / 2;
        }
        else{
            x = (x * 3) + 1;
        }
        return x = 1 + ciclo(x);
    }
}


int main() {
    int n, contador;

    scanf("%d", &n);

    contador = ciclo(n);
    printf("%d\n", contador);
    
    return 0;
}
