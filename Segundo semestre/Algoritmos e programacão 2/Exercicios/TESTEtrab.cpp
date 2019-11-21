/*               
				Trabalho I - Algoritmos e programação II
                Professora: Yorah Bosse
                Alunos: Gabriel Silverson Gomes e Ygor Takashi Nishi
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#define max 20

//Criando da struct com um ponteiro para fazer uma lista dinámica simplesmente encadeada
typedef struct Compras{
	char produto[max];
	int quantidade;
	struct Compras *proxItem;
	
}compras;

int menu(int op){
	printf ("1 - Inserir itens\n");
	printf ("2 - Remover item\n");
	printf ("3 - Listar\n");
	printf ("4 - Sair\n");
	scanf ("%d", &op);
	return op;
}

//A função de ajeitarString recebe como parametro a string digitada pelo usuario, seja para apagar ou adicionar produto o nome será ajustado seguindo as normas:
char *ajeitarString(char nome_prod[]){
	//Criamos a variavel que recebe somente a letra inicial:
	char inicial = nome_prod[0];
	int i = 0;
	
	//Após isso colocaremos a string inteira em letra minúscula:
	while (nome_prod[i] != 13){
		nome_prod[i] = tolower(nome_prod[i]);
		i++;
	}
	//E colocamos somente a inicial em maiúscula:
	inicial = toupper(inicial);
	//A primeira letra da string receberá a inicial já em maiúscula
	nome_prod[0] = inicial;
	
	return nome_prod;
}

// A função pesq, serve para percorrer a nossa lista e verificar se há itens repitidos na lista, ou seja, o parametro lista contem todas as palavras e o pesq é a palvra nova informada:
int pesq(compras *lista, compras *pesq){
	//A repetição vai enquanto passar por todas as palavras da lista, e vai comparando os produtos caso esteja realmente repetida compara a quantidade e edita se for maior.
	while(lista != NULL){
		if(strcmp(pesq->produto, lista->produto) == 0){
			if(pesq->quantidade > lista->quantidade){
				lista->quantidade = pesq->quantidade;
			}
			return 1;
		}else{
			lista = lista->proxItem;
		}
	}
	return 0;
}

//A função inserir compra tem como parametro a lista completa, e as caracteristicas do novo item a ser adicionado
compras *inserir_compras (compras *Lcompras, int quantidade_prod, char nome_prod[]){
	
	compras *aux, *compara, *ant;
	int verifica, cont = 0;
	
	aux = (compras*) malloc (sizeof(compras));
	
	if(aux == NULL){
		exit(1);
	}

	
	//Antes de inserir o nome do produto na lista, elá será alterada para seguir o padrão dos nomes do trabalho:
	nome_prod = ajeitarString(nome_prod);
	aux->quantidade = quantidade_prod;
	strcpy(aux->produto, nome_prod);
	
	//Entrada da função no caso de teste!!
	verifica = pesq(Lcompras, aux);
	
	if (verifica == 1){
		
	}else{
		if(Lcompras == NULL){
			Lcompras = aux;
		}else{
			compara = Lcompras;
			while (compara != NULL){
				if (strcmp(aux->produto, compara->produto) < 0){
					if (cont == 0){
						Lcompras = aux;
						Lcompras->proxItem = compara;
						compara = NULL;
					}else{
						ant->proxItem = aux;
						aux->proxItem = compara;
						compara->proxItem = NULL;
						compara = NULL;
					}
				}else{
					cont++;
					ant = compara;
					compara = compara->proxItem;
				}
			}
		}
	}
	if (ant->proxItem == NULL){
		ant->proxItem = aux;
		aux->proxItem = NULL;
	}
	
	return Lcompras;
}

void listar(compras *L){
	if (L == NULL){
		printf ("Lista vazia!\n");
	} else {
		while (L != NULL){
			printf ("%s %d\n", L->produto, L->quantidade);
			L = L->proxItem;
		}
	}
}

compras *excluir (compras *Lex, char ex_produto[]){
	compras *aux, *ant, *compara;
	int cont = 0;
	
	aux = (compras*) malloc (sizeof(compras));
	
	if(aux == NULL){
		exit(1);
	}

	
	//Antes de inserir o nome do produto na lista, elá será alterada para seguir o padrão dos nomes do trabalho:
	ex_produto = ajeitarString(ex_produto);
	strcpy(aux->produto, ex_produto);
	
	
	if(Lex == NULL){
		printf ("%s - este item nao existe!\n", aux->produto);
		return NULL;
	}else{
		compara = Lex;
		while (compara != NULL){
			if (strcmp(aux->produto, compara->produto) == 0){
				if (cont == 0){
					Lex = Lex->proxItem;
					printf ("%s - removido!\n", aux->produto);
					return Lex;
				}else{
					ant->proxItem = compara->proxItem;
					printf ("%s - removido!\n", aux->produto);
					return Lex;
				}
			}else{
				cont++;
				ant = compara;
				compara = compara->proxItem;
			}
		}
	}	
	if (ant->proxItem == NULL){
		printf ("%s - este item nao existe!\n", aux->produto);
	}
	
	return Lex;
}

int main(){
	//Função para utilizar acentos no printf:
	setlocale(LC_ALL, "Portuguese");
	//Criação da lista utilizando um ponteiro do tipo struct Compras:
	compras *lista;
	
	// Criando variavel para receber a opção do usuario (op), e para receber a quantidade dos produtos (quant):
	int op, quant;
	//criando um vetor para receber o nome do produto:
	char nomeProd[max];

	//Inicialização da lista
	lista = NULL;
	
	
	
	// Criando switch para para usarmos as funções:
	while(op != 4){
		op = menu(op);
		switch (op){
			
			case 1: {
				while (strcmp(nomeProd, "F") != 0 && strcmp(nomeProd, "f") != 0 ){
					scanf("%s", nomeProd);
					if (strcmp(nomeProd, "F") != 0 && strcmp(nomeProd, "f") != 0 ){
						scanf("%d",&quant);
						lista = inserir_compras(lista, quant, nomeProd);
					}
				}
				break;
			}
			case 2: {
				scanf("%s", nomeProd);
				lista = excluir(lista, nomeProd);
				break;
			}
			case 3: {
				listar(lista);
				break;
			}
			case 4: {
				exit(1);
				break;
			}
		}
		op = 0;
		strcpy(nomeProd, " ");
	}
		
	return 0;
}
