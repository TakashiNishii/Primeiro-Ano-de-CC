#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pesoIdeal (float alt, char sexo) {
	if (sexo == 'F') {
		return (62.1 * alt) - 44.7;
	} else {
		return (72.7 * alt) - 58;
	}
}

int main () { 
	setlocale (LC_ALL, "Portuguese");
	float altura;
	char sexoPessoa;
	
	do {
		system ("cls");
		printf ("Informe o seu sexo com a primeira letra do sexo: (F)eminino ou (M)asculino\n");
		printf ("Resposta: ");
		fflush(stdin);
		scanf ("%c", &sexoPessoa);
	} while (sexoPessoa != 'F' && sexoPessoa != 'M');
	
	printf ("Informe a sua altura: ");
	scanf ("%f", &altura);
	
	system ("cls");

	printf ("O seu peso ideal conforme suas medida é: %.2f", pesoIdeal(altura, sexoPessoa));

	return 0;
}	
