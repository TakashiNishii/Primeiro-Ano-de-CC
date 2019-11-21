#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,c;
	float raizDelta,x1,x2,delta;
	
	printf("---------Calculador de raiz da equação de segundo grau------------\n");
	do{
		printf("Informe o valor de a: ");
		scanf("%d",&a);
	}while(a==0);
	
	printf("\nInforme o valor de b: ");
	scanf("%d",&b);
	
	printf("\nInforme o valor de c: ");
	scanf("%d",&c);
	
	
	delta= (b*b)-(4*a*c);
	
	if(delta<0){
		printf("Delta menor que zero então não há raiz real");
	}else if(delta==0){
		raizDelta = sqrt(delta);
		
		a = a*2;
		x1= (b*(-1)+raizDelta)/a;
		
		printf("A raiz da função é: %.2f",x1);
	}else{
		raizDelta = sqrt(delta);
		b = -1 * b; 
		x1 = (b+raizDelta)/2*a;
		x2 = (b-raizDelta)/2*a;
		printf("As raiz da função é: X1:%.2f e X2: %.2f",x1,x2);
	}

	
	
	return 0;
}
