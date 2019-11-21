#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

#define max 9

typedef struct dadosFila{
	int f[max];
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



void inserir (sFila *fila, int dado, int *menor, int *maior){
	if (estaCheia(fila)){
		printf ("A fila já está cheia!\n");
	} else{
		if (estaVazia(fila)){
			*menor = dado;
			*maior = dado;
		}else{
			if(dado > *maior){
				*maior = dado;
			}
			if(dado < *menor){
				*menor = dado;
			}
		}
		fila->f[fila->fim] = dado;
		fila->fim++;
		fila->total++;
		if (fila->fim == max){
			fila->fim = 0;
		}
		printf ("Valor inserido com sucesso!\n");
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
	printf ("[A] - Inserir elemento na fila\n");
	printf ("[B] - Mostrar informações da fila\n");	
		
	printf ("[S] - Sair do programa\n");
	
	
	printf ("Sua escolha: ");
	fflush(stdin);
	scanf ("%c", &escolha);
	escolha = toupper(escolha);
	
	
	return escolha;
}

int main(){
	setlocale(LC_ALL, "Portuguese");	
	char op;
	int verifica, conteudo, menor, maior;
	double soma = 0, quant = 0;
	sFila lista;
	
	inicializa(&lista);	
	
	
	while (op != 'S'){
		system ("cls");
		op = menu();
		switch(op){
			case 'A': {
				printf ("Informe o caractere que deseja adicionar na fila: ");
				scanf ("%d", &conteudo);
				if (estaCheia(&lista) == 0){
					soma += conteudo;
					quant++;
				}
				inserir (&lista, conteudo, &menor, &maior);
				break;
			}
			
			case 'B': {
				
				printf ("Maior: %d\n", maior);
				printf ("Menor: %d\n", menor);
				printf ("Média: %f\n", soma/quant);
				
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
