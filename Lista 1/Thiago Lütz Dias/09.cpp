#include <stdio.h>

int main(){
    int anoNas, anoAtual, idadeAtual, idadeFut;
    printf("Digite o ano em que você nasceu: ");
    scanf("%d", &anoNas);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAtual = anoAtual - anoNas;
    idadeFut = 2034 - anoNas;

    printf("Você tem %d anos e terá %d anos em 2034", idadeAtual, idadeFut);

    return 0;
}
