/*Programa lê duas matrizes A e B de dimensões mxn e calcula a matriz resultante da
soma de A e B*/
#include<stdio.h>
# define MAX 10

/*protótipo das funções*/
void leitura(int M[MAX][MAX], int m, int n);
void impressao(int M[MAX][MAX], int m, int n);
void soma(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n);

/*Função principal*/
int main()
{
	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	int m,	// número de linhas 
		n;	// número de colunas
	
	printf("Digite número de linhas e colunas: ");
	scanf("%d%d", &m,&n);
	printf("\n");

	// leitura da matriz A
	printf("Matriz A\n");
	leitura(A, m, n);
	printf("\n");

	// leitura da matriz B
	printf("Matriz B\n");
	leitura(B, m, n);
	printf("\n");

	// soma das matrizes A + B
	soma(A, B, C, m, n);

	// impressao da matriz resultante
	impressao(C, m, n);

	return 0;
}

/*Função para armazenar dados na matriz inteira M de dimensoes m por n*/
void leitura(int M[MAX][MAX], int m, int n){
	for (int i = 0; i < m; i++){
		printf("Digite os valores da %d linha: ", i+1);
		for (int j = 0; j < n; j++){
			scanf("%d", &M[i][j]);
		}
	}
}
/*Função para imprimir as células da matriz inteira M de dimensoes m por n*/
void impressao(int M[MAX][MAX], int m, int n){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
}
/*Função calcula a soma das matrizes A e B de dimensões mxn e armazena o resultado
na matriz C*/
void soma(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}
