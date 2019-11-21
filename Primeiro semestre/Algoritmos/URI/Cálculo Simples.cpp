#include <stdio.h>

int main () {
	int peca1, peca2, qnt1, qnt2;
	double valor1, valor2;
	
	scanf("%d %d %lf", &peca1, &qnt1, &valor1);
	scanf("%d %d %lf", &peca2, &qnt2, &valor2);
	
	printf ("VALOR A PAGAR: R$ %.2lf\n", (valor1 * qnt1) + (valor2 * qnt2));
	return 0;
}
