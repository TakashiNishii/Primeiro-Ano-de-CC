#include <stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[100];
	float salarioMinimo=998,salarioFuncionario;
	
	printf("Digite o nome do funcionario: ");
	scanf("%s",&nome);
	printf("\nDigite sal�rio atual: ");
	scanf("%f",&salarioFuncionario);
	printf("\nDigite salario m�nimo: ");
	scanf("%f",&salarioMinimo);
	
	
	if(salarioFuncionario<salarioMinimo*3){
		printf("\nO funcionario %s ter� o aumento de 50%% assim o novo salario dele �: %.2fR$  ",nome,salarioFuncionario*1.50);
	}else if(salarioFuncionario>=salarioMinimo*3 && salarioFuncionario<=salarioMinimo*10){
		printf("\nO funcionario %s ter� o aumento de 20%% assim o novo salario dele �: %.2fR$  ",nome,salarioFuncionario*1.20);
	}else{
		printf("\nO funcionario %s ter� o aumento de 15%% assim o novo salario dele �: %.2fR$  ",nome,salarioFuncionario*1.15);
	}
	
	return 0;
}
