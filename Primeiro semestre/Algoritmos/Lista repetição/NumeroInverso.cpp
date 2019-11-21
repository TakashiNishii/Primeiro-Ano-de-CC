#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,milhar,centena,dezena,unidade;
	
	do{
		printf("Informe o número desejado: ");
		scanf("%d",&n);
		
		milhar=(n%10);
		centena = (n%100/10);
		dezena = (n%1000/100);
		unidade = n/1000;
		printf("O numero %d ao contrario fica: %d%d%d%d\n",n,milhar,centena,dezena,unidade);
		
	}while(n>999 && n<10000);
	
}
