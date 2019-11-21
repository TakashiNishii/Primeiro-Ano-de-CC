#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2;
	
	do{
		printf("\nInforme o primeiro valor: ");
		scanf("%d",&num1);
	}while(num1==0);
	
	do{
		printf("\nInforme o segundo valor: ");
		scanf("%d",&num2);
	}while(num2==0);
	
	if(num1==num2){
		printf("Os números informados são iguais, logo um é multiplo do outro");
	}else if(num1%num2==0){
		printf("O %d é múltiplo de %d",num1,num2);
	}else if(num2%num1==0){
		printf("O %d é múltiplo de %d",num2,num1);
	}else{
		printf("Os numeros informados não são multiplos entre si");
	}
	
	
	
	return 0;
}
