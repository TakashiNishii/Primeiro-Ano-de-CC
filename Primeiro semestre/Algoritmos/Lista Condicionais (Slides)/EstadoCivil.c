#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char Nome,estCivil;
		
	printf("Informe o seu nome: ");
	scanf("%s", &Nome);	
	printf("\nQual o seu estado civil?\n");
	printf("C - Casado\n");
	printf("S - Solteiro\n");
	printf("V - Viúvo\n");
	printf("D - Divorciado\n");
	printf("Q - Desquitado");
	printf("\nInforme com a letra correspondente: ");
	scanf("%s", &estCivil);
	
	switch(estCivil){
	
		case 'C':
		case 'c': {
			printf("\nO(a) %s está em seu estado civil como: Casado(a)",Nome);
			break;
		}
		
		case 'S':
		case 's':{
			printf("\nO(a) %c está em seu estado civil como: Solteiro(a)", Nome);
			break;
		}
		
		case 'V':
		case 'v':{
			printf("\nO(a) %c está em seu estado civil como: Viúvo(a)", Nome);
			break;
		}
		
		case 'D':
		case 'd':{
			printf("\nO(a) %c está em seu estado civil como: Divorciado(a)", Nome);
			break;
		}
		
		case 'Q':
		case 'q':{
			printf("\nO(a) %c está em seu estado civil como: Desquitado(a)", Nome);
			break;
		}
		
		default: {
			printf("Opção Invalida");
			break;
		}
		
	}

//Não deu certo:	
/*	if(estCivil=='C' ||estCivil=='c'){
		printf("\nO(a) %s em seu estado civil como: Casado(a)",nome);
	}else{
		if(estCivil== 'S' ||estCivil=='s'){
			printf("\nO(a) %s em seu estado civil como: Solteiro(a)",nome);
		}else{
			if(estCivil=='V' ||estCivil=='v'){
				printf("\nO(a) %s em seu estado civil como: Viúvo(a)",nome);
			}else{
				if(estCivil=='D' ||estCivil=='d'){
					printf("\nO(a) %s em seu estado civil como: Divorciado(a)",nome);
				}else{
					if(estCivil=='Q' ||estCivil=='q'){
						printf("\nO(a) %s em seu estado civil como: Desquitado(a)",nome);
					}else{
						printf("Opção invalida");
					}
				}
			}		
		}
	}
*/	
		
	
	return 0;
}
