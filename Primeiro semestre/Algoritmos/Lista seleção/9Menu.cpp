#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int op,num,soma=0,maior=0,menor,somaPar=0;
	float quant=0,quantPar=0;
	while(num!=-1){
			printf("\nInforme o número (-1 para sair): ");
			scanf("%d",&num);	
		if(quant==0){
			maior = num;
			menor = num;
			if(num%2==0){
				somaPar = num;
				quantPar++;
			}
		}else{
		 	if(num>maior){
				maior = num;
			} else if(num<menor && num!=-1){
				menor = num;
			}
			if(num%2==0){
				somaPar += num;
				quantPar++;
			}
		}
		if(num!=-1){
			soma += num;
			quant++;
		}
	}
	system("cls");
	while(op!=7){
		printf("\n---------------------------------------------------------------------------------------");
		printf("\nO que deseja fazer?\n");
		printf("(1) - Soma dos números digitados\n");
		printf("(2) - Quantidade de números digitados\n");
		printf("(3) - Média dos números digitados\n");
		printf("(4) - Maior número digitado\n");
		printf("(5) - Menor número digitado\n");
		printf("(6) - Média dos números pares\n");
		printf("(7) - Sair\n");
		printf("Sua escolha: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:{
				printf("%d",soma);	
				break;
			}
			
			case 2:{
				printf("%.0f",quant);
				break;
			}
			
			case 3:{
				printf("%.2f",soma/quant);
				break;
			}
			
			case 4:{
				printf("%d",maior);
				break;
			}
			
			case 5:{
				printf("%d",menor);
				break;
			}
			
			case 6:{
				printf("%.2f",somaPar/quantPar);
				break;
			}
			
			case 7:{
				printf("Tchauzinho");
				break;
			}	
			
		}
	}
	
	
	return 0;
}
