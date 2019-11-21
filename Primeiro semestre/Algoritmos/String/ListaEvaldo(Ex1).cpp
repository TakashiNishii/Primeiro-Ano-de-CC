#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 30
int main () {
	setlocale (LC_ALL, "Portuguese");
	char nome[30];
	int i = 0, contMaiusculo = 0, contMinusculo = 0;
	
	printf ("Digite uma palavra: ");
	scanf ("%s", nome);
	
	while (i < sizeof(nome)) {
		if (nome[i] >= 65 && nome[i] <= 90) {
			contMaiusculo++;
		}
		if (nome[i] >= 97 && nome[i] <= 122) {
			contMinusculo++;
		}
		i++;
	}
	
	printf ("Foi digitado %d letras maiusculas\n", contMaiusculo);
	printf ("Foi digitado %d letras minusculas", contMinusculo);
	
	
	return 0;
}
