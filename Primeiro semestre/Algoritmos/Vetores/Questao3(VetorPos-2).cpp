#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"Portuguese");
	int X[10], pos;
	
	//Entrada de dados no vetor
	for (pos = 0; pos < 10; pos++) {
		X[pos] = pos-2;
	}
	
	//Mostrando os dados do vetor na tela
	for (pos = 0; pos < 10; pos++) {
		printf ("%d ", X[pos]);
	}
	return 0;
}
