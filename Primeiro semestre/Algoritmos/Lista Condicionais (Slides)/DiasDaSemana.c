#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int dia;
	
	printf("Informe um número de 1 a 7 e será informado o dia da semana correspondente: ");
	scanf("%d", &dia);
	
	switch(dia){		
		case 1: {
			printf("O número %d corresponde ao: Domingo",dia);
			break;
		}
		case 2: {
			printf("O número %d corresponde à: Segunda",dia);
			break;
		}
		
		case 3: {
			printf("O número %d corresponde à: Terça",dia);
			break;
		}
		
		case 4: { 
			printf("O número %d corresponde à: Quarta",dia);
			break;
		}
		
		case 5: { 
			printf("O número %d corresponde à: Quinta",dia);
			break;
		}
		case 6: {
			printf("O número %d corresponde à: Sexta",dia);
			break;
		}
		case 7: {
			printf("O número %d corresponde ao: Sábado",dia);
			break;
		}
		default: {
			printf("O número %d não corresponde à nenhum dia da semana",dia);
			break;
		}
	}
	return 0;
	
	
	
}
