// declaração das bibliotecas utilizadas
#include<stdio.h>

// início da função principal
int main() {
// declaração das variáveis locais
int numero,
    digito,
    temp,   // armazena o dígito menos significativo
    quant = 0;  // quantidade de dígitos iguais a digito 

// entrada: numero digito
    scanf("%d %d", &numero, &digito);

    while(numero !=0)
    {
        temp = numero % 10;
        numero = numero / 10;
        if (temp == digito)
        {
            quant += 1;
        }
    }

// Imprime o resultado
   printf("%d\n", quant);

   return 0;

} // fim da função principal.