#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#include<locale.h>
#define max 9




typedef struct noFila{ //  Defini estrutura do n� que armazenara o dado e  apontara o proximo endere�o
char vlr[max];
struct noFila *prox;
}sNoFila;


typedef struct Fila{ //  Armazenar� inicio e final da fila
sNoFila *inicio, *fim;
}sFila;

void inicializa(sFila *fila){// inicializa a fila como vazia
fila->inicio = NULL;
fila->fim = NULL;
}

int estaVazia(sFila *fila){ // verifica se a lista est� vazia
return (fila->inicio == NULL?1:0);
}

void inserir_inicio(sFila *fila, char dado[]){ // insere os dados no inicio da fila
	sNoFila *aux; // auxiliar para manipula��o da fila
	
	aux = (sNoFila *) malloc (sizeof(sNoFila)); // Aloca espa�ao de memoria 
	
	if (aux == NULL) // verifica se a fila esta vazia
		exit (1);

	strcpy(aux->vlr,dado); // insere o dado na fila
	aux->prox = aux; // atribui endere�o para aux->prox

	
	if (fila->fim == NULL) fila->fim = aux; // verifica se a final da fila esta vazio e atribui endere�o caso esteja
	
	else fila->inicio->prox = aux;   // quando a condi��o anterior n�o � valida  aplica essa condi��o
	fila->inicio = aux;
}



void listar(sFila *fila){ // lista o primeiro e o ultimo dado da fila
	if (estaVazia(fila))
		printf("\nFila Vazia!\n");
	else{
	printf("\n");
	printf("Final : %s\n", fila->inicio->vlr); // exibe o valor contido no inicio da fila
	printf("In�cio : %s\n", fila->fim->vlr); // exibe o valor no final da fila
	}
	

} 



void excluir_final(sFila *fila){  //exclui dado contido no fim da fila
	sNoFila *aux;  // auxiliar para manipular a fila
	
	if (estaVazia(fila)){ // verifica se a fila est� vazia
		printf("\n\nFila VAZIA!\n\n");}
	else{
		
		if(fila->inicio == fila->fim){ // verifica se o ultimo dado da fila equivale ao primeiro, caso verdadeiro, indica que  existe apenas um dado na fila
					
			fila->inicio = NULL; // atribui NULL ao conteudo do inicio
			fila->fim = NULL; // atribui NULL ao conteudo do fim
		}
		else{
		aux = fila->fim; //atribui o valor que esta no inicio da fila para variavel auxiliar
		
		fila->fim = fila->fim->prox; // atribui o sucessor do fim da fila para o fim da fila
		free(aux); // libera o espa�o de mem�ria

	if (fila->fim == NULL) // verifica se o fim da fila esta vazio
	fila->inicio = NULL; // atribui valor para inicio da fila
}	

}
}


void excluir_inicio(sFila *fila){
	
	sNoFila * aux, *aux2; // auxiliares para manipula��o da fila
	
	if (estaVazia(fila)){ // verifica se a fila est� vazia
		printf("\n\nFila VAZIA!\n\n");
		printf("\n");
		
	}
	else{
	    
		if(fila->inicio == fila->fim){  // verifica se o ultimo dado da fila equivale ao primeiro, caso verdadeiro, indica que  existe apenas um dado na fila
					
			fila->inicio = NULL; // atribui NULL ao conteudo do inicio
			fila->fim = NULL; // atribui NULL ao conteudo do inicio
		} else{
		aux = fila->fim;//Variavel aux recebe o fim 
		//Estrutura que percorre a fila apartir do fim 
		while(aux != fila->inicio) {
			
			aux2 = aux;//Variavel aux2 recebe o fim 
			aux = aux->prox;//Variavel aux que recebe o proximo de fim 
		}
		fila->inicio = aux2;//Inicio passa ser o anterior do fim, pois o aux passar ser igual ao inicio.
		free(aux);//Excluir o fim que passar ser o inicio

	if (fila->fim == NULL) // verifica se o fim da fila esta vazio
	fila->inicio = NULL;// atribui valor para inicio da fila
	}
	
	
}
}

int main(){
	
	setlocale(LC_ALL, "portuguese"); // define idioma do teclado
	
	int op; //variavel de controle do switch
	char dado[max]; // variavel q recebera os dados do usuario
	sFila * fDin;  // variavel q recebera a fila ou a fila propriamente dito
		printf("Cria fila - ok\n");
	fDin = (sFila *) malloc (sizeof(sFila)); // aloca��o de memoria
		printf("Aloca espa�o de mem�ria - ok\n");

	if (fDin == NULL) // varifica se esta vazia
	exit (1);
	inicializa(fDin); // inicializa  fila
		printf("Inicia fila - ok\n");

	
	if(estaVazia(fDin)){ //verifica se fila esta vazia
		
		printf("Lista vazia!\n");
		printf("\n");
	}


printf("1 - Inserir no in�cio\n2 - Listar\n3 - Excluir In�cio\n4 - Excluir final\n5 - Sair\n");
fflush(stdin); // limpa o cache

do{	
	
scanf("%i",&op);// recebe o dado do usuario

	switch(op){
		
		case 1:{
			
				printf("digite F para encerrar a inser��o de dados\n");
				printf("\n");
				do{
					
					scanf("%s", dado);
					dado[0]=toupper(dado[0]);
					if(strcmp(dado,"F") != 0 )
					inserir_inicio(fDin, dado);
					
	
				}while(strcmp(dado,"F") != 0);
				
				printf("1 - Inserir no in�cio\n2 - Listar\n3 - Excluir in�cio\n4 - Excluir final\n5 - Sair\n");
			
			break;
		}
			
		case 2:{
			
			listar(fDin);
			printf("\n");
			printf("1 - Inserir no in�cio\n2 - Listar\n3 - Excluir in�cio\n4 - Excluir final\n5 - Sair\n");
			
			
			break;
		}
		
		case 3:{
			
			excluir_final(fDin);
			printf("1 - Inserir no in�cio\n2 - Listar\n3 - Excluir in�cio\n4 - Excluir final\n5 - Sair\n");
		
			break;
		}
		
		case 4:{
			excluir_inicio(fDin);
			
			printf("1 - Inserir no in�cio\n2 - Listar\n3 - Excluir in�cio\n4 - Excluir final\n5 - Sair\n");
			
			break;
		}
		
		case 5:{
			
			op = 0;
			break;
		}
	}

//listar(fDin);

}while(op != 0);

}
