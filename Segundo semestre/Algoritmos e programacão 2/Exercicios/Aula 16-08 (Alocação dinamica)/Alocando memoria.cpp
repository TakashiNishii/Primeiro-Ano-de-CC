#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	int *x, *y;
	setlocale(LC_ALL, "Portuguese");
	x = (int *)malloc(sizeof(int));
	
	if (x == NULL){
		printf ("Não foi possivel alocar espaço para X\n");
		system ("pause");
		exit (1);
	}
	
	y = (int *)malloc(sizeof(int));
	if (y == NULL){
		printf ("Não foi possivel alocar espaço para Y\n");
		system ("pause");
		exit (1);
	}
	
	printf ("Digite o valor de X: ");
	scanf ("%d", &*x);
	printf ("Digite o valor de Y: ");
	scanf ("%d", &*y);
	printf ("\n%d + %d = %d\n\n", *x, *y, *x + *y);
	
	free(x);
	free(y);
	
	system ("pause");
	return 0;
}
