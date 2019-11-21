#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	char palavra1[30], palavra2[30];
	
	printf ("Digite a primeira palavra: ");
	scanf ("%s", palavra1);
	printf ("Digite a segunda palavra: ");
	scanf ("%s", palavra2);
	
	if (!strcmp(palavra1, palavra2)){
		printf ("Palavras iguais!");
	} else {
		printf ("Palavras diferentes!");
	}
	
	return 0;
}
