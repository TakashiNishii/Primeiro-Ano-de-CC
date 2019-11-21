#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,contador=0;
	
	printf("Informe o numero desejado: ");
	scanf("%d",&n);
	
	printf("\nNumeros pares de 0 a %d : \n",n);
	while(contador<=n){
		printf("%d \n",contador);
		contador+=2;
	}

	return 0;
}
