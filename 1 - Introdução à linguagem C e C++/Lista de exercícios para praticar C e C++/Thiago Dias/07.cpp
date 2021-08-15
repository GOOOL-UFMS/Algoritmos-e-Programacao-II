#include <stdio.h>

int main(){
    double pe, pol, jar, mil;
    printf("Digite uma medida em pés: ");
    scanf("%lf", &pe);

    pol = pe * 12;
    jar = pe / 3;
    mil = jar / 1760;

    printf("%.2f pé(s) é(são) equivalente(s) a:\n%.2f polegadas\n%.2f jardas\n%f milhas", pe, pol, jar, mil);

    return 0;
}
