#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int Mat[3][3], num, i, j;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			system ("cls");
			printf ("Digite o valor da matriz na posição %d X %d: ", i + 1, j + 1);
			scanf ("%d", &Mat[i][j]);
		}
	}
	
	printf ("Informe o valor para multiplicar os valores da matriz: ");
	scanf ("%d", &num);
	
	system ("cls");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			Mat[i][j] = Mat[i][j] * num;
			printf ("\t%d ", Mat[i][j]);
		}
		printf ("\n");
	}
	return 0;
}
