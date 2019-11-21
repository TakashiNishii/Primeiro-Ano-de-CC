#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estrutura necessaria para criação do nó
typedef struct dadosLDSE {
	
	int bit;//variavel que armazena o bit
	struct dadosLDSE *prox;//ponteiro que armazena o endereço do proximo nó
	
}sLDSE;

//Estrutura que inicializa o topo
sLDSE *inicializa(sLDSE *topo) {
	
	topo = NULL;
	return topo;
	
}

//Estrutura que recebe o topo da pilha e verifica se a pilha está vazia 
int estaVazia(sLDSE *topo) {
	
	return (topo == NULL?1:0);//retorna 1, caso esteja vazia, 0 caso contrario 
	
}

//Estrutura que inseri o bit na pilha
sLDSE *push(sLDSE *topo, int dado) {
	
	sLDSE *aux;
	aux = (sLDSE *) malloc (sizeof(sLDSE));
	if (aux == NULL) {
		exit (1);
	}
	
	aux->bit = dado;
	aux->prox = topo;
	topo = aux;
	
	return topo;
}

//Estrutura que mostra a pilha, ou seja, o resultado da conversão
void mostrar_topo(sLDSE *topo, int dado){

	if (estaVazia(topo)) {
		
		printf("\nPilha Vazia!\n");
		
	} else {
		
		printf("Sistema Decimal = %d\nSistema Binario = ", dado);
		
		while(topo != NULL) {
			
			printf("%d", topo->bit);
			topo = topo->prox;

		}
	}
}

//Estrutura que ler os dados inseridos pelo o usuario e executa suas devidas funções
void menu(sLDSE *p){
	
	int numberDecimal, restoBit, result, aux, i=0;
	double resultado;
	
	do {
		
		scanf("%d", &numberDecimal);
		
	}while(numberDecimal < 0);
	
	aux = numberDecimal;
	
	do {
		
		resultado = numberDecimal / 2;
		result = (int)resultado;
		restoBit = numberDecimal % 2;
		
		if(numberDecimal != 0 && numberDecimal != 1) {
			
			if(result >= 2) {
				
				p = push(p, restoBit);
				numberDecimal = result;
				i++;
				
			} else {
				
				p = push(p, restoBit);
				p = push(p, result);
				i=0;
			}
			
		} else {
			
			p = push(p, restoBit);
			
		}
			
	} while(i!=0);
	
	mostrar_topo(p, aux);
}

int main() {
	
	sLDSE *pilha;
	pilha = (sLDSE*) malloc (sizeof(sLDSE));
	pilha = inicializa(pilha); 
	
	menu(pilha);
	
	free(pilha);
	
	return 0;
}
