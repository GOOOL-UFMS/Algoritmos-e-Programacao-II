#include <stdio.h>

double calcSalario(double valorhora, int numHoras){
    if (numHoras > 40)
        return (40 * valorhora + (numHoras - 40) * (1.5 * valorhora));
    else
        return numHoras * valorhora;
}

int main(){
    int nFunc, nHoras;
    double vHora, salario;

    scanf("%d %lf %d", &nFunc, &vHora, &nHoras);

    salario = calcSalario(vHora, nHoras);

    printf("%d %d %.2f %.2f", nFunc, nHoras, vHora, salario);

    return 0;
}
