#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, quantidade =0,soma=0;
	float media=0;
	
	printf("Informe a idade da pessoa (0 � para acabar de informar as idades): ");
	
	scanf("%d", &i);
	
	while(i<0){
			printf("Idade invalida, por favor informar uma idade de valor positivo (0 � para acabar o c�digo): ");
			scanf("%d", &i);
	}
	
	while (i!=0){		
		soma = soma + i;
		quantidade ++; 	
		printf("Informe a idade da pessoa  (0 � para acabar o c�digo): ");
	
		scanf("%d", &i);
	
		while(i<0){
			printf("Idade invalida, por favor informar uma idade de valor positivo (0 � para acabar o c�digo): ");
			scanf("%d", &i);
		}
	}
	
	media = soma/quantidade;
	printf("A m�dia de idade das %d pessoas informadas s�o: %.2f ", quantidade,media);
}
