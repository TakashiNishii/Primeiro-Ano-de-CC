#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

typedef struct noFila{
	char vlr;
	struct noFila *prox;
}sNoFila;

typedef struct Fila{
	sNoFila *inicio, *fim;
}sFila;

void inicializa(sFila *fila){
	fila->inicio = NULL;
	fila->fim = NULL;
}

int estaVazia(sFila *fila){
	return fila->inicio==NULL?1:0;
}

void enqueue(sFila *fila, char dado){ 
	sNoFila *aux;
	aux = (sNoFila *) malloc (sizeof(sNoFila));
	if (aux == NULL){
		exit (1);
	}
	aux->vlr = dado;
	aux->prox = NULL;
	if (fila->inicio == NULL){
		fila->inicio = aux;
	}else{
		fila->fim->prox = aux;
	}
	fila->fim = aux;
}

void listar(sFila *fila){
	
	if (estaVazia(fila)){
		printf("\nFila Vazia!");
	}else{ 
		printf("inicio : %c\n", fila->inicio->vlr);
		printf("final  : %c\n  ", fila->fim->vlr);
	} 
	printf("\n\n");
}

void excluir(sFila *fila){ 
	fila->inicio++;
	if (fila->inicio == max)
		fila->inicio = 0;
	fila->total--;
	printf("Dado excluido");
}

char menu(){
	char escolha;
	printf ("Escolha a operação desejada: \n");
	printf ("[A] - Verifica se está vazia\n");
	printf ("[B] - Inserir elemento na fila\n");
	printf ("[C] - Mostrar elementos da extremidades da fila\n");	
	printf ("[S] - Sair do programa\n");
	
	
	printf ("Sua escolha: ");
	fflush(stdin);
	scanf ("%c", &escolha);
	escolha = toupper(escolha);
	
	
	return escolha;
}


int main () {
	setlocale (LC_ALL, "Portuguese");
	char op, conteudo;
	int verifica;
	sFila *fDin; 
	fDin = (sFila *) malloc (sizeof(sFila)); 
	if (fDin == NULL){
		exit (1); 
	} 
	inicializa(fDin);
	
	while (op != 'S'){
		system("cls");
		op = menu();
		
		switch (op){
			
			case 'A':{
				verifica = estaVazia(fDin);
				if(verifica == 1){
					printf ("A fila está vazia!\n");
				}else{
					printf ("A fila não está vazia!\n");
				}
				
				
				break;
			}

			case 'B':{
				printf ("Adicione a letra a ser colocada na lista: ");
				fflush(stdin);
				scanf ("%c", &conteudo);
				enqueue(fDin, conteudo);
				break;
			}

			case 'C':{
				listar(fDin);
				break;
			}
			case 'S':{
				printf ("Fim do programa! Volte sempre\n");
				break;
			}
		}
		
		system("pause");		
	}
	return 0;
}
