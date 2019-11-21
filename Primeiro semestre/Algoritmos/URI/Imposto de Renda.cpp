#include <stdio.h>

int main () {
	float salario;
	
	scanf ("%f", &salario);
	
	if (salario > 2000 && salario <= 3000){
		salario = salario - 2000;
		printf("R$ %.2f\n", salario * 0.08);
	}else{
		if (salario > 3000 && salario <= 4500){
			salario = salario - 3000;
			printf("R$ %.2f\n", salario * 0.18 + 1000 * 0.08);	
		}else{
			if (salario > 4500){
				salario = salario - 4500;
				printf("R$ %.2f\n", salario * 0.28 + 1000 * 0.08 + 1500 * 0.18);
			}else{
				printf("Isento\n");
			}
		}
	}
	
	return 0;
}
