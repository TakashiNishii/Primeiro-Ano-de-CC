/*Trabalho de quiz na matéria de Algoritmos e Programação 1
Turma e curso: Ciência da computação 1
Alunos: Gabriel Silverson Gomes e Ygor Takashi Nishi
Tema: Super-heróis*/

//Bibliotecas que serão utilizados:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>

void verifica (char *op, char *opCorreta, float *pontos){
	if (*op == *opCorreta){
			printf("Você acertou!\n");
			system("pause");
			*pontos = *pontos + 1;
		}else{
			printf("Você errou!\n");
			system("pause");
		}
}
//Pegará a posição atual em que está sendo escrita a alternativa correta e retornará em letra qual a alternativa correta:
char alternativaCorreta (int posAtual) {
	if (posAtual == 0){
		return 'A';
	} else if (posAtual == 1){
		return 'B';
	} else if (posAtual == 2) {
		return 'C';
	} else {
		return 'D';
	}
}


void questoes(float numQuestao, char *op){
	
	int alternativaUtilizada[4];
	int qualAlternativa = 0, numEstado = 0, quant = 0; 
	alternativaUtilizada[0] = 5;
	alternativaUtilizada[1] = 5;
	alternativaUtilizada[2] = 5;
	alternativaUtilizada[3] = 5;
	
	quant = 0;
	srand(time(NULL));
	while (quant != 4){
		//Escrevendo as alternativas se orientando pela variavel quant:
		if(quant == 0) {
			printf ("[A] - ");
		} else if(quant == 1) {
			printf ("[B] - ");
		} else if(quant == 2) {
			printf ("[C] - ");
		} else {
			printf ("[D] - ");
		}
		
		//Pegando um valor aleatório para escolher qual alternativa será escrita
		while (numEstado != 1){
			qualAlternativa = rand() % 4;
			if ( qualAlternativa != alternativaUtilizada[0] && qualAlternativa != alternativaUtilizada[1] && qualAlternativa != alternativaUtilizada[2])  {
				numEstado = 1;
			} 
		}
		
		//Irá pegar a alternativa conforme a questão desejada:
		if (numQuestao == 0){
			if(qualAlternativa == 0) {
				printf ("1\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 1) {
				printf ("2\n");
			} else if (qualAlternativa == 2) {
				printf ("3\n");
			} else {
				printf ("4\n");
			}
		}
		
		if (numQuestao == 1){
			if(qualAlternativa == 0) {
				printf ("1\n");
			} else if (qualAlternativa == 1) {
				printf ("2\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("3\n");
			} else {
				printf ("4\n");
			}
		}
		
		if (numQuestao == 2){
			if(qualAlternativa == 0) {
				printf ("1\n");
			} else if (qualAlternativa == 1) {
				printf ("2\n");
			} else if (qualAlternativa == 2) {
				printf ("3\n");
				*op = alternativaCorreta(quant);
			} else {
				printf ("4\n");
			}
		}
		
		if (numQuestao == 3){
			if(qualAlternativa == 0) {
				printf ("1\n");
			} else if (qualAlternativa == 1) {
				printf ("2\n");
			} else if (qualAlternativa == 2) {
				printf ("3\n");
			} else {
				printf ("4\n");
				*op = alternativaCorreta(quant);
			}
		}
		
		if (numQuestao == 4){
			if(qualAlternativa == 0) {
				printf ("5\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 1) {
				printf ("6\n");
			} else if (qualAlternativa == 2) {
				printf ("7\n");
			} else {
				printf ("8\n");
			}
		}
		
		if (numQuestao == 5){
			if(qualAlternativa == 0) {
				printf ("5\n");
			} else if (qualAlternativa == 1) {
				printf ("6\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("7\n");
			} else {
				printf ("8\n");
			}
		}
		
		if (numQuestao == 6){
			if(qualAlternativa == 0) {
				printf ("5\n");
			} else if (qualAlternativa == 1) {
				printf ("6\n");
			} else if (qualAlternativa == 2) {
				printf ("7\n");
				*op = alternativaCorreta(quant);
			} else {
				printf ("8\n");
			}
		}
		
		if (numQuestao == 7){
			if(qualAlternativa == 0) {
				printf ("5\n");
			} else if (qualAlternativa == 1) {
				printf ("6\n");
			} else if (qualAlternativa == 2) {
				printf ("7\n");
			} else {
				printf ("8\n");
				*op = alternativaCorreta(quant);
			}
		}
		
		if (numQuestao == 8){
			if(qualAlternativa == 0) {
				printf ("9\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 1) {
				printf ("10\n");
			} else if (qualAlternativa == 2) {
				printf ("1\n");
			} else {
				printf ("2\n");
			}
		}
		
		if (numQuestao == 9){
			if(qualAlternativa == 0) {
				printf ("9\n");
			} else if (qualAlternativa == 1) {
				printf ("10\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("1\n");
			} else {
				printf ("2\n");
			}
		}
		alternativaUtilizada[quant] = qualAlternativa;
		numEstado = 0;
		quant++;
	}	
}

void Perguntas (float numQuestao, int perguntaAtual, float *pontin){
	//Variavel que guardará as alternativas do usuário:
	char op , opCorreta;
	
	if (numQuestao == 0){
		//escreve pergunta
		system ("cls");
		printf("%d - 1 X 1?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{
			fflush(stdin);	
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 1){
		system ("cls");
		//escreve pergunta
		printf("%d - 1 X 2?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 2){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 3?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 3){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 4?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');	
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 4){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 5?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 5){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 6?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{		
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 6){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 7?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 7){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 8?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{	
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 8){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 9?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);	
	}
	if (numQuestao == 9){
		system("cls");
		//escreve pergunta
		printf("%d - 1 X 10?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
}

//Inicio do programa principal
int main (){
	setlocale (LC_ALL, "Portuguese");
	float porcentagem;
	float pontuacao = 0;
	float perguntas = 0;
	int perguntaAtual;
	int estadoPesquisa = 0;
	int posVet = 0;
	int perguntasUtilizadas[10];
	char continuacao;
	
	//Boas vindas ao usuario:
	printf("||*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||\n\n");
	printf("  Olá usuário tudo bem? Você acaba de inicializar um dos melhores Quizes do mundo, neste quis\n");
	printf("será testada suas habilidades e conhecimentos, através de uma série de perguntas sobre o tema\n");
	printf("HERÓI, onde cada pergunta terá 4 alternativas (A a D), então se prepare...\n\n");
	printf(" PS: Não se prenda a só heróis de filmes ou de series, serão abordados heróis de animes, filmes,\nseries, heróis históricos e jogos!!!\n\n");
	printf("                                                          Gabriel Silverson & Ygor Takashi\n");
	printf("||*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||\n");
	
	printf("  Deseja continuar? Precione qualquer tecla, para sair pressione 'S' ");	
	continuacao=getch();
	continuacao = toupper(continuacao);
	
	
	while (continuacao != 'S'){
		system ("cls");
		//Zerar todas as variáveis para caso queira jogar novamente:
		for (int limpaVet = 0; limpaVet < 10; limpaVet++) {
			//O vetor de perguntas que já foram utilizadas recebera o valor 11 que é impossível e não existe pergunta número 11:
			perguntasUtilizadas[limpaVet] = 11;
		}
		perguntas = 0;
		posVet = 0;
		estadoPesquisa = 0;
		pontuacao = 0;
		//Começo das perguntas para o quiz:
		srand(time(NULL));
		while (perguntas != 10){
			perguntaAtual = rand() % 10;
		
			for (int procura = 0; procura < posVet + 1; procura++) {
				if (perguntaAtual == perguntasUtilizadas[procura]){
					estadoPesquisa = 1;
				}
			}
		
			if (estadoPesquisa == 0) {
				perguntasUtilizadas[posVet] = perguntaAtual;
				posVet++;
				Perguntas(perguntaAtual, perguntas, &pontuacao);
				perguntas++;
			}
			estadoPesquisa = 0;
		}
		
		porcentagem = (pontuacao / perguntas) * 100;
		do{
			system("cls");			
			printf ("Fim de jogo!\n");
			if ((pontuacao / perguntas) * 100 >= 80 ){
				printf ("Você ganhou com %.2f%% de acertos", porcentagem);
			} else {
				printf ("Você perdeu com %.2f%% de acertos\n", porcentagem);
			}
			printf ("Deseja continuar?\n");
			printf ("[S] - Sair\n");
			printf ("[C] - Continuar\n");
			fflush(stdin);
			scanf ("%c", &continuacao);
		} while (continuacao != 'S' && continuacao != 'C');
	}
	
	return 0;
}
