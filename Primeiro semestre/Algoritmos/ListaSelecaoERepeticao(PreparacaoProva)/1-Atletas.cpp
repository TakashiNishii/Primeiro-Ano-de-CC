#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	//A=Atleta, M=Masculino, F= Feminino, J= Jovens entre 15 e 18 anos, P= "Profissionais"
	float peso,altura,somaPesoF=0;
	char sexo,sexoMaior,sexoMenor,opcao;
	int quant=1,idade,idadeMaior,idadeMenor,numAM=0,numAF=0,numJ=0,numP=0;
	
	printf("-----------------------Inscri��o de atletas-----------------------");
	//Inscri��o do primeiro atleta
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
		
		//inscri��o dos restantes	
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
			printf("Informa��es sobre seus atletas:\n");
			printf("(A) O n�mero de atletas do sexo masculino\n");
			printf("(B) A m�dia dos pesos das atletas de sexo feminino\n");
			printf("(C) O n�mero de atletas com idade entre 15 e 18 anos\n");
			printf("(D) O n�mero de atletas com idade>18, peso>65Kg e altura>1,65m\n");
			printf("(E) Maior e menor idade entre os atletas e o sexo do mesmo\n");
			printf("(S) Sair\n");
			printf("Sua escolha: ");
			fflush(stdin);
			scanf("%c",&opcao);
			
			printf("\n-----------------------------------------------------------------------\n");
			
			if(opcao!='S'){
				switch(opcao){
					case 'A':{
						printf("O numero de atletas masculino s�o: %d\n",numAM);
						break;
					}
					
					case 'B':{
						if(numAF>0){
							printf("A m�dia de peso das atletas �: %f\n",somaPesoF/numAF);
						}else{
							printf("N�o foi informada nenhuma atleta :(\n");
						}
						break;
					}
					
					case 'C':{
						printf("O numero de atletas com idade entre 15 e 18 anos s�o: %d\n",numJ);
						break;
					}
					
					case 'D':{
						printf("O numero de atletas com idade>18, peso>65Kg e altura>1,65m s�o: %d\n",numP);
						break;
					}
					
					case 'E':{
						if(sexoMaior=='F'){
							printf("O atleta mais velho � do sexo feminino e tem %d anos ",idadeMaior);
						}else{
							printf("O atleta mais velho � do sexo masculino e tem %d anos ",idadeMaior);
						}
						if(sexoMenor=='F'){
							printf("j� o atleta mais novo � do sexo feminino e tem %d anos\n",idadeMenor);
						}else{
							printf("j� o atleta mais novo � do sexo masculino e tem %d anos\n",idadeMenor);
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
