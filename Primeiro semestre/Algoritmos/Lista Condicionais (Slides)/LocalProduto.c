#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float preco;
	int cod;
	
	printf("Informe o valor do produto: ");
	scanf("%f", &preco);
	
	printf("\nInforme o código de origem: ");
	printf("\n1 - Sul");
	printf("\n2 - Norte");
	printf("\n3 - Leste");
	printf("\n4 - Oeste");
	printf("\n5 - Nordeste");
	printf("\n6 - Sudeste");
	printf("\n7 - Centro-Oeste");
	printf("\n8 - Centro-Sul");
	printf("\nQualquer outro numero - Importado");
	printf("\nCódigo: ");
	scanf("%d",&cod);
	
	switch(cod){
		
		case 1: { 
			printf("%.2f - Sul",preco);
			break;
		}
		
		case 2: {
			printf("%.2f - Norte",preco);
			break;
		}
		
		case 3: {
			printf("%.2f - Leste",preco);
			break;
		}
		
		case 4: {
			printf("%.2f - Oeste",preco);
			break;
		}
		
		case 5: {
			printf("%.2f - Nordeste",preco);
			break;
		}
		
		case 6: {
			printf("%.2f - Sudeste",preco);
			break;
		}
		
		case 7: {
			printf("%.2f - Centro-Oeste",preco);
			break;
		}
		
		case 8: {
			printf("%.2f - Centro-Sul",preco);
			break;
		}
		
		default: {
			printf("%.2f - Importado",preco);
			break;
		}
		
	}
	
	return 0;
}
