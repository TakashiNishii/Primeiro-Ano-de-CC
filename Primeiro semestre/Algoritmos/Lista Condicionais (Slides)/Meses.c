#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mes;
	
	printf("Informe um n�mero de 1 a 12 e assim ser� mostrado o m�s correspondente: ");
	scanf("%d",&mes);
	
	switch(mes){
		case 1: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Janeiro",mes);
			break;
		}
		
		case 2: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Fevereiro",mes);
			break;
		}
		
		case 3:{
			printf("\nO n�mero %d corresponde com o seguinte m�s: Mar�o",mes);
			break;
		}
		
		case 4: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Abril",mes);
			break;
		}
		
		case 5: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Maio",mes);
			break;
		}
		
		case 6: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Junho",mes);
			break;
		}
		
		case 7:{
			printf("\nO n�mero %d corresponde com o seguinte m�s: Julho",mes);
			break;
		}
		
		case 8:{
			printf("\nO n�mero %d corresponde com o seguinte m�s: Agosto",mes);
			break;
		}
		
		case 9: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Setembro",mes);
			break;
		}
		
		case 10: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Outubro",mes);
			break;
		}
		
		case 11: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Novembro",mes);
			break;
		}
		
		case 12: {
			printf("\nO n�mero %d corresponde com o seguinte m�s: Dezembro",mes);
			break;
		}
		
		default:{
			printf("O n�mero informado n�o corresponde a nenhum m�s");
			break;
		}
			
	}
	
	
	
	
	return 0;
}
