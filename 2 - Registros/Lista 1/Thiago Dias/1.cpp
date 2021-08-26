#include <stdio.h>

struct tipoAluno{
    char nome[50];
    int matr;
    double nota1, nota2;
    double media;
};

int main(){
    tipoAluno aluno[50];
    int n;

    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]", aluno[i].nome);

        printf("Digite o número de matrícula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matr);

        printf("Digite as duas notas do aluno %d: ", i+1);
        scanf("%lf %lf", &aluno[i].nota1, &aluno[i].nota2);

        printf("\n");

        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) / 2;
    }

    for (int i = 0; i < n; i++) {
        printf("--- Aluno %d ---\n", i+1);
        printf("Número de matrícula: %d\n", aluno[i].matr);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Média: %.1f\n", aluno[i].media);
        printf("\n");
    }

    return 0;
}
