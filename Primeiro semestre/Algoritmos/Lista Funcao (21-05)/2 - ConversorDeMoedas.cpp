#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Essa função pega o valor em reais e divide pela cotação do dolar:
float converteDolar (float valorReal) {
	return valorReal / 4.06;
}

//Essa função pega o valor em reais e divide pela cotação do euro:
float converteEuro (float valorReal) {
	return valorReal / 4.53;
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	float valor;
	
	printf ("Valor em reais que deseja ser convertido: ");
	scanf ("%f", &valor);
	
	system ("cls");
	printf ("Reais: %.2f\n", valor);
	printf ("Dolar: %.2f\n", converteDolar(valor));
	printf ("Euro: %.2f\n", converteEuro(valor));
	
	return 0;
}

