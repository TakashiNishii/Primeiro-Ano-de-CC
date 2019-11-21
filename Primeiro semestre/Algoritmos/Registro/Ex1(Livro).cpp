#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
struct Livro {
	char titulo[30];
	char autor[30];
	int numPaginas;
	float preco;
	int anoPublicacao;
}; 

//Fun��o que pega a string e coloca em maiusculo letra por letra
void maiusculo (char n[]) {
	for (int i; i < strlen(n); i++){
		fflush(stdin);
		n[i] = toupper(n[i]);
	}
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	struct Livro livrin;
	
	printf ("Informe o t�tulo do livro: ");
	fflush(stdin);
	gets (livrin.titulo);
	
	printf ("Informe o nome do autor: ");
	fflush(stdin);
	gets (livrin.autor);
	
	printf ("Informe a quantidade de p�ginas: ");
	fflush(stdin);
	scanf ("%d", &livrin.numPaginas);
	
	printf ("Informe o pre�o do livro: ");
	fflush(stdin);
	scanf ("%f", &livrin.preco);
	
	printf ("Informe o ano de publica��o: ");
	fflush(stdin);
	scanf ("%d", &livrin.anoPublicacao);
	 
	maiusculo(livrin.titulo);
	maiusculo(livrin.autor);
	
	system("cls");
	fflush(stdin);
	printf ("T�tulo: %s\n", livrin.titulo);
	fflush(stdin);
	printf ("Autor: %s\n", livrin.autor);
	fflush(stdin);
	printf ("N�mero de p�ginas: %d\n", livrin.numPaginas);
	fflush(stdin);
	printf ("Pre�o do livro: %f\n", livrin.preco);
	fflush(stdin);
	printf ("Ano de publica��o: %d\n", livrin.anoPublicacao);
	 
	return 0;
}

