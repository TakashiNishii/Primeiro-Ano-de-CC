#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i,acumulador=1;
	do{
	
		printf("Informe o valor que deseja que apare�a seu fatorial: ");
		scanf("%d",&n);
	}while(n<=0);
	
	for(i=n; i>0 ;i--){
		acumulador = acumulador*i;
	}
	
	printf("\nO fatorial de %d �: %d",n,acumulador);
}
