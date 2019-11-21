#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int vet[10], numMaior, numMenor, pos, posMaior, posMenor;
	
	//Colocando valores no vetor:
	for (pos = 0; pos < 10; pos++) {
		printf ("Informe o valor da posição %d: ", pos + 1);
		scanf ("%d", &vet[pos]);
		//Verificações para achar o menor e o maior valor:
		if (pos == 0) {
			numMaior = vet[pos];
			numMenor = vet[pos];
			posMaior = pos;
			posMenor = pos;	
		} else if (vet[pos] > numMaior) {
			posMaior = pos;
			numMaior = vet[pos];
		} else if (vet[pos] < numMenor) {
			posMenor = pos;
			numMenor = vet[pos];
		}
		system("cls");
	}
	
	printf("O maior valor informado foi %d e o menor foi %d ", vet[posMaior], vet[posMenor]);
	
	return 0;
}
