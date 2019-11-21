#include <stdio.h>
#include <stdlib.h>
#define max 50
int conjunto_representantes (int vet[], int n, int conjunto[], int *soma){
	int quant = 1, i, j, status = 0, verificaZero = 0;
	
	for(i = 0; i < n; i++){
		if(vet[i] == 0 && verificaZero == 0){
			conjunto[quant - 1] = vet[i];
			*soma = *soma + vet[i];
			quant++;
			verificaZero = 1;
			status = 1;
		}
		else{
			for (j = 0; j < quant; j++){
				if(vet[i] == conjunto[j]){
					status = 1;
				}
			}
		}
		
		if (status == 0){
			conjunto[quant - 1] = vet[i];
			*soma = *soma + vet[i];
			quant++;
		}else{
			status = 0;
		}
	}
	return quant - 1;
}

int main () {
	int vet[max], conjunto[max], n, soma = 0, quantConjunto, i;
	
	do{
		scanf("%d", &n);
	}while(n <= 0 || n > 50);
	
	for (i = 0; i < n; i++){
		scanf("%d", &vet[i]);
	}
	
	quantConjunto = conjunto_representantes(vet, n, conjunto, &soma);
	
	printf("%d\n", quantConjunto);
	for(i = 0; i < quantConjunto; i++){
		printf("%d ", conjunto[i]);
	}
	printf("\n%d\n", soma);
	return 0;
}
