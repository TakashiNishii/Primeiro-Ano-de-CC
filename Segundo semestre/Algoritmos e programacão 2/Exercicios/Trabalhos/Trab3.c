#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#define max 9

typedef struct dadosLDSE
{
	int vlr;
	struct dadosLDSE* prox;
}sLDSE;

sLDSE* lista_insere (sLDSE* l, int i)
{
	sLDSE *aux, *auxIns;

	aux = (sLDSE *) malloc(sizeof(sLDSE));

	if (aux == NULL){
		exit (1);
	}

	aux->vlr = i;
	aux->prox = NULL;
	if(l == NULL){
		l = aux;
	}else{
		auxIns = l;
		while (auxIns->prox != NULL){
			auxIns = auxIns->prox;
		}
		auxIns->prox = aux;
	}
	return l;
}

void lista_imprime (sLDSE* l)
{
	/* nao precisa de variavel auxiliar para percorrer a lista */
	for ( ;l != NULL; l = l->prox)
		printf("%d\n", l->vlr);
}


/* concatena modificando lista */
void concatena (sLDSE* l1, sLDSE* l2)
{
    int p = 0;
    while (l1 != NULL || l2 != NULL){
        if (p%2 == 0 && l1 != NULL){
            printf ("%d \n", l1->vlr);
            l1 = l1->prox;
        }else{
            if (l1 == NULL && l2 != NULL){
                printf ("%d \n", l2->vlr);
                l2 = l2->prox;
            }
        }

        if (p%2 != 0 && l2 != NULL){
            printf ("%d \n", l2->vlr);
            l2 = l2->prox;
        }else{
            if (l2 == NULL && l1 != NULL){
                printf ("%d \n", l1->vlr);
                l1 = l1->prox;
            }
        }
        p++;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
	int vlr, resp;
	char cont;

	//criando lista l
	sLDSE *l;
	l = NULL;
	//criando lista l2
	sLDSE *l2;
	l2 = NULL;

	do{
		system("cls");
		printf("(1) Inserir no inicio da Lista 1:\n");
		printf("(2) Inserir no inicio da Lista 2:\n");
		printf("(3) Visualizar a Lista concatenada:\n");
		printf("(4) Sair\n\n");
		printf("Digite sua opcao: ");
		scanf("%d", &resp);
		switch(resp){
			case 1: {
					while (cont != 'N'){
						system("cls");
						printf("Digite o valor que ser inserido: ");
						scanf("%d", &vlr);
						l = lista_insere(l, vlr);
						do{
							system("cls");
							printf("Deseja continuar adicionando elementos na lista 1?\n");
							printf("Digite (S) para Sim e (N) para nao\n");
							printf("Sua resposta: ");
							fflush(stdin);
							cont = toupper(getchar());
						}while(cont != 'N' && cont != 'S');
					}
					cont = 'A';
					break;
			}
			case 2: {
				while (cont != 'N'){
					system("cls");
					printf("Digite o valor que será inserido: ");
					scanf("%d", &vlr);
					l2 = lista_insere(l2, vlr);
					do{
						system("cls");
						printf("Deseja continuar adicionando elementos na lista 1?\n");
						printf("Digite (S) para Sim e (N) para nao\n");
						printf("Sua resposta: ");
						fflush(stdin);
						cont = toupper(getchar());
					}while(cont != 'N' && cont != 'S');
				}
				cont = 'A';
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
					concatena(l,l2); //chama a função concatenar que envia as duas lista e lá faz printa as duas listas concatenadas
                    system("pause");
					break;
			}
		}
		printf("\n\n");
	}while(resp != 4);
	return 0;
}
