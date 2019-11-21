#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
typedef struct Celula{
	int Valor;
	struct Celula *Prox;
}celula;

celula *inicializa(celula *L){
	L = NULL;
	return L;
}



char menu(char op){
	system ("cls");
	printf ("----------Menu das ações----------\n");
	printf ("[A] - Verifica se está vazia\n");
	printf ("[B] - Inserir elemento no inicio da lista\n");
	printf ("[C] - Inserir elemento no fim da lista\n");
	printf ("[D] - Mostrar elementos da lista\n");
	printf ("[E] - Excluir um elemento da lista\n");
	printf ("[F] - Inverter a lista\n");
	printf ("[S] - Sair\n");
	printf ("Sua escolha: ");
	fflush(stdin);
	scanf ("%c", &op);
	op = toupper(op);
	return op;
}

int estaVazia(celula *L){
	return (L == NULL?1:0);
}

celula *inserirInicio (celula *L, int valor){
	celula *aux;
	
	aux = (celula *) malloc(sizeof(celula));
	
	if (aux == NULL){
		exit (1);
	}
	
	
	aux -> Valor = valor;
	aux -> Prox = L;
	L = aux;
	
	
	return L;
}

celula *inserirFinal (celula *L, int valor){
	celula *aux, *auxIns;
	
	aux = (celula *) malloc(sizeof(celula));
	
	if (aux == NULL){
		exit (1);
	}
	
	aux->Valor = valor;
	aux->Prox = NULL;
	if(estaVazia(L)){
		L = aux;
	}else{
		auxIns = L;
		while (auxIns->Prox != NULL){
			auxIns = auxIns->Prox;
		}
		auxIns->Prox = aux;
	}
	return L;
}

void listar(celula *L){
	if (estaVazia(L)){
		printf ("Lista vazia!! \n");
	} else {
		while (L != NULL){
			printf ("%d ", L->Valor);
			L = L->Prox;
		}
	}	
	printf ("\n");
}

celula *pesq (celula *L, int dadoPesq, celula **ant){
	*ant = NULL;
	while (L != NULL && L->Valor != dadoPesq){
		*ant = L;
		L = L->Prox;
	}
	return L;
}

celula *excluir (celula *L, int dadoExc){
	celula *aux, *ant;
	if (estaVazia(L)){
		printf ("Lista VAZIA! \n");
	} else {
		aux = pesq (L, dadoExc, &ant);
		if (aux == NULL){
			printf ("Dado inexistente na lista! \n");
		} else {
			if (aux == L) {
				L = L->Prox;
			} else {
				ant->Prox = aux->Prox;
			}
			free(aux);
		}
	}
	return L;
}


celula *inverte (celula *L){
	celula *aux, *ant;

	aux = L;
	L = L->Prox;
	aux->Prox = NULL;
	while(L != NULL){
		ant = aux;
		aux = L;
		L = L->Prox;
		aux->Prox = ant;
	}
	L = aux;

	return L;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	celula *lista;
	int verifica, conteudo;
	char op;
	
	lista = inicializa(lista);	
	
	while (op != 'S'){
		
		op = menu(op);	
		
		switch (op){
			case 'A':{
				verifica = estaVazia(lista);
				if (verifica == 1){
					printf ("A lista está vazia\n");
				}else{
					printf ("A lista NÃO está vazia\n");
				}
				break;
			}
			case 'B':{
				printf ("Digite o valor a ser inserido: ");
				scanf ("%d", &conteudo);
				lista = inserirInicio(lista, conteudo);
				break;
			}
			case 'C':{
				printf ("Digite o valor a ser inserido: ");
				scanf ("%d", &conteudo);
				lista = inserirFinal(lista, conteudo);
				break;
			}
			case 'D':{
				listar (lista);
				break;
			}
			case 'E':{
				printf ("Digite o valor a ser excluido: ");
				scanf ("%d", &conteudo);
				lista = excluir(lista, conteudo);
				break;
			}
			case 'F':{
				printf ("Lista invertida!\n");
				lista = inverte(lista);
				break;
			}
			case 'S':{
				printf ("Fim do programa, volte sempre! \n");
				break;
			}
			default:{
				printf ("Opção invalida!\n");
				break;
			}
		}
		system("pause");
	}
		
	return 0;
}
