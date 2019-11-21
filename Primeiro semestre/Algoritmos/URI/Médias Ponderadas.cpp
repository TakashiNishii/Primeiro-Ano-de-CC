#include <stdio.h>

int main () {
	int N, i;
	float x1, x2, x3, media;
	
	scanf ("%d", &N);
	
	for (i = 1; i <= N; i++){
		scanf ("%f", &x1);
		scanf ("%f", &x2);
		scanf ("%f", &x3);
		
		media = (x1 * 0.2) + (x2 * 0.3) + (x3 * 0.5);
		
		printf ("%.1f\n", media);
	}
	
	return 0 ;
}
