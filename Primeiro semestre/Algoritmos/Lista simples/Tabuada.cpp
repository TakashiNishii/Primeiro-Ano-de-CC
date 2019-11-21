#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,n;
	i=1;
	n=5;
	
	printf("A tabuada do 5 é: \n");
	while(i<=10){
		printf("%d X %d = %d \n",n,i,n*i);
		i++;
	}
	
	
	return 0;
}
