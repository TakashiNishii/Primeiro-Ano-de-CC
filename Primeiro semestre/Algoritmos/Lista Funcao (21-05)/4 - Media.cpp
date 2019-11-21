#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media (float n1, float n2, float n3, char tipo) {
	if (tipo == 'A') {
		return (n1 + n2 + n3) / 3;
	} else {
		return (n1 * 5 + n2 * 3 + n3 * 2)/(5 + 3 + 2); 
	}
}


int main () {
	setlocale (LC_ALL, "Portuguese");
	float nota1, nota2, nota3;
	char tipoMedia;
	
	printf ("Digite a nota 1: ");
	scanf ("%f", &nota1);
	printf ("Digite a nota 2: ");
	scanf ("%f", &nota2);
	printf ("Digite a nota 3: ");
	scanf ("%f", &nota3);
	do{
	
		printf ("Digite A para calcular média aritmetica\n");
		printf ("Digite P para calcular a média ponderada\n");
		printf ("Sua resposta: ");
		fflush (stdin);
		scanf ("%c", &tipoMedia);
	} while (tipoMedia != 'A' && tipoMedia != 'P');
	
	system ("cls");

	printf("A média do aluno é: %.2f", media (nota1, nota2, nota3, tipoMedia));
	
	return 0;
}

