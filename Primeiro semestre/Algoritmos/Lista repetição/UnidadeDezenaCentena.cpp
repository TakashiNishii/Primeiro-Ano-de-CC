#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,u,d,c;
	do{
		printf("\nInforme um numero entre 99 e 1000: ");
		scanf("%d",&n);
		
		u = n%10;
		d = n%100/10;
		c = n/100;
		
		printf("--------------------------\n");
		printf("No numero %d temos: \n",n);
		printf("%d centenas simples = %d\n",c,c*100);
		printf("%d dezenas simples = %d\n",d,d*10);
		printf("%d unidades simples = %d\n",u,u);
		printf("--------------------------\n");
		
	}while(n>99 && n<1000);
	return 0;
}
