#include <stdio.h>

int main(){
    int linha, col, i, j;

    scanf("%d", &linha);
    scanf("%d", &col);

    int a[linha][col], b[linha][col], c[linha][col];

    for (i = 0; i < linha; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < linha; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < linha; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 0; i < linha; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", c[i][j]);
            if (j == col - 1) {
                printf("\n");
            }
        }
    }

    return 0;
}
