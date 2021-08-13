#include<stdio.h>

int main(){



    int sexo, repeticao;
    float altura, calculo;
    
    while(true){
    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &repeticao);
    if(repeticao>0){
        break;
        }
    }
        while(repeticao>0){
        while(true){
            printf("Digite [1] homem\nDigite [2] mulher: ");
            scanf("%d", &sexo);
            if (sexo == 1 || 2){
                break;
            }  
        }
        while(true){
            printf("Digite a altura em metro: ");
            scanf("%f", &altura);
            if(altura>0){
                break;
            }
        }

        if (sexo == 1){
            
            calculo = (72.7*altura)-58;
            printf("Seu peso ideal deve ser igual a: %.2f\n", calculo);

        }else
        {
            
            calculo = (62.1*altura)-44.7;
            printf("Seu peso ideal deve ser igual a: %.2f\n", calculo);
        }
        repeticao = repeticao - 1;
    }
    return 0;
}



