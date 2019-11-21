#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int mat[3][7], lin, col;
	
	for (col = 0; col < 7; col++) {
		for (lin = 0; lin < 3; lin++) {
			printf ("Informe o numero de [%d]X[%d]: ", lin, col);
			scanf ("%d", &mat[lin][col]);
		}
		system ("cls");
	}
	
	for (lin = 2; lin >=0; lin--) {
		for (col = 6; col >= 0; col--) {
			printf ("%d\t", mat[lin][col]);
		}
		printf ("\n");
	}
	return 0;	
}
