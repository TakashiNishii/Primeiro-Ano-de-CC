#include <stdio.h> 
#include <stdlib.h>

int main () {
	int n,i = 1, espaco = 0, numAst = 1, linha = 0;
	
	do{
		scanf("%d", &n);
	}while(n < 1 || n % 2 == 0);
	
	if(n == 1){
		printf("*");
	}else{
		while(linha <= n/2){
			while(i + espaco <= (n - 1)/2){
				printf(" ");	
				i++;
			}
			i = 0;
			while(i < numAst){
				printf("*");
				i++;
			}
			printf("\n");
			numAst = numAst + 2;
			espaco++;
			linha++;
			i = 1;
		}
		espaco = espaco - 3;
		numAst = numAst - 4;	
		while(linha <= n){
			while(i + espaco <= (n-2)/2){
				printf(" ");	
				i++;
			}
			i = 0;
			while(i < numAst){
				printf("*");
				i++;
			}
			numAst = numAst - 2;
			espaco--;
			linha++;
			if(linha != n){
				printf("\n");
			}
			i = 1;
		}
	}
	return 0;
}
