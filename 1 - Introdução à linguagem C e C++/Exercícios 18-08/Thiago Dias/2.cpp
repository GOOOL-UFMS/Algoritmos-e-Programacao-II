/*Faça uma função que receba a idade de um nadador por parâmetro e retorna,
também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:*/
#include <stdio.h>
#include <string.h>
#define TAM 11

void consultaCategoria(int age, char categoria[TAM]){
    if (age < 5){
        strcpy(categoria, "Indefinida");
    } else if (5 <= age && age <= 7){
        strcpy(categoria, "Infantil A");
    } else if (8 <= age && age <= 10){
        strcpy(categoria, "Infantil B");
    } else if (11 <= age && age <= 13){
        strcpy(categoria, "Juvenil A");
    } else if (14 <= age && age <= 17){
        strcpy(categoria, "Juvenil B");
    } else {
        strcpy(categoria, "Adulto");
    }
}

/*Escreva um programa que leia um conjunto de idades. Para cada idade
informada pelo usuário, informe a categoria correspondente. A entrada de dados
termina quando uma idade menor ou igual a zero é informada.*/

int main(){
    int idade;
    char categoria[TAM];
    while (true){
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        if (idade <= 0)
            break;
        else{
            consultaCategoria(idade, categoria);

            printf("%s\n", categoria);
        }
    }

    return 0;
}
