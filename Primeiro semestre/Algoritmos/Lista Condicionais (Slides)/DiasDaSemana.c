#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia;
	
	printf("Informe um n�mero de 1 a 7 e ser� informado o dia da semana correspondente: ");
	scanf("%d", &dia);
	
	switch(dia){		
		case 1: {
			printf("O n�mero %d corresponde ao: Domingo",dia);
			break;
		}
		case 2: {
			printf("O n�mero %d corresponde �: Segunda",dia);
			break;
		}
		
		case 3: {
			printf("O n�mero %d corresponde �: Ter�a",dia);
			break;
		}
		
		case 4: { 
			printf("O n�mero %d corresponde �: Quarta",dia);
			break;
		}
		
		case 5: { 
			printf("O n�mero %d corresponde �: Quinta",dia);
			break;
		}
		case 6: {
			printf("O n�mero %d corresponde �: Sexta",dia);
			break;
		}
		case 7: {
			printf("O n�mero %d corresponde ao: S�bado",dia);
			break;
		}
		default: {
			printf("O n�mero %d n�o corresponde � nenhum dia da semana",dia);
			break;
		}
	}
	return 0;
	
	
	
}
