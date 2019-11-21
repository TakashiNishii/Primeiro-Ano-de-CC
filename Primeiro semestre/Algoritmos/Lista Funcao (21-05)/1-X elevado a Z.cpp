#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Função que recebe dois valores inteiros onde retorna o primeiro número elevado ao segundo: */
int eleva (int X, int Z) {
	int i = 1, acumulador = 1;
	
	acumulador = X^Z;
	
	return acumulador;
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int num1, num2, resultado;
	
	printf ("Informe o número desejado: ");
	scanf ("%d", &num1);
	printf ("Informe a quantidade de vezes que o número informado anteriormente será multiplicado por ele mesmo: ");
	scanf ("%d", &num2);
	
	resultado = eleva(num1, num2);
	
	printf ("%d elevado a %d é igual a: %d", num1, num2, resultado);
	
	return 0;
}
