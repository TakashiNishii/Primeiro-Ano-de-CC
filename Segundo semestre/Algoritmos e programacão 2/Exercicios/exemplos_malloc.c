#include<stdio.h>
#include<stdlib.h>

int main(){
	int *vet;
	int i;
	vet = (int*)malloc(sizeof(int)*10);
	
	printf("%p ----- endereco de vet \n",&vet);
	printf("%p ----- primeiro endereco alocado do vetor\n", vet);
	for(i = 0; i<10 ; i++){
		printf("%p ----- posicoes alocadas\n",&vet[i]);
	}
	return 0;
}
