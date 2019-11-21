#include <stdio.h>
#include <stdlib.h>

int Pares (int n){
	int numero;
	if (n == 0){
		printf ("0 ");
		return 0;
	}
	if (n % 2 == 0){
		numero = Pares(n - 2) + 2;
		printf ("%d ", numero);
		return numero;
	}else{
		return Pares (n - 1);
	}
}

int main () {
	int num;
	
	scanf ("%d", &num);
	
	Pares(num);
	printf ("\n");
	return 0;
}
