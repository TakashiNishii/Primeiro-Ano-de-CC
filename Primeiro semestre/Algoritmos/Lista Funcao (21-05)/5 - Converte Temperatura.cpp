#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float converte (float temperatura, char tipo) {
	if (tipo == 'C') {
		return (9 * temperatura / 5) + 32;
	} else {
		return (5 * (temperatura - 32)) / 9;
	}
	
}
int main () {
	setlocale (LC_ALL, "Portuguese");
	char tipoTemp;
	float temp;
	
	do{
	
	system ("cls");
	printf ("Informe o tipo de temperatura que ser� informada (C)elsius ou (F)ahrenheit: ");
	fflush (stdin);
	scanf ("%c", &tipoTemp);
	
	}while (tipoTemp != 'C' && tipoTemp != 'F');
	
	printf ("Informe a temperatura: ");
	scanf ("%f", &temp);
	
	if (tipoTemp == 'C' ){
		printf ("%.2f C em fahrenheit � %.2f F", temp, converte(temp,tipoTemp));	
	} else {
		printf ("%.2f F em celsius � %.2f C", temp, converte(temp, tipoTemp));
	}
	
	return 0;
}
