#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void divisaoResto (int x, int y, float *resultado, int *resto) {
	if (y != 0){
		*resto = x % y;
		*resultado = x / y;
	} 
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int X, Y, resto;
	float resultado;

	printf ("Informe o valor de X: ");
	scanf ("%d", &X);
	printf ("Informe o valor de Y: ");
	scanf ("%d", &Y);
	
	divisaoResto (X, Y, &resultado, &resto);
	
	printf ("%d / %d é igual a %.2f e o resto é %d", X, Y, resultado, resto);
	return 0;
}
