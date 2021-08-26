#include <stdio.h>
#include <string.h>

#define MAX 10

void mediaAR(float media, float notaAP, char mensagem[MAX]){
    if (media >= notaAP)
        strcpy(mensagem, "Aprovado");
    else
        strcpy(mensagem, "Reprovado");
}

int main(){
    double media, notaMin;
    char msg[MAX];

    scanf("%lf %lf", &notaMin, &media);

    mediaAR(media, notaMin, msg);

    printf("%.1f %s", media, msg);

    return 0;
}

