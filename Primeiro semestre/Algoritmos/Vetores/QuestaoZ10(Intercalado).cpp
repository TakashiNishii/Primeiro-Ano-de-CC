#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	char Vetor2[5];
	int Vetor1[5], pos;
	
	//Colocando valores no vetor Numeros:
	for (pos = 0; pos < 5; pos++) {
		printf ("Informe o número que vai na posição %d do vetor: ", pos + 1);
		scanf ("%d", &Vetor1[pos]);
		system("cls");
	}
	
	//Colocando valores no vetor Nomes:
	for (pos = 0; pos < 5; pos++) {
		printf ("Informe a letra que vai na posição %d do vetor: ", pos + 1);
		fflush(stdin);
		scanf ("%c", &Vetor2[pos]);
		system("cls");
	}
	
	//Escrevendo os dois vetores de forma intercalada:
	for (pos = 0; pos < 5; pos++) {
		fflush(stdin);	
		printf ("%c ", Vetor2[pos]);
		printf ("%d ", Vetor1[pos]);
	}
	return 0;
}
