#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void verifica (int X, int Y) {
	if (Y == 0) {
		printf ("Nenhum número é múltiplo de 0\n");
	}else{
	
		if (X % Y == 0){
			printf ("O valor %d é multiplo de %d\n", X, Y);
		}else {
			printf ("O valor %d não é multiplo de %d\n", X, Y);
		}
	}
}
int main () {
	setlocale (LC_ALL, "Portuguese");
	int X, Y;
	printf ("Informe o valor de X: ");
	scanf ("%d", &X);
	printf ("Informe o valor de Y: ");
	scanf ("%d",&Y);
	verifica(X, Y);
	return 0;
}
