#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int linha=0,espaco=0,num=0,numA=1;
	
	scanf("%d",&num);
	
	while(linha!=num){
		while(espaco<(num-linha)){
			printf(" ");
			espaco++;
		}
		espaco=0;
		while(espaco<numA){
			printf("*");
			espaco++;
		}
		espaco=0;
		printf("\n");
		linha++;
		numA+=2;
	}
	return 0;
}
