/*Faça um programa para simular uma agenda de compromissos e:
 • Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data, nesta ordem. A data
 deve ser outra estrutura de dados contendo dia, mês e ano.
• Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o procedimento até ler M = 0.
Dica: utilize  scanf("%d/%d/%d", &variavel_dia, &variavel_mes, &variavel_ano); para leitura formatada da data.*/

#include <stdio.h>

struct Data{
        int dia, mes, ano;
};

struct tAgenda{
    char compromisso[60];
    Data data;
};

void read(tAgenda comp[5]);
void showComp(tAgenda comp[5], int m, int a);

int main(){
    tAgenda comp[5];
    int m, a;

    read(comp);

    do{
        scanf("%d/%d", &m, &a);

        showComp(comp, m, a);

    } while (m != 0);


    return 0;
}

void read(tAgenda comp[5]){
    for (int i = 0; i < 5; i++){
        scanf(" %[^\n]", comp[i].compromisso);
        scanf("%d/%d/%d", &comp[i].data.dia, &comp[i].data.mes, &comp[i].data.ano);
    }
}

void showComp(tAgenda comp[5], int m, int a){
    for (int i = 0; i < 5; i++){
        if (comp[i].data.ano == a) {
            if (comp[i].data.mes == m){
                printf("%s\n", comp[i].compromisso);
            }
        }
    }
}
