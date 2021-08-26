#include <stdio.h>

int piso_log2(int n){
    int cont = -1;

    while (n > 0){
        n /= 2;
        cont++;
    }

    return cont;
}

int main(){
    int n, log;

    scanf("%d", &n);

    log = piso_log2(n);

    printf("%d\n", log);

    return 0;
}
