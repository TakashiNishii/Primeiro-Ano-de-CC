#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void cont (int *par, int *impar){
	int vet[10];
	for (int n = 0; n < 10; n++) {
		printf ("Informe o n�mero de posi��o %d do vetor: ", n+1);
		scanf ("%d", &vet[n]);
		if (vet[n] % 2 == 0) {
			*par= *par + 1;
		} else {
			*impar = *impar + 1;
		}
	}
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int pares = 0, impares = 0;

	cont(&pares, &impares);
	
	printf ("%d n�meros pares e %d n�meros impares", pares, impares);
	
	
	
	return 0;
}
