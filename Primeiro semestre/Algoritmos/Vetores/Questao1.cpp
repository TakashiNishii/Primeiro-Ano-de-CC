#include <stdio.h>

int main () {
	int vet[10], pos;
	
	//Entrada de dados no vetor
	for (pos = 0; pos < 10; pos++) {
		printf ("Digite o valor %d: ", pos + 1);
		scanf ("%d", &vet[pos]);
	}
	
	//Mostrando os dados do vetor na tela
	for (pos = 0; pos < 10; pos++) {
		printf ("%d ", vet[pos]);
	}
	return 0;
}
