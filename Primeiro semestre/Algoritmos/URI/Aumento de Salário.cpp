#include <stdio.h>

int main () {
	float salario, ajuste;
	int porcentagem;
	
	scanf ("%f", &salario);
	
	if (salario <= 400) {
		ajuste = salario * 0.15;
		porcentagem = 15;
	}
	if (salario > 400 && salario <= 800) {
		ajuste = salario * 0.12;
		porcentagem = 12;
	}
	if (salario > 800 && salario <= 1200) {
		ajuste = salario * 0.10;
		porcentagem = 10;
	}
	if (salario > 1200 && salario <= 2000) {
		ajuste = salario * 0.07;
		porcentagem = 7;
	}
	if (salario > 2000){
		ajuste = salario * 0.04;
		porcentagem = 4;
	}
	
	printf ("Novo salario: %.2f\n", salario + ajuste);
	printf ("Reajuste ganho: %.2f\n", ajuste);
	printf ("Em percentual: %d %%\n", porcentagem);
	
	return 0;
}
