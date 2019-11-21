#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float mediaFinal(float n1, n2){
	return (n1 + n2) / 2;
}

struct aluno {
	char nome[30];
	float mediaFinal;
};

int main () {
	setlocale (LC_ALL, "Portuguese");
	struct aluno Alunin;
	float Nota1, Nota2;
	
	printf ("Informe o seu nome: ");
	scanf ("%s", Alunin.nome);
	printf ("Informe a nota 1 do aluno: ");
	scanf ("%f", &Nota1);
	printf ("Informe a nota 2 do aluno: ");
	scanf ("%f", &Nota2);
	
	Alunin.mediaFinal = mediaFinal (Nota1, Nota2);
	printf ("Nome: %s\n", Alunin.nome);
	printf ("Nota 1: %.2f\n", Nota1);
	printf ("Nota 2: %.2f\n", Nota2);
	printf ("Média final: %.2f\n", Alunin.mediaFinal);
	
	return 0;
}
