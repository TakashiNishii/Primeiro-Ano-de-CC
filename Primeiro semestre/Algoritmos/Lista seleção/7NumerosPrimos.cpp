#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i=1,verificador=0;
	
	printf("Informe o numero e lhe será dito se é primo ou não: ");
	scanf("%d",&num);
	
	while(i<=num){
		if(num%i==0){
			verificador++;
		}
		
		i++;
	}
	if(verificador == 2){
		printf("\nO número informado é primo");
	}else{
		printf("\nO número informado não é primo");
	}
	
	return 0;
}
