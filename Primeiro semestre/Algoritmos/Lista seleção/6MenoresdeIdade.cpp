#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade,menores=0;
	
	for(int pessoa=1;pessoa<=20;pessoa++){
		printf("Informe a idade da pessoa %d: ",pessoa);
		scanf("%d",&idade);
		if(idade<18){
			menores++;
		}
		
	}
	printf("Das 20 pessoas %d eram menores de idade",menores);
	
	return 0;
}
