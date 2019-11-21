#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i = 0,n,l;
	char a = '*';
	printf("Informe quantas linhas o triangulo vai ter de 1 há 10: ");
	scanf("%d",&n);
	while(n<1){
		printf("Valor invalido, informe quantas linhas o triangulo vai ter de 1 há 10: ");
		scanf("%d",&n);
	}
	while(n>10){
		printf("Valor invalido, informe quantas linhas o triangulo vai ter de 1 há 10: ");
		scanf("%d",&n);
	}
	while(i!=n){
		
		l=0;
		while(l!=n){
			printf("%c",a);
			l++;
		}
		printf("\n");
		n--;
	}
}
