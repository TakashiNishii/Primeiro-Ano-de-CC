#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char Letras[5];
	int i;
	
	for (i = 0; i<5;i++){
		printf ("Informe a letra da posição %d: ",i+1);
		fflush(stdin);
		scanf("%c", &Letras[i]);
	}
	
	Letras[5] = 'B';
	Letras[2] = 'K';
	
	fflush(stdin);
	printf("%c\n", Letras[1]);
	
	for (i=0;i<5;i++){
		fflush(stdin);
		printf("%c ",Letras[i]);
	}
	
	
	return 0;
}
