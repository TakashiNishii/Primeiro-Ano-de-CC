#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i=1,verificador=0;
	
	printf("Informe o numero e lhe ser� dito se � primo ou n�o: ");
	scanf("%d",&num);
	
	while(i<=num){
		if(num%i==0){
			verificador++;
		}
		
		i++;
	}
	if(verificador == 2){
		printf("\nO n�mero informado � primo");
	}else{
		printf("\nO n�mero informado n�o � primo");
	}
	
	return 0;
}
