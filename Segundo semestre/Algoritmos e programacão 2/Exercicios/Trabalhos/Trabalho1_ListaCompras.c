/*               
				Trabalho I - Algoritmos e programa��o II
                Professora: Yorah Bosse
                Alunos: Gabriel Silverson Gomes e Ygor Takashi Nishi
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
#define max 20

//Criando da struct com um ponteiro para fazer uma lista din�mica simplesmente encadeada
typedef struct Compras{
	char produto[max];
	int quantidade;
	struct Compras *proxItem;
	
}compras;

//Fun��o menu s� printa para o usuario as op��es, l� qual a op��o desejada e retorna essa op��o para a main
int menu(int op){
	printf ("1 - Inserir itens\n");
	printf ("2 - Remover item\n");
	printf ("3 - Listar\n");
	printf ("4 - Sair\n");
	scanf ("%d", &op);
	return op;
}

//A fun��o de ajeitarString recebe como parametro a string digitada pelo usuario, seja para apagar ou adicionar produto o nome ser� ajustado seguindo as normas:
char *ajeitarString(char nome_prod[]){
	//Criamos a variavel que recebe somente a letra inicial:
	char inicial = nome_prod[0];
	int i = 0;
	
	//Ap�s isso colocaremos a string inteira em letra min�scula:
	while (nome_prod[i] != 13){
		nome_prod[i] = tolower(nome_prod[i]);
		i++;
	}
	//E colocamos somente a inicial em mai�scula:
	inicial = toupper(inicial);
	//A primeira letra da string receber� a inicial j� em mai�scula
	nome_prod[0] = inicial;
	
	return nome_prod;
}

// A fun��o pesq, serve para percorrer a nossa lista e verificar se h� itens repitidos na lista, ou seja, o parametro lista contem todas as palavras e o pesq � a palvra nova informada:
int pesq(compras *lista, compras *pesq){
	//A repeti��o vai enquanto passar por todas as palavras da lista, e vai comparando os produtos caso esteja realmente repetida compara a quantidade e edita se for maior.
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

//A fun��o inserir compra tem como parametro a lista completa, e as caracteristicas do novo item a ser adicionado
compras *inserir_compras (compras *Lcompras, int quantidade_prod, char nome_prod[]){
	
	compras *aux, *compara, *ant;
	int verifica, cont = 0;
	
	aux = (compras*) malloc (sizeof(compras));
	
	if(aux == NULL){
		exit(1);
	}

	
	//Antes de inserir o nome do produto na lista, el� ser� alterada para seguir o padr�o dos nomes do trabalho:
	nome_prod = ajeitarString(nome_prod);
	aux->quantidade = quantidade_prod;
	strcpy(aux->produto, nome_prod);
	
	//Entrada da fun��o no caso de teste!!
	verifica = pesq(Lcompras, aux);
	
	/*Caso a fun��o pesq v� que � produto repetido, ele edita conforme os padr�es e retorna valor 1, ent�o n�o precisava fazer nada
	 mas se for um produto novo, fizemos com que ele entre uma posi��o seguindo a ordem alfab�tica*/
	if (verifica == 1){
		
	}else{
		//Se a clista tiver vazia, ent�o o produto ocupa a primeira posi��o:
		if(Lcompras == NULL){
			Lcompras = aux;
		}else{
			compara = Lcompras;
			while (compara != NULL){
				/*Assim como na fun��o pesq fomos verificando a diferen�a no nome dos produtos at� onde o produto pode ser colocado na lista,
				 para isso foi usado o strcmp da biblioteca string.h */
				if (strcmp(aux->produto, compara->produto) < 0){
					if (cont == 0){
						Lcompras = aux;
						Lcompras->proxItem = compara;
						compara = NULL;
					}else{
						ant->proxItem = aux;
						aux->proxItem = compara;
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
	//Esse caso � quando o produto entra na ultima posi��o
	if (ant->proxItem == NULL){
		ant->proxItem = aux;
		aux->proxItem = NULL;
	}
	
	return Lcompras;
}

//Como no nosso inserir j� colocamos em ordem alfab�tica, n�s s� colocamos para listar seguindo a ordem normalmente.
void listar(compras *L){
	if (L == NULL){
		printf ("Lista Vazia!\n");
	} else {
		while (L != NULL){
			printf ("%s %d\n", L->produto, L->quantidade);
			L = L->proxItem;
		}
	}
}

//Na fun��o excluir pegamos a lista e o nome do produto que queremos excluir como parametros
compras *excluir (compras *Lex, char ex_produto[]){
	compras *aux, *ant, *compara;
	int cont = 0;
	
	aux = (compras*) malloc (sizeof(compras));
	
	if(aux == NULL){
		exit(1);
	}
	//Primeiro verificamos se a lista est� vazia:
	if (Lex == NULL){
		printf ("Lista Vazia!\n");
	}else{
		//Antes de excluir o nome do produto na lista, el� ser� alterada para seguir o padr�o dos nomes do trabalho:
		ex_produto = ajeitarString(ex_produto);
		strcpy(aux->produto, ex_produto);
	
		if(Lex != NULL){
			//Aqui fazemos compara��o do produto a ser excluido com os da lista, um por um at� ser encontrado
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
			//Mas se caso o produto n�o for encontrado ent�o ele chega aqui, que �o caso onde o proximo item j� n�o existe, ent�o percorremos a lista inteira
			//E n�o foi encontrado o produto que queria ser removido pelo usuario
			if (ant->proxItem == NULL){
				printf ("%s - este item nao existe!\n", aux->produto);
			}
		}	
	}
	
	return Lex;
}

int main(){
	//Fun��o para utilizar acentos no printf:
	setlocale(LC_ALL, "Portuguese");
	//Cria��o da lista utilizando um ponteiro do tipo struct Compras:
	compras *lista;
	
	// Criando variavel para receber a op��o do usuario (op), e para receber a quantidade dos produtos (quant):
	int op, quant;
	//criando um vetor para receber o nome do produto:
	char nomeProd[max];

	//Inicializa��o da lista
	lista = NULL;
	
	
	
	// Criando switch para para usarmos as fun��es:
	while(op != 4){
		op = menu(op);
		switch (op){
			
			case 1: {
				while (strcmp(nomeProd, "F") != 0 && strcmp(nomeProd, "f") != 0 ){
					fflush(stdin);
					scanf("%s", nomeProd);
					
					if (strcmp(nomeProd, "F") != 0 && strcmp(nomeProd, "f") != 0 ){
						scanf("%d",&quant);
				
						lista = inserir_compras(lista, quant, nomeProd);
					}
				}
				break;
			}
			case 2: {
				fflush(stdin);
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
