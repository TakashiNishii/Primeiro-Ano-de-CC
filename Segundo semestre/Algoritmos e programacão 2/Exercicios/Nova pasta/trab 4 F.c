#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// estrutura para lista duplamente encadeada
typedef struct lista{
	char dado[20];
	struct lista *ant, *prox;
}lista;

// ira inserir elementos em qualquer lista enviada
lista *Inserir (lista *L, char dado[]){
	lista *aux, *auxins;
	
	aux = (lista *) malloc (sizeof(lista));
	if (aux == NULL)
		exit (1);

	strncpy(aux->dado, dado, 20);
	aux->prox = NULL;
	
	
	if (L == NULL){
		aux->ant = NULL;
		L = aux;
//		printf("3\n");
	}
	else{
		auxins = L;

		while (auxins->prox != NULL)
			auxins = auxins->prox;
		auxins->prox = aux;
		aux->ant = auxins;
		
	}
	return L;
		
}
// ira concatenar 2 listas enviadas
void *concatena(lista *L1, lista *L2){
	lista *aux;
	aux = L1;
	
	while (aux->prox != NULL)
		aux = aux->prox;
	aux->prox = L2;
	L2->ant = aux;
	
}
// ira imprimir qualquer lista enviada
void lista_imprime (lista *l){

	while (l != NULL ){
		printf("%s\n", l->dado);
		l = l->prox;
	}
}



 
 int main (){
	int i, a, retorno;
	char dado[20]; 	
 	lista *l1, *l2;
 	
 	l1 = NULL;
 	l2 = NULL;

	
	do{	
		printf("1 - Inserir lista 1 \n2 - Inserir lista 2\n3 - Listar\n4 - Sair\n");
		
		//faz com que apenas numeros sejam aceitos.
		while (scanf("%d", &a) != 1){
			static char temp[256];
			fgets(temp, sizeof (temp), stdin);	
		}	
		

		switch ( a ) {
		case 1 :
			//é usado o termo de parada o caracter f
			retorno=1;
			while(retorno != 0){
			
				scanf("%s", dado);
							
				retorno = strcmp (dado,"f");
				//se caracter f digitado a função não e chamada
				if ( retorno != 0)
				    l1 = Inserir(l1, dado);			
			}
  		break;
  	
  	
 		case 2 :
			//é usado o termo de parada o caracter f
			retorno=1;
			while(retorno != 0){
			
				scanf("%s", dado);
							
				retorno = strcmp (dado,"f");
				//se caracter f digitado a função não e chamada
				if ( retorno != 0)
				    l2 = Inserir(l2, dado);			
			}
 	   	break;
    
    
  		case 3 :
  			printf("\nLista 1:\n");
			lista_imprime(l1); //imprime lista l

			printf("\nLista 2:\n");
			lista_imprime(l2); //imprime lista l2

			printf("\nLista concatenada:\n");
			concatena(l1,l2); //chama a função concatenar e envia as duas lista
			lista_imprime(l1); //imprime a lista l ja concatenada
  	  	break;
	
	    case 4 :
  			// para a função.
			exit (1); 
  	  	break;

		}
	  		
	
	}while(a>0);
}
