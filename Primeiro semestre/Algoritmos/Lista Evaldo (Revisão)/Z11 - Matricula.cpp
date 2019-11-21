#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Informacoes{
	char nome[20];
	int rga;
	float nota1, nota2;
	
} Informacoes;

int main () {
	setlocale (LC_ALL, "Portuguese");
	struct Informacoes aluno;
	
	printf ("Digite o nome do aluno: ");
	scanf ("%s", aluno.nome);
	
	printf ("Digite o RGA do %s: ", aluno.nome);
	scanf ("%d", &aluno.rga);
	
	printf ("A nota 1 desse aluno foi: ");
	scanf ("%f", &aluno.nota1);
	
	printf ("E a nota 2 foi: ");
	scanf ("%f", &aluno.nota2);
	
	system ("cls");
	
	printf ("Nome - %s\n", aluno.nome);
	printf ("Nota 1 - %.2f\n", aluno.nota1);
	printf ("Nota 2 - %.2f\n", aluno.nota2);
	printf ("Media final - %.2f\n", (aluno.nota1 + aluno.nota2)/2);
	
	return 0;
}
