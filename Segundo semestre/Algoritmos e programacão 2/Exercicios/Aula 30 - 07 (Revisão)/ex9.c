#include <stdio.h>
#include <stdlib.h>

int primo (int valor){
	int i = 1, quant = 0;	
	
	while (i <= valor){
		if (valor % i == 0){
			quant++;
		}
		i++;
	}
	
	if (quant > 2){
		return 0;
	} else {
		return 1;
	}
}
int soma (int n){
	int i, valor, acumulador = 0, status;
	
	while(i != n){
		do{
			scanf("%d", &valor);
		}while(valor < 1);
		status = primo(valor);
		
		if(status == 1){
			acumulador += valor;
		}
		
		i++;
	}	
	return acumulador;
}
int main (){
	int n, somaPrimos;
	
	do{
		scanf("%d", &n);
	}while(n < 1);
	
	somaPrimos = soma(n);
	
	printf ("%d", somaPrimos);
	return 0;
}
