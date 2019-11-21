#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

//Criando nossa struct para armazenar nossos dados:
typedef struct dadosLDSE{
	int constante;
	int elevado; 
	struct dadosLDSE *Prox;
}sLDSE;

// Função que inicializa listas: 
sLDSE *inicializa(sLDSE *L){
	L = NULL;
	return L;
}


// Função para mostrar o menu:
char menu(char op){
	system ("cls");
	printf ("----------Menu das ações----------\n");
	printf ("[A] - Inserir o primeiro sLDSEnomio\n");
	printf ("[B] - Inserir o segundo sLDSEnomio\n");
	printf ("[C] - Mostrar a soma\n");
	printf ("[S] - Sair\n");
	printf ("Sua escolha: ");
	fflush(stdin);
	scanf ("%c", &op);
	op = toupper(op);
	return op;
}

//Função para inserir nossos polinômios:
sLDSE *inserirdadosLDSE1 (sLDSE *L, int constante, int elevado){
	
	//criando variáveis para inserir, sendo aux recebe os valores para incrementar no dadosLDSEnômios, compara,
	//verifica se a outro x elevado igual no mesmo sLDSEnômio, eorganiza nosso polinômio, e ant para não perder a lista. 
	sLDSE *aux, *compara, *ant;
	int cont = 0;
	aux = (sLDSE *) malloc(sizeof(sLDSE));
	
	if (aux == NULL){
		exit (1);
	}
	
	//passando os valores para a variável aux:
	aux->constante = constante;
	aux->elevado = elevado;
	//compara e ant estão recebendo aux:
	compara = aux;
	ant = aux;
	
	 
	if (L == NULL){
		L = aux;
	}else{
		compara = L;
		ant = L;
		while (compara != NULL){
			if(aux->elevado > compara->elevado){
				if (cont == 0){
					L = aux;
					L->Prox = compara;
					compara = NULL;
				}else{
					ant->Prox = aux;
					aux->Prox = compara;
					compara = NULL;	
				}
			}
			if(aux->elevado == compara->elevado){
				if (cont == 0){
					aux->constante += compara->constante;
					L = aux;
					L->Prox = compara->Prox;
					compara = NULL;
				}else{
					aux->constante += compara->constante;
					ant->Prox = aux;
					aux->Prox = compara->Prox;
					compara = NULL;	
				}
			}
			else{
				cont++;
				ant = compara;
				compara = compara->Prox;
			}
		}
	}
	//Esse caso é quando o produto entra na ultima posição
	if (ant->Prox == NULL){
		ant->Prox = aux;
		aux->Prox = NULL;
	}
	
	return L;
}


void soma(sLDSE *p1, sLDSE *p2){
	sLDSE *aux;
	int cont = 0;
	while(p1 != NULL || p2 != NULL){
		if(p1->elevado == p2->elevado){
			if (cont == 0){
				printf("%d*X^%d",p1->constante + p2->constante, p1->elevado);
			}
			else{
				if(p1->elevado == 0){
					printf(" + %d",p1->constante + p2->constante);
				}else{
					if(p1->constante + p2->constante > 0){
						printf(" + %d*X^%d",p1->constante + p2->constante, p1->elevado);
					}
					else{
						printf("  %d*X^%d",p1->constante + p2->constante, p1->elevado);	
					}
				}
			}	
			p1 = p1->Prox;
			p2 = p2->Prox;	
		}
		if(p1->elevado > p2->elevado){
			if (cont == 0){
				printf("%d*X^%d",p1->constante, p1->elevado);
			}
			else{
				if(p1->elevado == 0){
					printf(" + %d",p1->constante + p2->constante);
				}else{
				
					if(p1->constante > 0){
						printf(" + %d*X^%d",p1->constante + p2->constante, p1->elevado);
					}
					else{
						printf("  %d*X^%d",p1->constante + p2->constante, p1->elevado);	
					}
				}
			}
			p1 = p1->Prox;
		}
		if(p1->elevado < p2->elevado){
			if (cont == 0){
				printf("%d*X^%d",p2->constante, p2->elevado);
			}
			else{
				if(p1->elevado == 0){
					printf(" + %d",p1->constante + p2->constante);
				}else{
					if(p2->constante > 0){
						printf(" + %d*X^%d",p1->constante + p2->constante, p1->elevado);
					}
					else{
					
						printf("  %d*X^%d",p1->constante + p2->constante, p1->elevado);	
					}
				}
			}
			p2 = p2->Prox;
		}
		cont++;
	}

} 

int main(){
	setlocale(LC_ALL, "Portuguese");
	sLDSE *p1, *p2;
	int verifica = 0, conteudo, elevado;
	char op;
	
	p1 = inicializa(p1);
	p2 = inicializa(p2);		
	
	while (op != 'S'){
		
		op = menu(op);	
		
		switch (op){
			case 'A':{
				while (verifica != 2) {
					printf ("[1] Inserir mais um elemento no polinomio\n");
					printf ("[2] Parar de inserir um elemento no polinomio\n");
					scanf ("%d", &verifica);
					if (verifica == 1){
						printf ("Informe a constante que acompanha o X: \n");
						scanf ("%d", &conteudo);
						printf ("Informe o expoente de X (Coloque 0 caso não tenha o X)\n");
						scanf ("%d", &elevado);
						p1 = inserirdadosLDSE1(p1, conteudo, elevado);		
					}
				}
				break;
			}
			case 'B':{
				while (verifica != 2) {
					printf ("[1] Inserir mais um elemento no polinomio\n");
					printf ("[2] Parar de inserir um elemento no polinomio\n");
					scanf ("%d", &verifica);
					if (verifica == 1){
						printf ("Informe a constante que acompanha o X: \n");
						scanf ("%d", &conteudo);
						printf ("Informe o expoente de X (Coloque 0 caso não tenha o X)\n");
						scanf ("%d", &elevado);
						p2 = inserirdadosLDSE1(p2, conteudo, elevado);		
					}
				}
				break;
			}
			
			case 'C':{
				soma(p1,p2);
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
		verifica = 0;
	}
		
	return 0;
}
