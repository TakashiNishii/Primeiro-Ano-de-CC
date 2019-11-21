#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL, "Portuguese");
	int mat[3][3], lin, col;
	
	for (lin = 0; lin < 3; lin++)
		for (col = 0; col < 3; col++) {
			printf ("Informe o valor da posição %d X %d: ", lin + 1, col + 1);
			scanf ("%d", &mat[lin][col]);
		}
				
	for (lin = 0; lin < 3; lin++){
		for (col = 0; col < 3; col++)
			printf ("%d\t ", mat[lin][col]);
		printf ("\n");
	}
	
	printf ("-------------------------------------\n");
	for (lin = 0; lin < 3; lin++)
		for (col = 0; col < 3; col++)
			mat[lin][col] = mat[lin][col] * 10;
	
	for (lin = 0; lin < 3; lin++){
		for (col = 0; col < 3; col++)
			printf ("%d\t ", mat[lin][col]);
		printf ("\n");
	}
	return 0;
}
