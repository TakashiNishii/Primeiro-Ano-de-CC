#include <stdio.h>
int main () {
	int N;
	
	scanf("%d", &N);
		
	printf("%d\n", N);
	printf ("%d nota(s) de R$ 100,00\n", N/100);
	N = N - ((N/100) * 100);
	
	printf ("%d nota(s) de R$ 50,00\n", N/50);
	N = N - ((N/50) * 50);
	
	printf ("%d nota(s) de R$ 20,00\n", N / 20);
	N = N - ((N / 20) * 20);

	printf ("%d nota(s) de R$ 10,00\n", N / 10);
	N = N - ((N / 10) * 10);
	
	printf ("%d nota(s) de R$ 5,00\n", N / 5);
	N = N - ((N / 5) * 5);
	
	printf ("%d nota(s) de R$ 2,00\n", N / 2);
	N = N - ((N / 2) * 2);
	
	printf ("%d nota(s) de R$ 1,00\n", N / 1);

	return 0;
}
