#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
typedef struct no{//struct para a lista
    int quantidade; 
    struct no *prox;
    struct no *ant;
}no;

int vazia(no *lista){//vendo se a lista está vazia
    if(lista==NULL){//lista vazia retorna 1 caso contrario zero
        return 1;
    }
    return 0;
}
no* colocarnul( no*lista){ //inicializando a lista
    lista=NULL; //lista recebendo NULL
    return lista;
}

no * inserir(no* lista,int dado){//função da lista (está no slide)
    no* aux,*auxins;
    aux=(no*)malloc(sizeof(no));
    if(aux==NULL){
        exit (1);
    }
    aux->quantidade=dado;
    aux->prox=NULL;
    if(vazia(lista)){
        aux->ant=NULL;
        lista=aux;
    }else{
        auxins=lista;
        while(auxins->prox!=NULL){
            auxins=auxins->prox;
        }
        auxins->prox=aux;
        aux->ant=auxins;
    }
    return lista;
}

int comparar(no* lista,int* maior,int* menor){//função para comparar o maior e menor numero
     no* per=lista;//variavel aux da lista
     int cont=0,guardar=0,result;
     *maior=per->quantidade;//guarda o 1 primeiro numero digitado
     *menor=per->quantidade;//guarda o 1 primeiro numero digitado
     while(per!=NULL){//rodar a lista até a variavel chegar a NULL
        if(per->quantidade>=*maior && per!=NULL){//caso a quantidade da lista seja maior sera troca o maior numero
            *maior=per->quantidade;
        }else{
            if(*menor>per->quantidade && per!=NULL){//caso o numero da lista seja menor sera trocado o menor numero
                *menor=per->quantidade;
            }
        }
            guardar=per->quantidade+guardar;//somando as quantidades
            cont++;//contando quantidade de elemento nas lista
            per=per->prox;//indo para o proximo NO da lista
     }
    return (guardar/cont);// voltado a soma aritmetica para main
}

testar(char p)//função para testar se o usuario digitou S ou N
{
	if(p=='S' || p=='N')//se estiver vai retornar 1
	{
		return 1;
	}
	else//caso não retorna 0 e pede para o usuario digitar novamente s ou n//
	{
		return 0;
	}
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    no *lista;
    int dado=0,menor,maior,result, d=0;
    char parada;
    lista=colocarnul(lista);//inicializando a lista
    if(lista!=NULL){
        exit (1);
    }
    
    do{
        printf("\nDigite um numero: ");
        scanf("%d",&dado);
        lista=inserir(lista,dado);//chama a a função de inserir a lista
	    do{
	    	printf("\nNovo numero?(s ou n)\n");//pergunta se o usuario deseja add um novo numero
	        fflush(stdin);//zera o buffer do teclado
		    scanf("%c",&parada);
		    parada=toupper(parada);//transforma menor em maior
			d=testar(parada);//chama a função para testa se o usuario digotou n ou s
		}while(d!=1);//laço do retorno da função
        system("cls");
    }while(parada!='N');//laço para novo nó
    result=comparar(lista,&maior,&menor);//chama a função compaarar e retorna o valor aritmetico
    //mostra o retorno da função e o maior e menor numero//
    printf("Maior numero = %d\nMenor numero = %d\n",maior,menor);
    printf("resultado aritmetico = %d\n\n",result);
    return 0;
}
