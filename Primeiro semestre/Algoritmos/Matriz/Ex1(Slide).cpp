#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int mat[5][8];
	mat[1][7] = 10;//Funciona
	mat[4][2] = -30;//Funciona
	mat[2][5] = 250.5;//N�o funciona pois a matriz � do tipo inteiro
	mat[5][5] = 28;//N�o funciona pois a linha 5 corresponde a posi��o 4, ou seja, a posi��o 5 n�o existe na matriz
	mat[0][2] = 'A';//N�o funciona pois a matriz � do tipo inteiro
	mat[0][0] =  15;//Funciona
}
