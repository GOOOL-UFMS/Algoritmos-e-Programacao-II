#include <stdio.h>

int main(){
    int linha, coluna, i, j;

    scanf("%d", &linha);
    scanf("%d", &coluna);

    int a[linha][coluna], b[coluna], c[coluna];
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (j = 0; j < coluna; j++){
        scanf("%d", &b[j]);
    }

    for(i = 0; i < linha; i++){
        c[i] = 0;
        for(j = 0; j < coluna; j++){
            c[i] += a[i][j] * b[j];
        }
    }

    for (i = 0; i < linha; i++){
        printf("%d ", c[i]);
    }

    return 0;
}
