#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,primeiros,i=1,valoranterior,valoranterior2,acumulador=0;
	do{
		printf("\nInforme o valor que deseja mostrar os valores de Fibonacci: ");
		scanf("%d",&n);
	}while(n>46);
	valoranterior=i;
	valoranterior2=i;
	//Escrevendo os 3 primeiros valores
	printf("%d ",acumulador);
	while(primeiros< 2){
			acumulador = 1;
			primeiros++;
			printf("%d ",acumulador);
	}
	valoranterior = i;
	valoranterior2 = i; 
	//Escrevendo os outros valores até n
	while(i<=n-3){
		valoranterior=acumulador;
		acumulador=valoranterior+valoranterior2;
		printf("%d ",acumulador);
		valoranterior2=valoranterior;
		i++;
	}	
}
