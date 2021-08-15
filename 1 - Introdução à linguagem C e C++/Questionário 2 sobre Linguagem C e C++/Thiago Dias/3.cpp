#include <stdio.h>

int main(){
    int tam, maiorElem, i;

    scanf("%d", &tam);
    int arr[tam];
    for (i = 0; i < tam; i++){
        scanf("%d", &arr[i]);
    }

    maiorElem = arr[0];

    if (tam == 1){
        printf("true");
        return 0;
    }

    for (i = 1; i < tam; i++){
        if (arr[i] >= maiorElem){
            printf("false");
            break;
        } else{
            if (i == arr[tam - 1]){
                printf("true");
            }
        }
    }

    return 0;
}
