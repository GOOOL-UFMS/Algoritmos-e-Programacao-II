#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct tipoPessoa{
    char nome[50], sexo, cpf[15];
    double peso, imc, altura;
};

void cadastroPessoa(int i, tipoPessoa pessoa[50]){
    printf("Digite o nome completo: ");
    scanf(" %[^\n]", pessoa[i].nome);

    printf("Digite a altura (em m): ");
    scanf("%lf", &pessoa[i].altura);

    printf("Digite o peso (em kg): ");
    scanf("%lf", &pessoa[i].peso);

    printf("Digite o CPF (somente números): ");
    scanf(" %s", pessoa[i].cpf);

    printf("Digite seu sexo, [M] se for homem, [F] se for mulher: ");
    scanf(" %c", &pessoa[i].sexo);
    pessoa[i].sexo = toupper(pessoa[i].sexo);

    pessoa[i].imc = pessoa[i].peso / (pessoa[i].altura * pessoa[i].altura);
}

void calculaIMC(char cpfAux[15], int i, tipoPessoa pessoa[50]) {
    for (int j = 0; j < i; j++){
        if (strcmp(cpfAux, pessoa[j].cpf) == 0){
            printf("IMC = %.2f\n", pessoa[j].imc);
        }
        else if (j == i-1){
            printf("Não há ninguém com esse CPF\n");
        }
    }
}

void printIMC_M(int i, tipoPessoa pessoa[50]){
    printf("Nome - IMC\n");
    for (int j = 0; j < i; j++){
        if (pessoa[j].sexo == 'M'){
            printf("%s - %.2f\n", pessoa[j].nome, pessoa[j].imc);
        }
    }
}

void printIMC_F(int i, tipoPessoa pessoa[50]){
    printf("Nome - IMC\n");
    for (int j = 0; j < i; j++){
        if (pessoa[j].sexo == 'F'){
            printf("%s - %.2f\n", pessoa[j].nome, pessoa[j].imc);
        }
    }
}

void listarPessoas(int i, tipoPessoa pessoa[50]){
    printf("Nome - CPF\n");
    for (int j = 0; j < i; j++){
        printf("%s - %s\n", pessoa[j].nome, pessoa[j].cpf);
    }
}

int main() {
    int opcao, i = 0;
    tipoPessoa pessoa[50];

    do{
        printf("[0] Sair\n");
        printf("[1] Cadastrar nova pessoa\n");
        printf("[2] Calcular IMC de uma pessoa\n");
        printf("[3] Calcular IMC de todos os homens\n");
        printf("[4] Calcular IMC de todas as mulheres\n");
        printf("[5] Listar todas as pessoas cadastradas\n");
        scanf("%d", &opcao);
        printf("\n");

        if (opcao == 1){
            cadastroPessoa(i, pessoa);
            i++;
        } else if (opcao == 2) {
            char cpfAux[15];

            printf("Digite o CPF da pessoa: ");
            scanf(" %s", cpfAux);

            calculaIMC(cpfAux, i, pessoa);
        } else if (opcao == 3){
            printIMC_M(i, pessoa);
        } else if (opcao == 4){
            printIMC_F(i, pessoa);
        } else if (opcao == 5){
            listarPessoas(i, pessoa);
        }
    } while (opcao != 0);


    return 0;
}
