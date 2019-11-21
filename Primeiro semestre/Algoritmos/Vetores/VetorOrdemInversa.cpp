#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int Num[20];
	int i;
	for (i=0; i < 20 ; i++){
		printf("Informe o numero da posição: %d: ",i+1);
		scanf("%d", &Num[i]);
	}
	system("cls");
	for(i = (sizeof(Num)/sizeof(int))-1; i >= 0; i--){
		printf("%d",Num[i]);
		printf("\n");
	}
	
	
	
	
	return 0;
}
