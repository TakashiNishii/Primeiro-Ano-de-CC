#include <stdio.h>
#include <stdlib.h>
void calculaDigitos (long num, int i){
	long vet[9];
	int status = 0, cont = 0, penultimo, ultimo, somatorio = 0, resto;
	
	printf ("%ld-", num);
	while (i >= 1){
		while (status == 0){
			if (num / i >= 10){
				vet[cont] = 0;
				num = num / i;
			}else{
				vet[cont] = num / i;
				num = num % i;
				status = 1;
			}
		}
		status = 0;
		i = i / 10;
		cont++;
	}
	
	//Calculo do penúltimo digito:
	for (i = 0; i < 9; i++){
		somatorio += (vet[i]*(10-i));
	}
	
	if (somatorio % 11 < 2){
		penultimo = 0;
	}else{
		resto = somatorio % 11;
		penultimo = 11 - resto;
	}
	printf("%d", penultimo);
	somatorio = 0;
	
	//Calculo do último digito:
	for (i = 0; i < 10; i++){
		if(i != 9){
			somatorio += (vet[i]*(11-i));
		}else{
			somatorio += penultimo * 2;
		}
	}
	
	if (somatorio % 11 < 2){
		ultimo = 0;
	}else{
		resto = somatorio % 11;
		ultimo = 11 - resto;
	}
	printf("%d", ultimo);
}

int main () {
	long numCPF;
	int i = 100000000;
	do{
		scanf("%ld", &numCPF);
	}while(numCPF < 100000000 || numCPF > 999999999);
	
	
	calculaDigitos(numCPF, i);
	
	return 0;
}

