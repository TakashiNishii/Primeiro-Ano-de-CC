#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int vet[10], pos, posComp, aux;
	
	//colocando variavéis no vetor:
	for (pos = 0; pos < 10; pos++) {
		printf ("Informe o valor da posição %d do vetor 1: ", pos + 1);
		scanf ("%d", &vet[pos]);	
		system("cls");
	}

	//Organizando em ordem crescente:
	for (pos = 0; pos < 10; pos++) {
		for (posComp = 0; posComp < 10; posComp++) {
			if (vet[pos] < vet[posComp]) {
				aux = vet[posComp];
				vet[posComp] = vet[pos];
				vet[pos] = aux;		
				posComp = 0;
			}
		}
	}
	
	for (pos = 0; pos < 10; pos++) {
		printf ("%d ", vet[pos]);
	}
	
	return 0;
}
