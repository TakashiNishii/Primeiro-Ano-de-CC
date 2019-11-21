#include <stdio.h>
int main(){
	int n,primeiros,i=1,valoranterior,valoranterior2,acumulador;
	do{
		printf("\nInforme o valor que deseja mostrar os valores de Fibonacci: ");
		scanf("%d",&n);
	}while(n>46);
	printf("%d ",acumulador);
	valoranterior = i;
	valoranterior2 = i; 
	while(i < n){
		valoranterior=acumulador;
		acumulador=valoranterior+valoranterior2;
		printf("%d ",acumulador);
		valoranterior2=valoranterior;
		i++;
	}	
}
