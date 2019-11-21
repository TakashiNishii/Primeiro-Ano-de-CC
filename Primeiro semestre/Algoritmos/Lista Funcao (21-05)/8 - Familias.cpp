#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void familia (float *mediaSalario, float *mediaFilhos, float *maiorSalario, float *menorSalario, float *porcentagem) {
	int i, filhos, quantMe = 0;
	float salario;
	
	for (i = 1; i <= 10; i++) {
		printf ("Informe quantos filhos tem essa família: ");
		scanf ("%d", &filhos);
		printf ("O salario dessa família é: ");
		scanf ("%f", &salario);
		
		*mediaSalario = *mediaSalario + salario;
		*mediaFilhos = *mediaFilhos + filhos;
		
		if (i == 0){
			*maiorSalario = salario;
			*menorSalario = salario;
		}
		
		if (salario < *menorSalario) {
			*menorSalario = salario;
		}
		
		if (salario > *maiorSalario) {
			*maiorSalario = salario;
		}
		
		if (salario <= 600) {
			quantMe = quantMe + 1;
		}
		
		system("cls");
	}
	*mediaSalario = *mediaSalario / 10;
	*mediaFilhos = *mediaFilhos / 10;
	*porcentagem = quantMe * 100 /10;
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	float salario = 0, filhos = 0, salarioMaior = 0, salarioMenor = 10000, porcentagemSalario = 0;
	
	familia (&salario, &filhos, &salarioMaior, &salarioMenor , &porcentagemSalario);
	
	printf ("A média do salários das familias é: %.2f\n", salario);
	printf ("A média de filhos por famílias é: %.2f\n", filhos);
	printf ("O maior salário informado foi: %.2f\n", salarioMaior);
	printf ("O menor salário informado foi: %.2f\n", salarioMenor);
	printf ("A porcentagem de familia que recebe menos de R$600,00 é: %.2f%%",porcentagemSalario);
	
	return 0;
}
