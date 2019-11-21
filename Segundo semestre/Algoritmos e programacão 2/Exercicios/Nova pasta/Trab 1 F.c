#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define max 9
typedef struct lista{
	char vlr[max];
	struct lista *prox;
}mli;

int estavazia(mli *l){
	return(l == NULL?1:0);
}

void listar(mli *L){
	if(estavazia(L))
		printf("Lista Vazia!\n");
	else{
		while (L != NULL){
			printf("%s \n",L->vlr);
			L=L->prox;
		}
	}
}

mli *ins(mli *L, char dado[]){
	mli *aux, *auxIns;
	
	aux = (mli *) malloc (sizeof(mli));
	
	if (aux == NULL)
		exit (1);
	strcpy(aux->vlr, dado);
	aux->prox = NULL;
	if (estavazia(L))
		L = aux;
	else{
		auxIns = L;
		while (auxIns->prox != NULL)
			auxIns = auxIns->prox;
		auxIns->prox = aux;
	}
return L;
}

mli inverte(mli *l){//funcao para inverte os valores
	mli *aux, *ant;
	
	aux=l;
	l=l->prox;
	aux->prox=NULL;
	
	while (l != NULL){
		ant=aux;
		aux =l;
		l=l->prox;
		aux->prox=ant;
	}
	l= aux;
	listar (l);//chamando a funcao para printa os valores invertidos
}

int main (){
	mli *lista;
	lista = NULL;
	char dado[20];
	int i=0;
	
	printf ("Digite 'z' para parar.\n");
	scanf("%s", dado);
	while (strcmp(dado,"Z")  != 0 && strcmp(dado,"z")  != 0){
		lista=ins (lista, dado);
		scanf("%s", dado);
	}
	if (estavazia(lista)){
		printf ("A lista ta vazia.\n");
	}
	else 
		inverte(lista);

}
