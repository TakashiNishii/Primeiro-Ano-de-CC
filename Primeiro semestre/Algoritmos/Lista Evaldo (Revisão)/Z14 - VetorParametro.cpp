#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void fazerTab(int num1, int num2, int *resultado){
	*resultado = num1 * num2;
}


int main () {
	setlocale (LC_ALL, "Portuguese");
	int tab[10], num, i;
	
	printf ("Informe a tabuada que você deseja: ");
	scanf ("%d", &num);
	
	for (i = 0; i < 10; i++){
		fazerTab(num, i + 1, &tab[i]);
	}
			
	system ("cls");
	
	for (i = 0; i < 10; i++){
		printf ("%d X %d = %d\n", num, i + 1, tab[i]);
	}
	
	return 0;
}
