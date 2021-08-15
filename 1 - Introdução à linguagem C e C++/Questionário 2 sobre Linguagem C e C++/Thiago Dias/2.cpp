#include <stdio.h>



int main(){
    int tamA, tamB;
    bool min = false;

    scanf("%d", &tamA);
    int discA[tamA];
    for (int i = 0; i < tamA; i++) {
        scanf("%d", &discA[i]);
    }

    scanf("%d", &tamB);
    int discB[tamB];
    for (int i= 0; i < tamB; i++) {
        scanf("%d", &discB[i]);
    }

    for (int i =0; i < tamA; i++) {
        for (int j = 0; j < tamB; j++) {
            if (discA[i] == discB[j]) {
                printf("%d ", discB[j]);
                min = true;
            }
        }
    }

    if (min == false){
        printf("vazia\n");
    }

    return 0;
}
