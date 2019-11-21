#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int elevado(int n1, int n2){
	int acumulador = 0, cont = 1;
	
	while (cont < n2) {
		acumulador += n1 * n1;
		cont++;
	}	
	return acumulador;
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int numX, numY, resultado = 0;
	
	printf ("Informe o valor de X: "); 
	scanf ("%d", &numX);
	printf ("Informe o valor de Y: ");
	scanf ("%d", &numY);
	
	resultado = elevado (numX, numY);
	
	printf ("%d elevado a %d é igual: %d", numX, numY, resultado);
	return 0;
}
