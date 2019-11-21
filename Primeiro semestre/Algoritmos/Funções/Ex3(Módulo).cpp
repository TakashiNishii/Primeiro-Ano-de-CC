#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int modulo (int valor) {
	valor = valor * (-1);
	return valor;	
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int num;
	printf ("Informe um número: ");
	scanf ("%d", &num);
	
	if (num < 0) 
	{
		num = modulo(num);
	}
	
	printf ("O módulo do valor informado é: %d", num);
	
	return 0;
}
