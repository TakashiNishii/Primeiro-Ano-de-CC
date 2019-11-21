#include <stdio.h>

int main () {
	int n, x, cont = 0, i;
	
	scanf ("%d", &n);
	
	for (i = 1; i <= n; i++){
		scanf ("%d", &x);
		if (x >= 10 && x <= 20){
			cont++;
		}
	}
	
	printf ("%d in\n", cont);
	printf ("%d out\n", n - cont);
}
