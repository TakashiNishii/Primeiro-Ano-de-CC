#include <stdio.h>

int main () {
	float num[6],  soma = 0;
	int cont = 0, i;
	
	for (i = 0; i < 6; i++){
		scanf ("%f", &num[i]);
		if (num[i] > 0){
			cont++;
			soma += num[i];
		}
	}
	
	printf ("%d valores positivos\n", cont);
	printf ("%.1f\n", soma / cont);
	return 0;
}
