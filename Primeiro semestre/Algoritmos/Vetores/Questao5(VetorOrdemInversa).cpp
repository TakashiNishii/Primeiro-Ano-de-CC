#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int vet[10], pos;
	
	//Entrada de dados no vetor
	for (pos = 0; pos < 10; pos++) {
		printf ("Digite o valor %d: ", pos + 1);
		scanf ("%d", &vet[pos]);
	}
	
	//Mostrando os dados do vetor na tela:
	for (pos = 0; pos < 10; pos++) {
		printf ("%d ", vet[pos]);
	}
	
	//Pular linha:
	printf ("\n");
	
	//Mostrando os dados do vetor em ordem inversa:
	for (pos = 9; pos >= 0; pos--){
		printf ("%d ", vet[pos]);
	}
	return 0;
}
