#include <stdio.h>

int main () {
	int i, num[100], maior, posMaior;
	
	for (i = 0; i < 100; i++) {
		scanf ("%d", &num[i]);
		
		if (i == 0) {
			maior = num [i];
			posMaior = i;
		}else{
			if (num[i] > maior){
				maior = num [i];
				posMaior = i;
			}
		}
	}
	
	printf ("%d\n", maior);
	printf ("%d\n", posMaior + 1);
	return 0;
}
