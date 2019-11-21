#include <stdio.h>
#include <stdlib.h>
#define max 50

int calcula (int vet[], int c){
	int i, soma = 0, quant = 0;
	
	for (i = 0; i < c; i++){
		soma += vet[i];
	}
	for(i = 0; i < c; i++){
		if(vet[i] > (soma/c)){
			quant++;
		}
	}
	return quant;
}
void leVetor (int vetor[], int c){
	int i;
	
	for (i = 0; i < c; i++){
		scanf("%d", &vetor[i]);
	}
}

int main (){
	int c, vet[max], quantidade;
	
	do{
		scanf("%d", &c);
	}while(c < 1 || c > max);
	
	leVetor(vet, c);
	quantidade = calcula(vet, c);
	
	printf("%d", quantidade);
	return 0;
}
