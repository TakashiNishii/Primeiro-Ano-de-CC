#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void verifica (int X) {
	if(X % 2 == 0){
		printf ("O n�mero informado � par\n");
	} else {
		printf ("O n�mero informado � impar\n");
	}
}
int main () { 
	setlocale (LC_ALL, "Portuguese");
	int X;
	printf ("Informe o valor de X: ");
	scanf ("%d", &X);
	verifica(X);	
	return 0;
}
