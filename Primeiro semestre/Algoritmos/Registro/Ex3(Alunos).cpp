#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#define max 50
struct Matricula {
	int idMatricula;
	char nome [50], codDis[8];
	float nota[3];
};

int main () {
	setlocale (LC_ALL, "Portuguese");
	struct Matricula aluno[max];
	int i;
	
	for (i = 0; i < max; i++) {
		printf ("Informe o código do %d aluno: ", i + 1);
		scanf ("%d", &aluno[i].idMatricula);
		
		printf ("Informe o nome do %d aluno: ", i + 1);
		fflush (stdin);
		gets (aluno[i].nome);
		
		printf ("Informe o código da matéria: ");
		fflush (stdin);
		gets (aluno[i].codDis);
		
		for (int n = 0; n < 3; n++){
			printf ("Informe a %d nota do %d aluno: ", n + 1,i + 1);
			scanf ("%f", &aluno[i].nota[n]);
		}
	}
	printf ("Matr\tAluno\tCod.Disc\t1a.Nota\t2a.Nota\t3a.Nota\tSituação\n");
	for (i = 0; i < max; i++) {
		printf("%d\t%s\t%s\t%.1f\t%.1f\t%.1f", aluno[i].idMatricula, aluno[i].nome, aluno[i].codDis, aluno[i].nota[0], aluno[i].nota[1], aluno[i].nota[2]);
		
		if ( (aluno[i].nota[0] + aluno[i].nota[1] + aluno[i].nota[2])/3 >= 6 ) {
			printf (" Aprovado\n");
		} else {
			printf (" Reprovado\n");
		}
	}
	
	return 0;
}
