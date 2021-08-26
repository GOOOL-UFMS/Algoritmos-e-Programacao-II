#include <stdio.h>

bool testetri(double a, double b, double c){
    if ((c * c) == ((b * b) + (a * a)))
        return true;
    else
        return false;
}

int main(){
    double a, b, h;
    bool tRet;

    scanf("%lf %lf %lf", &a, &b, &h);

    tRet = testetri(a, b, h);

    if (tRet == true)
        printf("%.1f %.1f %.1f formam um triângulo retângulo\n",a, b, h);
    else
        printf("%.1f %.1f %.1f não formam um triângulo retângulo\n",a, b, h);

    return 0;
}
