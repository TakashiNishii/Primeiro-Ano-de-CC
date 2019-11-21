#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, numero=0, soma=0;
	i=1;
	while(i<=4){
		printf("\n Informe o %d° numero: ",i++);
		scanf("%d",&numero);
		soma = soma + numero;
	}
	printf("A soma dos numeros informado é: %d",soma);
	return 0;
}
