#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Fun��o que recebe dois valores inteiros onde retorna o primeiro n�mero elevado ao segundo: */
int eleva (int X, int Z) {
	int i = 1, acumulador = 1;
	
	acumulador = X^Z;
	
	return acumulador;
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int num1, num2, resultado;
	
	printf ("Informe o n�mero desejado: ");
	scanf ("%d", &num1);
	printf ("Informe a quantidade de vezes que o n�mero informado anteriormente ser� multiplicado por ele mesmo: ");
	scanf ("%d", &num2);
	
	resultado = eleva(num1, num2);
	
	printf ("%d elevado a %d � igual a: %d", num1, num2, resultado);
	
	return 0;
}
