#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i = 1, quantidade =0,soma=0;
	float media=0;
	
	while (i>0){		
		printf("Informe a idade da pessoa %d (0 ou menor � para acabar o c�digo): ", i);
		scanf("%d", &i);
		soma = soma + i;
		quantidade ++; 
	}
	quantidade--;
	soma = soma-i;
	media = soma/quantidade;
	printf("A m�dia de idade das %d pessoas informadas s�o: %.2f ", quantidade,media);
}
