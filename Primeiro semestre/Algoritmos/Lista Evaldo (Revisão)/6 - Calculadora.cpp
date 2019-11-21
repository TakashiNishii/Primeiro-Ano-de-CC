#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int opcao () {
	int resp;
	printf ("Escolha o que deseja fazer: \n");
	printf ("[1] - Adi��o\n");
	printf ("[2] - Subtra��o\n");
	printf ("[3] - Multiplica��o\n");
	printf ("[4] - Divis�o\n");
	printf ("[5] - Sair\n");
	printf ("Sua escolha: ");
	scanf ("%d", &resp);
	system ("cls");
	return resp;
		
}
float soma (float a, float b) {
	return a + b;
}

float subtracao (float a, float b) {
	return a - b;
}

float multiplicacao (float a, float b) {
	return a * b;
} 

float divisao (float a, float b) {
	if (b == 0) {
		return -9999;
	} else {
		return a / b;
	}
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	float num1, num2, resultado;
	int op = 0;
	
	while (op != 5) {
		system ("cls");
		
		printf ("Num 1: ");
		scanf ("%f", &num1);
		printf ("Num 2: ");
		scanf ("%f", &num2);
		op = opcao();
		
		system("cls");
		switch (op){
			case 1 : {
				resultado = soma(num1, num2);		
				printf ("%.2f + %.2f = %.2f\n", num1, num2, resultado);
				break;
			}
			case 2 : {
				resultado = subtracao(num1, num2);
				printf ("%.2f - %.2f = %.2f\n", num1, num2, resultado);
				break;
			}
			case 3 : {
				resultado = multiplicacao(num1, num2);
				printf ("%.2f * %.2f = %.2f\n", num1, num2, resultado);
				break;
			}
			case 4 : {
				resultado = divisao(num1, num2);
				if (resultado == -9999){
					printf ("Erro!\n");
				}else{
					printf ("%.2f / %.2f = %.2f\n", num1, num2, resultado);
				}
				break;
			}
			case 5 : {
				printf("Programa encerrado! \n");
				break;
			}
			default : {
				printf ("Op��o inv�lida!\n");
				break;
			}
		}
		system ("pause");
	}	
	return 0;
}
