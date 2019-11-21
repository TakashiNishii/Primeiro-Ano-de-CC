#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char elevadorUtilizado='A',turno;
	int elevadorA=0,elevadorB=0,elevadorC=0,elevadorD=0,turnoM=0,turnoT=0,turnoN=0;
	
	//Fazendo pesquisas dos elevadores e turnos:
	fflush(stdin);
	while(elevadorUtilizado =='A' || elevadorUtilizado=='B' || elevadorUtilizado=='C' || elevadorUtilizado=='D'){
		printf("Informe qual elevador você utiliza:(A),(B),(C) ou (D)?(Uma alternativa invalida sairá da entrada de dados)\n");
		printf("Resposta: ");
		fflush(stdin);
		scanf("%c",&elevadorUtilizado);
		
		fflush(stdin);
		if(elevadorUtilizado=='A')
			elevadorA++;
		if(elevadorUtilizado=='B')
			elevadorB++;
		if(elevadorUtilizado=='C')
			elevadorC++;
		if(elevadorUtilizado=='D')
			elevadorD++;
		fflush(stdin);		
		if(elevadorUtilizado =='A' || elevadorUtilizado=='B' || elevadorUtilizado=='C' || elevadorUtilizado=='D'){
			do{
				printf("Informe qual turno você utiliza o elevador:(M)Manhã (T)Tarde (N)Noite\n ");
				printf("Resposta: ");
				fflush(stdin);
				scanf("%c",&turno);
			}while(turno!='M' && turno!='T' && turno!='N');
			
			fflush(stdin);
			if(turno == 'M'){
				turnoM++;
			}else if(turno == 'T'){
				turnoT++;
			}else{
				turnoN++;
			}	
		}
		fflush(stdin);
		system("cls");
	}	
	
	//Mostrando resultados:
	//Elevador mais utilizado
	if(elevadorA>elevadorB){
		
		if(elevadorA>elevadorC){
		
			if(elevadorA>elevadorD){
				printf("O elevador mais utilizado é o A e ");		
			}else{
				printf("O elevador mais utilizado é o D e ");
			}
		}else if(elevadorC>elevadorD){
				printf("O elevador mais utilizado é o C e ");	
		}else{
			printf("O elevador mais utilizado é o D e ");
		}
	}else if(elevadorB>elevadorC && elevadorB>elevadorD){
		printf("O elevador mais utilizado é o B e ");
	}else if(elevadorC>elevadorD){
		printf("O elevador mais utilizado é o C e ");	
	}else{
		printf("O elevador mais utilizado é o D e ");
	}
	
	//Elevador menos utilizado
	if(elevadorA<elevadorB){
		
		if(elevadorA<elevadorC){
		
			if(elevadorA<elevadorD){
				printf("o elevador menos utilizado é o A\n");		
			}else{
				printf("o elevador menos utilizado é o D\n");
			}
		}else if(elevadorC<elevadorD){
				printf("o elevador menos utilizado é o C\n");	
		}else{
			printf("o elevador menos utilizado é o D\n");
		}
	}else if(elevadorB<elevadorC && elevadorB<elevadorD){
		printf("o elevador menos utilizado é o B\n");
	}else if(elevadorC<elevadorD){
		printf("o elevador menos utilizado é o C\n");	
	}else{
		printf("o elevador menos utilizado é o D\n");
	}
	
	//Turno em que os elevadores são mais utilizados
	if(turnoM>turnoT){
		if(turnoM>turnoN){
			printf("Já o turno em que os elevadores são mais utilizados é de manhã");		
		}else{
			printf("Já o turno em que os elevadores são mais utilizados é de noite");
		}
	}else if(turnoT>turnoN){
		printf("Já o turno em que os elevadores são mais utilizados é de tarde");
	}
	
	return 0;
}
