#include <stdio.h>
#include <locale.h>
int main(){ 
	setlocale(LC_ALL,"Portuguese");
	int i = 0,i2=0,n,l,l2,nl=1,nl2=1;
	char a = '*';
	
	printf("Informe quantas linhas os triângulos vai ter: ");
	scanf("%d",&n);
	
	/*while(n%2==0){
		printf("Valor invalido, informe quantas linhas o diamante vai ter (Numero impar): ");
		scanf("%d",&n);
	}*/
	
	while(i2<=n){ //Se quiser por quantidade de caracter só trocar i por nl
		i2++;
		nl2= nl2+2;	
	}
	
		i2--;
		nl2 = nl2-2;
		
	while(i2 != 0){
		i2--;
		nl2 = nl2-2;
		
		//Para o primeiro triângulo	
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
		
		//Para o segundo triângulo
		l=0;
		
		//while(l<=n-i2){
			printf(" ");
		//	l++;
		//}
		
		l=0;
		
		while(l!=nl2){
			printf("%c",a);
			l++;		
		}
		
		printf("\n");
		i++;
		nl= nl+2;
	}
	return 0;
}
		

