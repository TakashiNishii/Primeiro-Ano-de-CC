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
		printf("Informe qual elevador voc� utiliza:(A),(B),(C) ou (D)?(Uma alternativa invalida sair� da entrada de dados)\n");
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
				printf("Informe qual turno voc� utiliza o elevador:(M)Manh� (T)Tarde (N)Noite\n ");
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
				printf("O elevador mais utilizado � o A e ");		
			}else{
				printf("O elevador mais utilizado � o D e ");
			}
		}else if(elevadorC>elevadorD){
				printf("O elevador mais utilizado � o C e ");	
		}else{
			printf("O elevador mais utilizado � o D e ");
		}
	}else if(elevadorB>elevadorC && elevadorB>elevadorD){
		printf("O elevador mais utilizado � o B e ");
	}else if(elevadorC>elevadorD){
		printf("O elevador mais utilizado � o C e ");	
	}else{
		printf("O elevador mais utilizado � o D e ");
	}
	
	//Elevador menos utilizado
	if(elevadorA<elevadorB){
		
		if(elevadorA<elevadorC){
		
			if(elevadorA<elevadorD){
				printf("o elevador menos utilizado � o A\n");		
			}else{
				printf("o elevador menos utilizado � o D\n");
			}
		}else if(elevadorC<elevadorD){
				printf("o elevador menos utilizado � o C\n");	
		}else{
			printf("o elevador menos utilizado � o D\n");
		}
	}else if(elevadorB<elevadorC && elevadorB<elevadorD){
		printf("o elevador menos utilizado � o B\n");
	}else if(elevadorC<elevadorD){
		printf("o elevador menos utilizado � o C\n");	
	}else{
		printf("o elevador menos utilizado � o D\n");
	}
	
	//Turno em que os elevadores s�o mais utilizados
	if(turnoM>turnoT){
		if(turnoM>turnoN){
			printf("J� o turno em que os elevadores s�o mais utilizados � de manh�");		
		}else{
			printf("J� o turno em que os elevadores s�o mais utilizados � de noite");
		}
	}else if(turnoT>turnoN){
		printf("J� o turno em que os elevadores s�o mais utilizados � de tarde");
	}
	
	return 0;
}
