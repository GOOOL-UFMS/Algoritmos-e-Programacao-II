/*Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
• Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW) e tempo ativo por dia (real, em horas).
• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo. Apresente este último dado em porcentagem.

Dica: utilize %.2f para impressão dos valores reais com duas casas decimais.*/

#include <stdio.h>

struct tEletro{
    char nome[15];
    float pot, tOn, consumo;
};

void read(tEletro vetor[5]);
float consTotal(tEletro v[5], int t);

int main(){
    tEletro vetor[5];
    int t;
    float consumoTotal;

    read(vetor);

    scanf("%d", &t);

    consumoTotal = consTotal(vetor, t);

    printf("%.2f\n", consumoTotal);
    for (int i = 0; i < 5; i++){
        printf("%.2f\n", (vetor[i].consumo / consumoTotal) * 100);
    }


    return 0;
}

void read(tEletro v[5]){
    for(int i = 0; i < 5; i++){
        scanf(" %[^\n]", v[i].nome);
        scanf("%f", &v[i].pot);
        scanf("%f", &v[i].tOn);
    }
}

float consTotal(tEletro v[5], int t){
    float consumo = 0;
    for (int i = 0; i < 5; i++){
        consumo += (v[i].pot * v[i].tOn) * t;
        v[i].consumo = (v[i].pot * v[i].tOn) * t;
    }
    return consumo;
}
