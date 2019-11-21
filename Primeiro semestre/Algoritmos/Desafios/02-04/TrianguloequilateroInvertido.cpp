#include <stdio.h>
#include <locale.h>
int main(){ 
	setlocale(LC_ALL,"Portuguese");
	int i = 0,n,l,nl=1;
	char a = '*';
	
	printf("Informe quantas linhas o diamante vai ter: ");
	scanf("%d",&n);
	
	/*while(n%2==0){
		printf("Valor invalido, informe quantas linhas o diamante vai ter (Numero impar): ");
		scanf("%d",&n);
	}*/
	
	while(i<=n){ //Se quiser por quantidade de caracter só trocar i por nl
		
		i++;
		nl= nl+2;	
	}
	
		i--;
		nl = nl-2;
		
		while(i != 0){
		i--;
		nl= nl-2;	
		l=0;
		while(l<=n-i){
			printf(" ");
			l++;
		}
		l=0;
		while(l!=nl){
			printf("%c",a);
			l++;		
		}
		printf("\n");
		
	}
	return 0;
}
		

