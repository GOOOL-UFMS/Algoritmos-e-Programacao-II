#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double calc1, calc2;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    double delta = (b*b) - 4*a*c;

        if (delta < 0)
        {
            printf("A equação não possui raízes reais\n");
        }else
        {
            calc1 = (-b - sqrt(delta))/2*a;
            calc2 = (-b + sqrt(delta))/2*a;
            printf("%.2f, %.2f", calc1, calc2);
        }
    
    
}