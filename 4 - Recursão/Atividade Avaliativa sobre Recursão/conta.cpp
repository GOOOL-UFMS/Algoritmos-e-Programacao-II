#include <stdio.h>
#define MAX 20

int conta(int n, int *W, int k){
    if (n == 0){
        if (W[n] == k){
            return 1;
        }
        else{
            return 0;
        }
    }
    else if(W[n] == k){
        return 1 + conta(n - 1, W, k);
    }
    else{
        return 0 + conta(n - 1, W, k);
    }
}


int main() {
    int n, k, quantidadeK, i, vetor[MAX];

    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &k);

    quantidadeK = conta(n, vetor, k);
    
    printf("%d\n", quantidadeK);
    
    return 0;
}
