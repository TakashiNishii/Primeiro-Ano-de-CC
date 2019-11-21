#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, i=1, numQuad=0,contImpar=0;
	
	printf("Informe um número e será o mostrado ele elevado ao quadrado: ");
	scanf("%d",&num);
	
	while(contImpar!=num){
		if(i%2!=0){
			numQuad += i;
			contImpar++;
		}
		i++;
	}
	
	printf("O número informado elevado ao quadrado é: %d",numQuad);
	return 0;
}
