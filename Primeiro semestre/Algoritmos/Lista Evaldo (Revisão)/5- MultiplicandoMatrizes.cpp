#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int mat1[3][3];
	int mat2[3][3];
	int aux[3][3];
	int i = 0, j = 0, ajudante = 0, ajudanteloc = 0;
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			system("cls");
			printf ("Da matriz 1 informe o valor da posição %d X %d: ",  i + 1, j + 1);
			scanf ("%d", &mat1[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			system("cls");
			printf ("Da matriz 2 informe o valor da posição %d X %d: ",  i + 1, j + 1);
			scanf ("%d", &mat2[i][j]);
		}
	}	
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			for (ajudante = 0; ajudante < 3; ajudante++) {0
				ajudanteloc += mat1[i][ajudante] * mat2[ajudante][j];
			}
			aux[i][j] = ajudanteloc;
			ajudanteloc = 0;
		}
	}
	
	system("cls");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf ("%d ", aux[i][j]);
		}
		printf ("\n");
	}
	return 0;	
}
