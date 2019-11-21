#include <stdio.h>
#include <stdlib.h>
void imprimeAsteriscos(){
	printf("**********\n");
}
int separaNum(long num, int quant, int i){
	long vet[quant];
	int status = 0, cont = 0, soma = 0;
	
	while (cont != quant){
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
	
	for (i = quant - 1; i >= 0; i--){
		printf ("%ld   ", vet[i]);
		soma += vet[i];
	}
	printf("\n");
	return soma;
}

int main () {
	long num;
	int soma, i = 1, quantDigitos = 1, status = 0;
	
	do {
		scanf("%ld", &num);
	}while(num <= 0);
	
	while (status == 0){
		if (num / i >= 10){
			quantDigitos++;
			i = i * 10;
		}else{
			status = 1;
		}
	}
	
	imprimeAsteriscos();
	soma = separaNum(num, quantDigitos, i);
	imprimeAsteriscos();
	printf ("%d\n", soma);
	imprimeAsteriscos();
	return 0;
}
