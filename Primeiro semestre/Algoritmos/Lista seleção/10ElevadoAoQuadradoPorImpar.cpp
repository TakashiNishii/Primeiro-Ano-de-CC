#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num, i=1, numQuad=0,contImpar=0;
	
	printf("Informe um n�mero e ser� o mostrado ele elevado ao quadrado: ");
	scanf("%d",&num);
	
	while(contImpar!=num){
		if(i%2!=0){
			numQuad += i;
			contImpar++;
		}
		i++;
	}
	
	printf("O n�mero informado elevado ao quadrado �: %d",numQuad);
	return 0;
}
