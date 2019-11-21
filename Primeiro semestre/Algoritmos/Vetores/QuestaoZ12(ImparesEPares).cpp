#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int vet1[10], vet2[10], vet3[20], pos, cont = 0;
	
	//Inserindo valores no vetor 1:
	for (pos = 0; pos < 10; pos++) {
		printf ("Informe o valor da posição %d do vetor 1: ", pos + 1);
		scanf ("%d", &vet1[pos]);
		system("cls");
	}
	//Inserindo valores no vetor 2:
	for (pos = 0; pos < 10; pos++) {
		printf ("Informe o valor da posição %d do vetor 2: ", pos + 1);
		scanf ("%d", &vet2[pos]);
		system("cls");
	}
	//Inserindo valores no vetor 3: 
	//Calculando valores do vetor 1 que são pares para colocar no vetor 3:
	for (pos = 0; pos < 10; pos++) {
		if (vet1[pos] % 2 == 0) {
			vet3[cont] = vet1[pos];
			cont++;
		}
	}
	//Calculando valores do vetor 2 que são pares para colocar no vetor 3:
	for (pos = 0; pos < 10; pos++) {
		if (vet2[pos] % 2 == 0) {
			vet3[cont] = vet2[pos];
			cont++;
		}
	}
	//Calculando valores do vetor 1 que são impares para colocar no vetor 3:
	for (pos = 0; pos < 10; pos++) {
		if (vet1[pos] % 2 != 0) {
			vet3[cont] = vet1[pos];
			cont++;
		}
	}
	//Calculando valores do vetor 2 que são impares para colocar no vetor 3:
	for (pos = 0; pos < 10; pos++) {
		if (vet2[pos] % 2 != 0) {
			vet3[cont] = vet2[pos];
			cont++;
		}
	}
	
	//Mostrar os valores dos vetores para o usuario
	//Vetor 1:
	for (pos = 0; pos < 10; pos++) {
		printf ("%d ", vet1[pos]);
	}
	printf("\n");
	//Vetor 2:
	for (pos = 0; pos < 10; pos++) {
		printf ("%d ", vet2[pos]);
	}
	printf("\n");
	//Vetor 3:
	for (pos = 0; pos < 20; pos++) {
		printf ("%d ", vet3[pos]);
	}
	
	return 0;
}
