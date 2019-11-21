#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct matriz1{
	int linhas1;
	int colunas1;
};
struct matriz2{
	int linhas2;
	int colunas2;
};
int main  () {
	setlocale (LC_ALL, "Portuguese");
	struct matriz1 Mat1;
	struct matriz2 Mat2;
	
	printf ("Digite a quantidade de linha e colunas da matriz 1: ");
	scanf ("%d %d", &Mat1.linhas1, &Mat1.colunas1);
	printf ("Digite a quantidade de linha e colunas da matriz 2: ");
	scanf ("%d %d", &Mat2.linhas2, &Mat2.colunas2);
	
	if(Mat1.colunas1 == Mat2.linhas2) {
		printf("A propriedade de Mat1 X Mat2 é possivel\n");
	} else {
		printf("A propriedade de Mat1 X Mat2 não é possivel\n");
	}
	
	return 0;
}
