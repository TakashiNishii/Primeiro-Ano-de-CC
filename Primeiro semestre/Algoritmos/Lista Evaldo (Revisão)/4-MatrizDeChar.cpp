#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	char matS[5][30], i, j;
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 30; j++){
			scanf("%s", matS[i]);
			j = 30;
		}
	}
	system("cls");
	for (i = 0; i < 5; i++){
		for (j = 0; j < 30; j++){
			if(matS[i][j] != NULL){
				puts(matS[i]);
			}
			j = 30;
		}
		
	}
	return 0;
}
