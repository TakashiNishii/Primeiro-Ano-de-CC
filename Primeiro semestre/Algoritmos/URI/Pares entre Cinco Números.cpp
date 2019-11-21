#include <stdio.h>

int main () {
	int cont = 0, i, num[5];
	
	for (i = 0; i < 5; i++){
		scanf ("%d", &num[i]);
		if (num[i] % 2 == 0){
			cont++;
		}
	}
	
	printf ("%d valores pares\n", cont);
	return 0;
}
