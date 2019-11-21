#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	//F = Feminino, M = Masculino, V = "Velho", J = "Jovem", E = Com experi�ncia, N = Sem experi�ncia 
	int cod, idade,quantM=0,quantF=0,somaIdadeME=0,quantMV=0,quantFJE=0,quantME=0,idadeFJE=0,idadeMVN=0;
	char sexo,exp;
	
	//Cadastro dos candidatos
	do{
		printf("\nInforme o c�digo do candidato: (Informe 0 para sair do programa) ");
		scanf("%d",&cod);
		
		//Se c�digo diferente de 0 pegue o restos das informa��es sen�o acaba os cadastros
		if(cod!=0){
			printf("\nInforme a idade do(a) candidato(a): ");
			scanf("%d",&idade);
			do{
				printf("\nInforme o sexo do(a) candidato(a): (M) Masculino ou (F) Feminino\n");
				printf("Sua resposta: ");
				fflush(stdin);
				scanf("%c",&sexo);
			}while(sexo!='M' && sexo!='F');
			
			do{
				printf("\nInforme se o candidato possui experi�ncia: (S) Sim ou (N) N�o\n");
				printf("Sua resposta: ");
				fflush(stdin);	
				scanf("%c",&exp);	
			}while(exp!='S' && exp!='N');
			
			//Fazer calculos com os dados informados dos candidatos
			if(sexo=='F'){
				quantF++;
				if(idade<35 && exp=='S'){
					quantFJE++;
				}
				if(quantFJE==1){
					idadeFJE = idade;
				}else if(idade < idadeFJE && exp=='S'){
					idadeFJE = idade;
				}
			}else{
				quantM++;
				if(exp=='S'){
					somaIdadeME += idade;
					quantME++;
				}
				if(idade>45){
					quantMV++;
				}
				if(idadeMVN==0 && exp=='N'){
					idadeMVN = idade;
				}else if(idade > idadeMVN && exp=='N'){
					idadeMVN = idade;
				}
			}
		}
		system("cls");
	}while(cod!=0);
	if(quantF == 0 && quantM == 0){
		printf("Volte sempre!");
	}else{
		printf("Foram cadastradas %d candidatas(Mulheres) ",quantF);
		printf("\nForam cadastrados %d candidatos(Homens)",quantM);
		if(quantME!=0){
			printf("\nA m�dia dos candidatos com experi�ncia � %.2f",double(somaIdadeME/quantME));
		}		
		printf("\nTotal de homens cadastros com mais de 45 anos: %d",quantMV);
		printf("\nTotal de mulheres cadastradas com menos de 35 anos e com experi�ncia: %d",quantFJE);
		printf("\nA mulher mais jovem e com experi�ncia cadastrada tem %d anos",idadeFJE);
		printf("\nO homem mais velho e sem experi�ncia cadastrado tem %d anos",idadeMVN);
		printf("\nVolte sempre!");
	}
	return 0;
}
