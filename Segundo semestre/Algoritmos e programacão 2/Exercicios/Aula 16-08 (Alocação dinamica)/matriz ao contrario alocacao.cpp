#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	int l, c, **mat, il, ic ;
	setlocale(LC_ALL, "Portuguese");
	scanf ("%d", &l);
	scanf ("%d", &c);
	mat = (int **)malloc(l * sizeof(int *));
	
	for (il = 0; il < l; il++){
		mat[il] = (int *)malloc(c * sizeof(int));
	}
	
	for (il = 0; il < l; il++){
		for (ic = 0; ic < c; ic++){
			scanf ("%d", &mat[il][ic]);
		}
	}
	
	system ("cls");
	
	for (il = l - 1; il >= 0; il--){
		for (ic = c - 1; ic >= 0; ic--){
			printf ("%d\t", mat[il][ic]);
		}
		printf ("\n");
	}
	
	free(mat);
	printf ("\n");
	system ("pause");
	return 0;
}
