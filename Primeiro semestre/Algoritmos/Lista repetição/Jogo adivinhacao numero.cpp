#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,max,tentativa;
	do{
		printf("Informe o número que terá que ser adivinhado: ");
		scanf("%d",&num);
	}while(num<=0);
	
	system("cls");
	do{
		printf("\nInforme o valor máximo: ");
		scanf("%d",&max);
	}while(max<num);
	
	while(tentativa != num){
		printf("\nTente adivinhar o número escolhido de 0 a %d: ",max);
		scanf("%d",&tentativa);
		while(tentativa>max || tentativa<0){
			printf("\nValor invalido tente adivinhar o número escolhido de 0 a %d: ",max);
			scanf("%d",&tentativa);
		}
	}
	printf("----------------------------------------------\n");
	printf("Parabéns você acertou, o número escolhido foi: %d",tentativa);
}
