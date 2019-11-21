#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int mat[5][8];
	mat[1][7] = 10;//Funciona
	mat[4][2] = -30;//Funciona
	mat[2][5] = 250.5;//Não funciona pois a matriz é do tipo inteiro
	mat[5][5] = 28;//Não funciona pois a linha 5 corresponde a posição 4, ou seja, a posição 5 não existe na matriz
	mat[0][2] = 'A';//Não funciona pois a matriz é do tipo inteiro
	mat[0][0] =  15;//Funciona
}
