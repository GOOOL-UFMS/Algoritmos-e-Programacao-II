#include <stdio.h>
#include <string.h>
#define TAM 11

void consultaCategoria(int id, char categoria[TAM]){
        if(id < 5){
            strcpy(categoria, "Indefinida");
        } else if(id>=5 && id<=7){
            strcpy(categoria, "Infantil A");
        } else if(id>=8 && id<=10){
            strcpy(categoria, "Infantil B");
        } else if(id>=11 && id<13){
            strcpy(categoria,  "Juvenil A");
        } else if(id>=14 && id<=17){
            strcpy(categoria, "Juvenil B");
        } else if(id>=18){
            strcpy(categoria, "Adulto");
        }
        
}

int main()
{
    int idade;
    char categoria[TAM];

    scanf("%d", &idade);
    consultaCategoria(idade, categoria);
    printf("%s\n", categoria);

}