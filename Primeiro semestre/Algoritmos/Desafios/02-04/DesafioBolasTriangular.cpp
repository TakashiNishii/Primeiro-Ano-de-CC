#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i=1,j=1,bolas=0;
	do{
		printf("Informe o número desejado ");
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
		printf("\nO número informado não é triangular");
	}else{
		printf("\nO número informado é triangular");
	}
	
	return 0;
}
