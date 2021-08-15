#include <stdio.h>

int main(){
    int tam, i;

    scanf("%d", &tam);
    int L[tam];

    for (i = 0; i < tam; i++) {
        scanf("%d", &L[i]);
    }

    for (i = 0; i < tam; i++) {
        if (i == tam - 1) {
            printf("verdadeiro\n");
        } else if (L[i] < L[i+1]) {
            continue;
        } else{
            printf("falso");
            break;
        }
    }
  
    return 0;
}
