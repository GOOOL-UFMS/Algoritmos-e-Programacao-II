/* 
As Coordenações de Curso da FACOM desejam saber 
quais alunos estão cursando simultaneamente Algoritmos 
e Programação I e Introdução a Sistemas Digitais. 
As listas dos alunos matriculados em cada uma das disciplinas 
é dada pelo RGA (Registro Geral Acadêmico) dos alunos. 
Para simplificar, o RGA será dado por apenas 5 dígitos, 
sendo os dois primeiros dígitos indicando os dois últimos 
dígitos do ano de ingresso, o terceiro indica curso que 
o aluno está matriculado, e os dois últimos a ordem em que 
o aluno foi matriculado no curso. 
Não existem mais de 500 alunos cursando cada uma das disciplinas.
Projete e implemente um programa para computar a interseção 
das duas listas das matrículas dos alunos nessas disciplinas. 
A lista de cada disciplina é dada por um arranjo de inteiros 
com os números dos RGA´s dos estudantes na respectiva disciplina. 
A interseção também deve ser dada por um arranjo representando 
a lista com os RGA´s dos alunos que estão matriculados em ambas 
as disciplinas. O seu programa programa deve ler um inteiro tamA, 
tamanho da lista que  representa a disciplina discA, 
a lista de inteiros com os tamA RGA´s dos alunos matriculados 
na disciplina discA, um inteiro tamB, tamanho da lista da disciplina 
discB, e a lista de inteiros com os tamB RGA´s 
dos alunos matriculados na disciplina discB. 
O seu programa deve computar e imprimir a lista intAB, 
com a interseção das matrículas das disciplinas discA e discB. 
Caso não tenha nenhum aluno matriculado simultaneamente nas duas 
disciplinas, o programa deve imprimir a mensagem vazia.
A entrada é dada por 4 linhas. 
A primeira linha contém um inteiro tamA indicando 
o tamanho da primeira lista. 
A segunda linha contém os tamA elementos com os RGA´s 
de cada um dos alunos matriculados na disciplina discA. 
A terceira linha contém um inteiro tamB indicando o tamanho 
da segunda lista. A quarta linha contém os tamB elementos, 
com os RGA´s de cada um dos alunos matriculados na disciplina discB.
A saída consiste em imprimir a lista dos RGA´s dos alunos que cursam 
simultaneamente cada par de disciplinas. No caso da interseção ser vazia, 
imprima a mensagem vazia. Os elementos das listas devem ser impressos com 
um espaço em branco entre eles, 
e após o último elemento deve ser impresso um espaço e mudança de linha.


Exemplo 1
5
11111 11222 12333 12444 13555
4
11101 11222 12333 12401

11222 12333

Exemplo 2
2
11111 12111
1
12411
vazia
*/

#include <stdio.h>
int main()
{
    int tamanho1, tamanho2, quantidade, i, j;
    scanf("%d", &tamanho1);
    int vetor1[tamanho1];
    quantidade = 0;

    for (i = 0; i < tamanho1; i++)
    {
        scanf("%d", &vetor1[i]);
    }

    scanf("%d", &tamanho2);
    int vetor2[tamanho2];

    for (j = 0; j < tamanho2; j++)
    {
        scanf("%d", &vetor2[j]);
    }

    for (i = 0; i < tamanho1; i++)
    {
        for (j = 0; j < tamanho2; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                printf("%d ", vetor1[i]);
                quantidade +=1;
            }
        }
    }
    if (quantidade == 0)
    {
        printf("vazia");
    }

}
