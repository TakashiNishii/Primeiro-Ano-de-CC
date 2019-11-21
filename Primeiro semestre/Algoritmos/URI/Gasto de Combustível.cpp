#include <stdio.h>

int main () {
	int tempo, velocidade;
	double gasto;
	scanf ("%d", &tempo);
	scanf ("%d", &velocidade);
	
	gasto = (tempo * velocidade) / 12.0;
	
	printf ("%.3lf\n", gasto);
	return 0;
}
