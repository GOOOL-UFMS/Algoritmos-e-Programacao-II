#include <stdio.h>
#include <math.h>

int main(){
    int a, b, pot;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    pot = pow(a, b);

    printf("%d^%d = %d", a, b, pot);

    return 0;
}
