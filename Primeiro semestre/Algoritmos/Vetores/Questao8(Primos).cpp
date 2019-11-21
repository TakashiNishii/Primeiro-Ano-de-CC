#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int vet[50], pos, quantPrimos = 0, quantDiv = 0, i = 1;
	
	//Colocando valores no vetor:
	for (pos = 0; pos < 50; pos++) {
		printf ("Digite o valor da posição %d do vetor: ", pos + 1);
		scanf ("%d", &vet[pos]);
		
		//Calculando pra ver se o numéro informado é primo:
		quantDiv = 0;
		while (i <= vet[pos]) {
			if (vet[pos] % i == 0){
				quantDiv++;
			}
			i++;
		} 
		
		if (quantDiv <= 2) {
			quantPrimos += 1;
		}		
		
		i = 1;
		
	}
	printf("Foram informados %d números primos", quantPrimos);
	return 0;
}
