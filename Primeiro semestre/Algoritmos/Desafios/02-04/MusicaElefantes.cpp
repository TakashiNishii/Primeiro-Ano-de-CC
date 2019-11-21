#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i=1,quantIncomodam;
	
	printf("Quantos elefantes tem? ");
	scanf("%d",&num);
	
	while(i<=num){
		
		if(i%2!=0){
			printf("%d elefantes incomoda muita gente \n",i);
		}else{
			printf("%d elefantes ",i);
			while(quantIncomodam< i){
				printf("incomodam, ");
				quantIncomodam++;	
			}
			printf("incomodam muito mais\n");
		}
		quantIncomodam = 0;
		i++;
	}
	
	
	
	
	return 0;
}
