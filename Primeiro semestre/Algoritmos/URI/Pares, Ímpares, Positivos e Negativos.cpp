#include <stdio.h>

int main () {
	int contImpar = 0, contPar = 0, contPositivo = 0, contNegativo = 0,i, num[5];
	
	for (i = 0; i < 5; i++){
		scanf ("%d", &num[i]);
		
		if (num[i] % 2 == 0){
			contPar++;
		}else{
			contImpar++;
		}
		if (num[i] != 0){
			if (num[i] > 0){
				contPositivo++;
			}else{
				contNegativo++;
			}	
		}
		
	}
	
	printf ("%d valor(es) par(es)\n", contPar);
	printf ("%d valor(es) impar(es)\n", contImpar);
	printf ("%d valor(es) positivo(s)\n", contPositivo);
	printf ("%d valor(es) negativo(s)\n", contNegativo);
	return 0;
}
