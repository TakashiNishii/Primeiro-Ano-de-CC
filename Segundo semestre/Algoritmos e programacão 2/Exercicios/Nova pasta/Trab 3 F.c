#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 9

typedef struct dadosLDSE 
{
	char vlr[max];
	struct dadosLDSE* prox;
}sLDSE;

sLDSE* lista_insere (sLDSE* l, char i[]) 
{
	sLDSE* novo = (sLDSE*) malloc(sizeof(sLDSE));

	strcpy(novo->vlr, i);
	novo->prox = l;

	return novo;
}

void lista_imprime (sLDSE* l) 
{
	/* nao precisa de variavel auxiliar para percorrer a lista */
	for ( ;l != NULL; l = l->prox)
		printf("%s\n", l->vlr);
}


/* concatena modificando l1 */
void concatena (sLDSE* l1, sLDSE* l2)
{
	sLDSE* p; /* variável auxiliar para percorrer a lista */

	if (l1 != NULL)
	{
		do
		{
			p = l1;
			l1 = l1->prox;
		}while(l1 != NULL);

		p->prox = l2;
	}
}

int main()
{
	char letra[max];
	int resp;
		
	//criando lista l
	sLDSE *l;
	l = NULL;
	//criando lista l2
	sLDSE *l2;
	l2 = NULL;
	
	do{ 
		printf("(1) Inserir no inicio da Lista 1:\n");
		printf("(2) Inserir no inicio da Lista 2:\n");
		printf("(3) Visualizar a Lista 1:\n");
		printf("(4) Sair\n\n");
		printf("Digite sua opcao: ");
		scanf("%d", &resp);
		fflush(stdin);
		switch(resp){
			case 1: {
					printf("digite a letra a ser inserida: ");
					scanf("%s", letra);
					l = lista_insere(l, letra);
					break;
			}
			case 2: {
					printf("digite a letra a ser inserida: ");
					scanf("%s", letra);
					l2 = lista_insere(l2, letra);
					break;
			}
			case 3: {
					system("cls");
					printf("\nLista 1:\n");
					lista_imprime(l); //imprime lista l
					printf("\n\n");
					printf("\nLista 2:\n");
					lista_imprime(l2); //imprime lista l2
					printf("\n");
					printf("\nLista concatenada:\n");
					concatena(l,l2); //chama a função concatenar e envia as duas lista
					lista_imprime(l); //imprime a lista l ja concatenada
					break;
			}
		}
		printf("\n\n");
}while(resp != 4);
	

	
	

	
	
	
	getchar();
	return 0;
}
