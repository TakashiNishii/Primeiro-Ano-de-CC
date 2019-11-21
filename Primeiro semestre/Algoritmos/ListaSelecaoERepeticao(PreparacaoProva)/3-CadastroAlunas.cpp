#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	//A= mais alta, P = mais pesada,L=loira,R=ruiva
	float altura,alturaA,alturaP,somaalturaLR,peso,pesoP;
	char cor,corA;
	int quant=0,quantLR=0;
	
	//Cadastro da primeira aluna:
	printf("Informe a altura da aluna: ");
	scanf("%f",&altura);
	
	printf("Informe o peso da aluna: ");
	scanf("%f",&peso);
	
	do{
		printf("Informe a cor do cabelo:(L)Loiro,(C)Castanho,(P)Preto ou (R)Ruivo\n");
		printf("Sua resposta: ");
		fflush(stdin);
		scanf("%c",&cor);
	}while(cor!='L' && cor!='C' && cor!='P' && cor!='R');
	
	quant++;
	alturaA=altura;
	alturaP=altura;
	pesoP = peso;
	corA=cor;
	
	if(cor=='L' || cor=='R'){
		somaalturaLR += altura;
		quantLR++;
	}
	
	system("cls");
	//Cadastro das outras 49 alunas:
	while(quant<50){
		printf("Informe a altura da aluna: ");
		scanf("%f",&altura);
	
		printf("Informe o peso da aluna: ");
		scanf("%f",&peso);
	
		do{
			printf("Informe a cor do cabelo:(L)Loiro,(C)Castanho,(P)Preto ou (R)Ruivo\n");
			printf("Sua resposta: ");
			fflush(stdin);
			scanf("%c",&cor);
		}while(cor!='L' && cor!='C' && cor!='P' && cor!='R');
		
		if(altura>alturaA){
			alturaA = altura;
			corA = cor;
		}
		
		if(peso>pesoP){
			pesoP = peso;
			alturaP = altura;
		}
		
		if(cor=='L' || cor=='R'){
			somaalturaLR += altura;
			quantLR++;
		}
		system("cls");
		quant++;
	}
	fflush(stdin);
	if(corA == 'L'){
		printf("A cor do cabelo da moça mais alta é loiro\n");	
	}else if(corA == 'C'){
		printf("A cor do cabelo da moça mais alta é castanho \n");
	}else if(corA == 'P'){
		printf("A cor do cabelo da moça mais alta é preto \n");
	}else{
		printf("A cor do cabelo da moça mais alta é ruivo \n");
	}
	
	printf("A altura da aluna mais pesada é: %.2f\n",alturaP);
	printf("E a média de altura das alunas ruivas e loiras é: %.2f",somaalturaLR/quantLR);
	
	return 0;
}
