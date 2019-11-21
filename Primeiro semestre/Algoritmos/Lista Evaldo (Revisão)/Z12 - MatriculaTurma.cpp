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
	struct Informacoes aluno[5];
	int i;
	
	for (i = 0; i < 5; i++){
		system("cls");
		printf ("Digite o nome do aluno %d: ", i + 1);
		scanf ("%s", aluno[i].nome);
	
		printf ("Digite o RGA do %s: ", aluno[i].nome);
		scanf ("%d", &aluno[i].rga);
	
		printf ("A nota 1 desse aluno foi: ");
		scanf ("%f", &aluno[i].nota1);
	
		printf ("E a nota 2 foi: ");
		scanf ("%f", &aluno[i].nota2);
		
	}
	
	system ("cls");
	
	for (i = 0; i < 5; i++){
		system ("cls");
		printf ("Aluno %d: \n", i + 1);
		printf ("Nome - %s\n", aluno[i].nome);
		printf ("Nota 1 - %.2f\n", aluno[i].nota1);
		printf ("Nota 2 - %.2f\n", aluno[i].nota2);
		printf ("Media final - %.2f\n", (aluno[i].nota1 + aluno[i].nota2)/2);
		system("pause");
	}
	system ("cls");
	printf ("Fim do programa! \n");
	return 0;
}
