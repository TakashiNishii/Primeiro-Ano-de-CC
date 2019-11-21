#include  <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	 int i=2,soma = 0;
	 while (i<=50){
		 soma = soma + i;
	 	i = i + 2;
	 }
	 
	 printf("%d",soma);
	
}
