#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fazBolo(int ovo, int leite, int farinha) {
	if (leite < 80 || farinha < 80) {
		return 0;
	}
	if (ovo < 5 || leite < 200 || farinha < 220) {
		return 1;
	}
	if (ovo < 11 || leite < 800 || farinha < 850) {
		return 2;
	}else {
		return 3;
	}
	
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int numOvo, quantLeite, quantFarinha, tam;
	char saborPrincipal[30], saborCobertura[30];
	
	printf ("Informe a quantidade de ovos: ");
	scanf ("%d", &numOvo);
	
	printf ("Informe em mL de leite será utilizado: ");
	scanf ("%d", &quantLeite);
	
	printf ("Informe em g de farinha que será utilizado: ");
	scanf ("%d", &quantFarinha);
	
	printf ("Informe o sabor do bolo: ");
	scanf ("%s", saborPrincipal);
	
	printf ("Informe o sabor da cobertura: ");
	scanf ("%s", saborCobertura);
	
	system("cls");
	
	
	tam = fazBolo(numOvo, quantLeite, quantFarinha);
	
	if (tam == 0){
		printf ("Pouco ingrediente para se fazer um bolo\n");
	} else {
		printf ("Bolo de %s com cobertura de %s \n", saborPrincipal, saborCobertura);
		printf ("Tamanho: ");
		if (tam == 1){
			printf ("Pequeno\n");
		} else if (tam == 2){
			printf ("Medio\n");
		} else {
			printf ("Grande\n");
		}
	}
	
	return 0;
}

