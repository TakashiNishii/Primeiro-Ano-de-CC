#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	char palavra1[20];
	char palavra2[20];
	char palavra3[40];
	
	printf ("Informe a palavra 1: ");
	fflush(stdin);
	scanf ("%s", palavra1);
	printf ("Informe a palavra 2: ");
	fflush(stdin);
	scanf ("%s", palavra2);
	
	strcat(palavra3,palavra1);
	strcat(palavra3,palavra2);
	
	printf("%s", palavra3);
	return 0;
}
