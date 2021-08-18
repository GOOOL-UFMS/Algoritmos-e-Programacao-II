#include <stdio.h>
#include <string.h>
#define TAM 200

void consultaCategoria(int id, char categoria[TAM]);

int main()
{ 
    int id = 1;
    char categoria[TAM];

    while (id > 0)
    {
        scanf("%d", &id);
        consultaCategoria(id, categoria);
        printf("%s\n", categoria);
    }

    return 0;
}

void consultaCategoria(int id, char categoria[TAM])
{
    if (id < 5)
    {
        strcpy(categoria, "Indefinida");
    } 
    else if (id >= 5 && id <= 7)
    {
        strcpy(categoria, "Infantil A");
    }
    else if (id >= 8 && id <= 10)
    {
        strcpy(categoria, "Infantil B");
    }
    else if (id >= 11 && id <= 13)
    {
        strcpy(categoria, "Juvenil A");
    }
    else if (id >= 14 && id <= 17)
    {
        strcpy(categoria, "Juvenil B");
    }
    else
    {
        strcpy(categoria, "Adulto");
    }
}
