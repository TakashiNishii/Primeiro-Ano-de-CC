#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,num3;
	
	printf("Informe o numero 1: ");
	scanf("%d",&num1);
	
	do{
		printf("\nInforme o numero 2: ");
		scanf("%d",&num2);
	}while(num2==num1);
	
	do{
		printf("\nInforme o numero 3: ");
		scanf("%d",&num3);
	}while(num3==num2 || num3 == num1);
	
	if(num1>num2){
		if(num1>num3){
			if(num3>num2){
				printf("\n%d %d %d ",num1,num3,num2);
			}else{
				printf("\n%d %d %d ",num1,num2,num3);
			}
		}else{
			printf("\n%d %d %d ",num3,num1,num2);
		}
	}else{
		if(num1>num3){
			printf("\n%d %d %d ",num2,num1,num3);
		}else{
			if(num3>num2){
				printf("\n%d %d %d ",num3,num2,num1);
			}else{
				printf("\n%d %d %d ",num2,num3,num1);
			}
		}
	}
	
	return 0;
}
