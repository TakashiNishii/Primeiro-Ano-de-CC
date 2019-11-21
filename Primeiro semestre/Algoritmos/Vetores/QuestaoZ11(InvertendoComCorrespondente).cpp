
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int vet[20], pos, vtemp = 0, i;
	
	//Colocando valor no vetor:
	for (pos = 0; pos < 20; pos++) {
		printf ("Informe o valor da posição %d: ", pos + 1);
		scanf ("%d", &vet[pos]);
		system("cls");
	}
	
	//Mostrando os valores do vetor:
	for (pos = 0; pos < 20; pos++) {
		printf ("%d ", vet[pos]);
	}
	
	printf ("\n");
	
	for (pos = 0, i = 19; pos < 10 && i >= 10; pos++, i--) {
		vtemp = vet[pos];
		vet[pos] = vet[i];
		vet[i] = vtemp;
	}
	
	for (pos = 0; pos < 20; pos++) {
		printf ("%d ", vet[pos]);
	}
	return 0;
}
