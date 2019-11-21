#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int voto,c1=0,c2=0,c3=0,c4=0,nulo=0,branco=0,quant=0;
	
	do{
		printf("Qual o seu voto: \n");
		printf("1- Guaíra\n");
		printf("2- Batman\n");
		printf("3- Bolsonaro\n");
		printf("4- Shrek\n");
		printf("5- Nulo\n");
		printf("6- Branco\n");
		printf("Sua escolha: ");
		scanf("%d",&voto);
		if(voto==1){
			c1 ++;
			quant++;
		}else if(voto==2){
			c2++;
			quant++;
		}else if(voto==3){
			c3++;
			quant++;
		}else if(voto==4){
			c4++;
			quant++;
		}else if(voto==5){
			nulo++;
			quant++;
		}else if(voto==6){
			branco++;
			quant++;	
		}else{
			printf("Opção invalida e não contada");	
		}
		
		system("cls");
	}while(voto!=0);
	printf("RESULTADO DA VOTAÇÃO: ");
	printf("\n1- Guaíra: %d votos\n",c1);
	printf("2- Batman: %d votos\n",c2);
	printf("3- Bolsonaro: %d votos\n",c3);
	printf("4- Shrek: %d votos\n",c4);
	printf("5- Nulo: %d votos\n",nulo);
	printf("6- Branco: %d votos\n",branco);
	printf("\n------------------------------------------------------\n");
	printf("Os votos em nulos corresponde a %d%% do total de votos",nulo*100/quant);	
	printf("\nOs votos em branco corresponde a %d%% do total de votos",branco*100/quant);
	
	return 0;
}
