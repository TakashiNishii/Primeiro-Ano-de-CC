#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	char palavra1[20];
	char palavra2[20];
	int diferente = 0;
	
	printf ("Informe a palavra 1: ");
	scanf ("%s", palavra1);
	printf ("Informe a palavra 2: ");
	scanf ("%s", palavra2);
	
	while (diferente == 0){
		if (strcmp(palavra1,palavra2) != 0 ){
			diferente = 1;
		}else{
			diferente = 2;
		}
	}
	
	if (diferente == 1){
		printf ("As palavras digitadas são diferentes\n");
	} else {
		printf ("As palavras digitadas são iguais\n");
	}
	return 0;
}
