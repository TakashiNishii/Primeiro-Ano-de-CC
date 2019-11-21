#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	
	printf("Informe um número de 1 a 12 e assim será mostrado o mês correspondente: ");
	scanf("%d",&mes);
	
	switch(mes){
		case 1: {
			printf("\nO número %d corresponde com o seguinte mês: Janeiro",mes);
			break;
		}
		
		case 2: {
			printf("\nO número %d corresponde com o seguinte mês: Fevereiro",mes);
			break;
		}
		
		case 3:{
			printf("\nO número %d corresponde com o seguinte mês: Março",mes);
			break;
		}
		
		case 4: {
			printf("\nO número %d corresponde com o seguinte mês: Abril",mes);
			break;
		}
		
		case 5: {
			printf("\nO número %d corresponde com o seguinte mês: Maio",mes);
			break;
		}
		
		case 6: {
			printf("\nO número %d corresponde com o seguinte mês: Junho",mes);
			break;
		}
		
		case 7:{
			printf("\nO número %d corresponde com o seguinte mês: Julho",mes);
			break;
		}
		
		case 8:{
			printf("\nO número %d corresponde com o seguinte mês: Agosto",mes);
			break;
		}
		
		case 9: {
			printf("\nO número %d corresponde com o seguinte mês: Setembro",mes);
			break;
		}
		
		case 10: {
			printf("\nO número %d corresponde com o seguinte mês: Outubro",mes);
			break;
		}
		
		case 11: {
			printf("\nO número %d corresponde com o seguinte mês: Novembro",mes);
			break;
		}
		
		case 12: {
			printf("\nO número %d corresponde com o seguinte mês: Dezembro",mes);
			break;
		}
		
		default:{
			printf("O número informado não corresponde a nenhum mês");
			break;
		}
			
	}
	
	
	
	
	return 0;
}
