#include <stdio.h>

int main () {
	int vet[5], pos, soma = 0;
	
	//Entrada de dados no vetor
	for (pos = 0; pos < 5; pos++) {
		printf ("Digite o valor %d: ", pos + 1);
		scanf ("%d", &vet[pos]);
		soma += vet[pos];
	}
	
	//Mostrando a soma na tela
	printf ("%d ", soma);
	
	return 0;
}
