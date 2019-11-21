#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int x,y,i,acumulador=1;
	
	do{
		printf("\nInforme o valor de x: ");
		scanf("%d",&x);
		printf("\nInforme o valor de y: ");
		scanf("%d",&y);
		
		while(i<=y){
			acumulador = acumulador*x;
			i++;
		}
		printf("-----------------------------------\n");
		printf("\nO valor de %d elevado a %d é: %d \n",x,y,acumulador);
		printf("-----------------------------------\n");
		
		acumulador = 1;
		i=1;
	}while(x>0 && y>0);
	return 0;	
}
