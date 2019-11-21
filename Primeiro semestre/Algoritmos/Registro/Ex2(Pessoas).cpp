#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

struct{
	char nome[50];
	int idade;
	float peso;
} pessoas;

int main () {
	setlocale (LC_ALL, "Portuguese");
	gets (pessoas.nome);
	scanf ("%d", &pessoas.idade);
	scanf ("%f", &pessoas.peso);
	
	system ("cls");
	puts (pessoas.nome);
	printf ("Idade: %d\n", pessoas.idade);
	printf ("Peso: %.2f\n", pessoas.peso);
	
	return 0;
}
