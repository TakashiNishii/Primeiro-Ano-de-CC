#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//A=Atleta, M=Masculino, F= Feminino, J= Jovens entre 15 e 18 anos, P= "Profissionais"
	float peso,altura,somaPesoF=0;
	char sexo,sexoMaior,sexoMenor,opcao;
	int quant=1,idade,idadeMaior,idadeMenor,numAM=0,numAF=0,numJ=0,numP=0;
	
	printf("-----------------------Inscrição de atletas-----------------------");
	//Inscrição do primeiro atleta
	do{
		printf("\nInforme o sexo do(a) atleta 1: (M) Masculino (F)Feminino (S) Para sair do programa \n");
		printf("Sua resposta: ");
		scanf("%c",&sexo);
	}while(sexo!='M' && sexo!='F' && sexo != 'S');
		
	if(sexo !='S' && opcao!='S'){
		
		do{
			printf("\nInforme o peso do(a) atleta: ");
			scanf("%f",&peso);
		}while(peso<=0);
	
		do{
			printf("\nInforme a idade do(a) atleta: ");
			scanf("%d",&idade);
		}while(idade<=0);
	
		do{
			printf("\nInforme a altura do(a) atleta: ");	
			scanf("%f",&altura);	
		}while(peso<=0);
	
		idadeMaior  = idade;
		idadeMenor = idade;
		sexoMaior = sexo;
		sexoMenor = sexo;
		if(sexo =='M'){
				numAM++;		
		}else if(sexo =='F'){
				somaPesoF+=peso;
				numAF++;
		}
			
		if(idade>=15 && idade<=18){
			numJ++;
		}
			
		if(idade>18 && peso>65 && altura>1,65){
			numP++;
		}
			
		if(idade>idadeMaior){
			idadeMaior = idade;
			sexoMaior = sexo;
		}else if(idade<idadeMenor){
			idadeMenor = idade;
			sexoMenor = sexo;
		}
		
		//inscrição dos restantes	
		system("cls");
		while(quant< 80){
			do{	
				printf("\nInforme o sexo do(a) atleta %d: (M) Masculino (F)Feminino\n",quant+1);
				printf("Sua resposta: ");
				fflush(stdin);
				scanf("%c",&sexo);
			}while(sexo!='M' && sexo!='F');
			
			do{
				printf("\nInforme o peso do(a) atleta: ");
				scanf("%f",&peso);
			}while(peso<=0);
	
			do{
				printf("\nInforme a idade do(a) atleta: ");
				scanf("%d",&idade);
			}while(idade<=0);
	
			do{
				printf("\nInforme a altura do(a) atleta: ");	
				scanf("%f",&altura);	
			}while(peso<=0);
			
			
			if(sexo =='M'){
				numAM++;		
			}else if(sexo =='F'){
				somaPesoF+=peso;
				numAF++;
			}
			
			if(idade>=15 && idade<=18){
				numJ++;
			}
			
			if(idade>18 && peso>65 && altura>1.65){
				numP++;
			}
			
			if(idade > idadeMaior){
				idadeMaior = idade;
				sexoMaior = sexo;
			}
			if(idade < idadeMenor){
				idadeMenor = idade;
				sexoMenor = sexo;
			}
			
			
			
			
			system("cls");	
			quant++;
		}
		
		while(opcao!='S'){
			system("cls");
			printf("Informações sobre seus atletas:\n");
			printf("(A) O número de atletas do sexo masculino\n");
			printf("(B) A média dos pesos das atletas de sexo feminino\n");
			printf("(C) O número de atletas com idade entre 15 e 18 anos\n");
			printf("(D) O número de atletas com idade>18, peso>65Kg e altura>1,65m\n");
			printf("(E) Maior e menor idade entre os atletas e o sexo do mesmo\n");
			printf("(S) Sair\n");
			printf("Sua escolha: ");
			fflush(stdin);
			scanf("%c",&opcao);
			
			printf("\n-----------------------------------------------------------------------\n");
			
			if(opcao!='S'){
				switch(opcao){
					case 'A':{
						printf("O numero de atletas masculino são: %d\n",numAM);
						break;
					}
					
					case 'B':{
						if(numAF>0){
							printf("A média de peso das atletas é: %f\n",somaPesoF/numAF);
						}else{
							printf("Não foi informada nenhuma atleta :(\n");
						}
						break;
					}
					
					case 'C':{
						printf("O numero de atletas com idade entre 15 e 18 anos são: %d\n",numJ);
						break;
					}
					
					case 'D':{
						printf("O numero de atletas com idade>18, peso>65Kg e altura>1,65m são: %d\n",numP);
						break;
					}
					
					case 'E':{
						if(sexoMaior=='F'){
							printf("O atleta mais velho é do sexo feminino e tem %d anos ",idadeMaior);
						}else{
							printf("O atleta mais velho é do sexo masculino e tem %d anos ",idadeMaior);
						}
						if(sexoMenor=='F'){
							printf("já o atleta mais novo é do sexo feminino e tem %d anos\n",idadeMenor);
						}else{
							printf("já o atleta mais novo é do sexo masculino e tem %d anos\n",idadeMenor);
						}
						
						break;
					}	
				}
			printf("Pressione uma tecla para continuar");
			system("pause");
		}
	
	}
	}	
	printf("Tchauzinho usuario!");
	return 0;
}
