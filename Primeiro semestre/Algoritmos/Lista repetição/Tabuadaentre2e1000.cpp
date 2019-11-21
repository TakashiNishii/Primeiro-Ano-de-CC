#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, i;
	
	do{
		printf("Informe o numero que deseja aparecer a tabuada entre 2 e 1000: ");
		scanf("%d",&n);
	}while(n<2 || n>1000);
	
	while(i<=10){
		printf("\n%d X %d = %d",n,i,n*i);
		i++;
	}	
}
