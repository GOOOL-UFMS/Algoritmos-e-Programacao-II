/*Construa uma estrutura tAluno com número de matrícula, nome (com até 30 caracteres) e curso (com até 30 caracteres), nesta ordem.
Leia do usuário as informações de 5 alunos e armazene em vetor dessa estrutura.
Em seguida, leia um nome de curso, pesquise e liste todos os alunos (a matrícula e nome) que fazem o curso.*/

#include <stdio.h>
#include <string.h>

#define MAX 30

struct tAluno{
    int matr;
    char nome[MAX], curso[MAX];
};

void read(tAluno a[5]);

int main(){
    tAluno alunos[5];
    char curso[MAX];

    read(alunos);

    scanf(" %[^\n]", curso);

    for (int i = 0; i < 5; i++){
        if (strcmp(curso, alunos[i].curso) == 0){
            printf("%d %s\n", alunos[i].matr, alunos[i].nome);
        }
    }

    return 0;
}

void read(tAluno a[5]){
    for (int i = 0; i < 5; i++){
        scanf("%d", &a[i].matr);
        scanf(" %[^\n]", a[i].nome);
        scanf(" %[^\n]", a[i].curso);
    }
}
