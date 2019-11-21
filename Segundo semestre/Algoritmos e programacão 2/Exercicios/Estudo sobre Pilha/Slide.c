#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Criação de uma pilha:
typedef struct Panasonic {
	char vlr;
	struct Panasonic *prox;
}sPilha;

//Função para inserir o topo da pilha, inicializando ela com o valor null:
sPilha *inicializa(sPilha *topo){
	topo = NULL;
	return topo;
}

/*Verifica se a pilha está vazia apenas verificando o topo da pilha, se ela for null então a pilha está vazia
 se for diferente de null então a pilha não está vazio*/
int estaVazia(sPilha *topo){
	return (topo == NULL?1:0);
}

//Insere valor somente no topo da pilha
sPilha *push(sPilha *topo, char dado){
	//Criaremos uma variavel tipo sPilha para a inserção de dado
	sPilha *aux;
	
	//Alocamos um espaço
	aux = (sPilha *) malloc(sizeof(sPilha));
	
	if (aux == NULL){
		exit(1);
	}
	
	aux->vlr = dado;
	aux->prox = topo;
	topo = aux;
	
	return topo;
}

//Para mostrar o topo é só mostrar o ultimo valor digitado, e a pilha sempre está apontando para ela:
void mostrarTopo(sPilha *topo){
	if (estaVazia(topo)){
		printf("A pilha está vazia!");
	}else{
		printf("TOPO = %c\n", topo->vlr);
	}
}

sPilha *pop(sPilha *topo){
	sPilha *aux;
	
	if (estaVazia(topo)){
		printf("A pilha está vazia!");
	}else{
		aux = topo;
		topo = topo->prox;
		free(aux);	
	}
	return topo;
}

char menu(char op){
	system ("cls");
	printf ("----------Menu das ações----------\n");
	printf ("[A] - Verifica se a pilha está vazia\n");
	printf ("[B] - Inserir elemento na pilha\n");
	printf ("[C] - Mostrar o topo da pilha\n");
	printf ("[D] - Excluir o ultimo elemento informado\n");
	printf ("[S] - Sair\n");
	printf ("Sua escolha: ");
	fflush(stdin);
	scanf ("%c", &op);
	op = toupper(op);
	return op;
}


int main() {
	setlocale (LC_ALL, "Portuguese");
	char op, conteudo;
	int verifica;
	//Inicialização da pilha
	sPilha *pilha;
	
	pilha = inicializa(pilha);

	while (op != 'S'){
		
		op = menu(op);	
		
		switch (op){
			case 'A':{
				verifica = estaVazia(pilha);
				if (verifica == 1){
					printf ("A pilha está vazia\n");
				}else{
					printf ("A pilha NÃO está vazia\n");
				}
				break;
			}
			
			case 'B':{
				fflush(stdin);
				scanf ("%c", &conteudo);
				pilha = push(pilha, conteudo);
				break;	
			}
			
			case 'C':{
				mostrarTopo(pilha);
				break;
			}
			
			case 'D':{
				pilha = pop(pilha);
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
