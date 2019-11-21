#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

#define max 5

typedef struct dadosFila{
	char f[max];
	int inicio, fim, total;
	
}sFila;


void inicializa(sFila *fila){
	fila->inicio = 0;
	fila->fim = 0;
	fila->total = 0;
}

int estaVazia(sFila *fila){
	return (fila->total==0?1:0);
}

int estaCheia(sFila *fila){
	return (fila->total==max?1:0);
}

void inserir (sFila *fila, char dado){
	if (estaCheia(fila)){
		printf ("A fila já está cheia!\n");
	} else{
		fila->f[fila->fim] = toupper(dado);
		fila->fim++;
		fila->total++;
		if (fila->fim == max){
			fila->fim = 0;
		}
		printf ("Produto inserido com sucesso!\n");
	}
}

void listar (sFila *fila){
	if (estaVazia(fila)){
		printf ("A fila está vazia!\n");
	}else{
		printf ("Inicio: %c\n", fila->f[fila->inicio]);
		if (fila->fim == fila->inicio) {
			printf ("Fim: %c\n", fila->f[max - 1]);
		}else{
			printf ("Fim: %c\n", fila->f[fila->fim-1]);
		}
		
	}
	
}

char menu(){
	char escolha;
	printf ("Escolha a operação desejada: \n");
	printf ("[A] - Verifica se está vazia\n");
	printf ("[B] - Verifica se está cheia\n");
	printf ("[C] - Inserir elemento na fila\n");
	printf ("[D] - Listar elementos da fila\n");	
		
	printf ("[S] - Sair do programa\n");
	
	
	printf ("Sua escolha: ");
	fflush(stdin);
	scanf ("%c", &escolha);
	escolha = toupper(escolha);
	
	
	return escolha;
}

int main(){
	setlocale(LC_ALL, "Portuguese");	
	char op, conteudo;
	int verifica;
	sFila lista;
	
	inicializa(&lista);	
	
	
	while (op != 'S'){
		system ("cls");
		op = menu();
		switch(op){
			case 'A': {
				verifica = estaVazia(&lista);
				
				if (verifica == 1){
					printf ("A fila está vazia! \n");
				}else{
					printf ("A fila não está vazia! \n");
				}
			
				break;
			}
			
			case 'B': {
				verifica = estaCheia(&lista);
				
				if (verifica == 1){
					printf ("A fila está cheia! \n");
				}else{
					printf ("A fila não está cheia! \n");
				}
				break;
			}
			
			case 'C': {
				printf ("Informe o caractere que deseja adicionar na fila: ");
				fflush (stdin);
				scanf ("%c", &conteudo);
				
				inserir (&lista, conteudo);
				break;
			}
			
			case 'D': {
				listar(&lista);
				break;
			}
			
			case 'S': {
				printf ("Fim do programa, volte sempre!\n");	
				break;
			}
			
			default:{
				printf ("Escolha inválida!\n");
				break;
			}
			
		}
		system ("pause");
	}
	return 0;
}
