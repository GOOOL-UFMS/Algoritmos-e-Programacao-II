#include <stdio.h>
#include <math.h>

int maxfator(int num){
    for (int i = abs(num) - 1; i > 0; i--){
        if (num % i == 0)
            return i;
    }
    return 1;
}

int main() {
    int n, fator;

    scanf("%d", &n);

    fator = maxfator(n);

    printf("%d %d\n", n, fator);

    return 0;
}
