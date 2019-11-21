#include <stdio.h>

int main () {
	int dia;
	
	scanf("%d", &dia);
	
	printf("%d ano(s)\n", dia / 365);
	dia = dia - ((dia / 365) * 365);
	printf("%d mes(es)\n", dia / 30);
	dia = dia - ((dia / 30) * 30);
	printf("%d dia(s)\n", dia);
	return 0;
}
