#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i=1,j=1,bolas=0;
	do{
		printf("Informe o n�mero desejado ");
		scanf("%d",&num);
	}while(num<=1);
	
	while(bolas<num){
		i=1;
		while(i<=j){
			bolas++;
			i++;
		}
		j++;
	}
	
	if(bolas>num){
		printf("\nO n�mero informado n�o � triangular");
	}else{
		printf("\nO n�mero informado � triangular");
	}
	
	return 0;
}
