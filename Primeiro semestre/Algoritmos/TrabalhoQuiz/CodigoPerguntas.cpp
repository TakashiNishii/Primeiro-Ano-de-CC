/*Trabalho de quiz na mat�ria de Algoritmos e Programa��o 1
Turma e curso: Ci�ncia da computa��o 1
Alunos: Gabriel Silverson Gomes e Ygor Takashi Nishi
Tema: Super-her�is*/

//Bibliotecas que ser�o utilizados:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>
#include <ctype.h>

/*Essa fun��o pega a alternativa correta, a alternativa escolhida pelo usuario e a pontua��o
se a alternativa escolhida pelo usuario for correta soma mais um ponto*/
void verifica (char *op, char *opCorreta, float *pontos){
	if (*op == *opCorreta){
			printf("Voc� acertou!\n");
			system("pause");
			*pontos = *pontos + 1;
		}else{
			printf("Voc� errou!\n");
			system("pause");
		}
}
//Pegar� a posi��o atual em que est� sendo escrita a alternativa correta e retornar� em letra qual � a alternativa correta:
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

/*A fun��o quest�es � responsavel por gerar as alternativas, usa como parametro a quest�o que est� sendo mostrada para o usuario
e a variavel que ir� receber a alternativa correta*/
void questoes(float numQuestao, char *op){
	//Esse vetor armazena quais alternativas j� foram escritas para que n�o tenha repeti��es
	int alternativaUtilizada[4];
	
	//Essa variavel ir� pegar valores de forma aleat�ria para escrever as alternativas "embaralhadas"
	int qualAlternativa = 0
	//J� a variavel abaixo ser� utilizada para verificar se a alternativa j� foi escrita ou n�o para que n�o haja repeti��o
	int numEstado = 0
	//Ser� utilizada para verificar quantas alternativas foram escritas e qual � a alternativa correta
	int quant = 0; 
	
	alternativaUtilizada[0] = 5;
	alternativaUtilizada[1] = 5;
	alternativaUtilizada[2] = 5;
	alternativaUtilizada[3] = 5;
	
	quant = 0;
	srand(time(NULL));
	while (quant != 4){
		//Escrevendo as alternativas se orientando pelo valor da variavel quant:
		if(quant == 0) {
			printf ("[A] - ");
		} else if(quant == 1) {
			printf ("[B] - ");
		} else if(quant == 2) {
			printf ("[C] - ");
		} else {
			printf ("[D] - ");
		}
		
		//Pegando um valor aleat�rio para escolher qual alternativa ser� escrita, s� sa�ra do loop quando o n�mero aleatorio gerado n�o � repetido:
		while (numEstado != 1){
			qualAlternativa = rand() % 4;
			if ( qualAlternativa != alternativaUtilizada[0] && qualAlternativa != alternativaUtilizada[1] && qualAlternativa != alternativaUtilizada[2])  {
				numEstado = 1;
			} 
		}
		
		//Ir� pegar qual � a alternativa conforme o valor que veio no parametro da fun��o e escrevendo as alternativas daquela pergunta:
		if (numQuestao == 0){
			//Quando for escrita a alternativa correta ser� armazenado a op��o correta atrav�s da fun��o alternativaCorreta passando o quant para verificar qual � essa letra
			if(qualAlternativa == 0) {
				printf ("Feim (fade), Zii (spirit), Gron (bind).\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 1) {
				printf ("Laas (life), Yah (Seek), Nir (hunt).\n");
			} else if (qualAlternativa == 2) {
				printf ("Rii (essence), Vaaz (tear), Zol (spirit).\n");
			} else {
				printf ("Fus (force), Ro (balance), Dah (Push).\n");
			}
		}
		
		if (numQuestao == 1){
			if(qualAlternativa == 0) {
				printf ("November Live.\n");
			} else if (qualAlternativa == 1) {
				printf ("Bonfine Night.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("November in the arm.\n");
			} else {
				printf ("Night Sadness.\n");
			}
		}
		
		if (numQuestao == 2){
			if(qualAlternativa == 0) {
				printf ("O presidente dos EUA, William Stryker.\n");
			} else if (qualAlternativa == 1) {
				printf ("Jean Grey, William Stryker.\n");
			} else if (qualAlternativa == 2) {
				printf ("O presidente dos EUA, Bolivar Trask.\n");
				*op = alternativaCorreta(quant);
			} else {
				printf ("Merc�rio, Bolivar Trask. \n");
			}
		}
		
		if (numQuestao == 3){
			if(qualAlternativa == 0) {
				printf ("Sterben.\n");
			} else if (qualAlternativa == 1) {
				printf ("Asada Shino.\n");
			} else if (qualAlternativa == 2) {
				printf ("Death Gun.\n");
			} else {
				printf ("Shinkawa Shouichi.\n");
				*op = alternativaCorreta(quant);
			}
		}
		
		if (numQuestao == 4){
			if(qualAlternativa == 0) {
				printf ("9 metros, Um boneco.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 1) {
				printf ("8,5 metros, Um integrante dos 10 mandamentos.\n");
			} else if (qualAlternativa == 2) {
				printf ("9 metros, Uma pessoa comum treinada por um mago.\n");
			} else {
				printf ("8,5 metros, Um dem�nio.\n");
			}
		}
		
		if (numQuestao == 5){
			if(qualAlternativa == 0) {
				printf ("Aenar Targaryen, ele salvou a vida de Tyrion, enfiando uma espada no pesco�o de um soldado Lannister.\n");
			} else if (qualAlternativa == 1) {
				printf ("Aegon Targaryen, ele salvou a vida de Tyrion, enfiando uma lan�a na nuca de um soldado Lannister.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("Aerys II, ele salvou a vida de Tyrion, enfiando uma lan�a na cabe�a de um soldado Lannister.\n");
			} else {
				printf ("Viserys Targaryen, ele salvou a vida de Tyrion, enfiando uma espada no peito de um soldado Lannister.\n");
			}
		}
		
		if (numQuestao == 6){
			if(qualAlternativa == 0) {
				printf ("Quando um dos filhos dele o tra�sse, Acreditava em Deus (religi�o crist�).\n");
			} else if (qualAlternativa == 1) {
				printf ("Ele morreria quando um dos seus filhos nascesse com uma marca de cobra em um dos olhos, Acreditava em Odin.\n");
			} else if (qualAlternativa == 2) {
				printf ("Ele morreria quando um cego enxergasse ele, Acreditava nos dois tanto em Odin e Deus (religi�o crist�).\n");
				*op = alternativaCorreta(quant);
			} else {
				printf ("Ele morreria em batalha, descobrindo a Inglaterra, morreu n�o acreditando em nenhum Deus.\n");
			}
		}
		
		if (numQuestao == 7){
			if(qualAlternativa == 0) {
				printf ("Reforma dos trabalhadores.\n");
			} else if (qualAlternativa == 1) {
				printf ("Expans�o das maquinas.\n");
			} else if (qualAlternativa == 2) {
				printf ("Igualdade racial. \n");
			} else {
				printf ("Tr�fico de negros. \n");
				*op = alternativaCorreta(quant);
			}
		}
		
		if (numQuestao == 8){
			if(qualAlternativa == 0) {
				printf ("1800 - 1820, com os planos de dar um fim da escravid�o, cria��o de escolas p�blicas, preserva��o ambiental e reforma agr�ria, confiscando propriedades improdutivas.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 1) {
				printf ("1820 - 1840, queria aumentar o territ�rio brasileiro, com o intuito de ter mais poder, assim podendo tornar o Brasil um pa�s de primeiro mundo.\n");
			} else if (qualAlternativa == 2) {
				printf ("1780 - 1800, tinha os planos de tornar o Brasil um pa�s com o governo monarca, assim se tornando o rei.\n");
			} else {
				printf ("1840 - 1850, criar institui��es de estudo, aumentar a produtividade da cana de a��car, investir em grandes empresas terceirizadas, aumentar a carga horaria obrigat�ria.   \n");
			}
		}
		
		if (numQuestao == 9){
			if(qualAlternativa == 0) {
				printf ("O Le�o de Nem�ia, o Javali de Erimanto.\n");
			} else if (qualAlternativa == 1) {
				printf ("O Le�o de Nem�ia, A  Hidra de Lerna.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("A Hidra de Lerna, o Touro de Minos.\n");
			} else {
				printf ("Geri�o, C�rbero (o c�o de tr�s cabe�as).\n");
			}
		}
		
		alternativaUtilizada[quant] = qualAlternativa;
		numEstado = 0;
		quant++;
	}	
}

/*A fun��o perguntas tem como parametro o numero da quest�o que ser� escrita, pergunta atual para informar ao usuario em qual quest�o ele est�
e o endere�o da variavel ponto para caso a fun��o perceba que o usuario acertou a quest�o seja armazenada mais um ponto*/
void Perguntas (float numQuestao, int perguntaAtual, float *pontin){
	//Variavel que guardar� as alternativas do usu�rio e a alternativa correta:
	char op , opCorreta;
	
	if (numQuestao == 0){
		//escreve pergunta
		system ("cls");
		printf("%d - Ai vai uma perguntinha sobre jogos, como todo gamer que joga RPG sabe, skyrim foi um dos, e ainda � um jogo \nincr�vel com seu mapa com conceito aberto, sua mitologia suas hist�rias e drag�es, enfim, o jogo se baseia em um her�i \ncom o t�tulo de Dovahkiin, onde ele � o �nico mortal, que possui uma alma de drag�o, assim podendo usar os famosos \n'gritos' que s�o palavras de poder na l�ngua dos drag�es, cada grito possui tr�s (3) palavras. \nDe acordo com o contexto acima o grito Become Ethereal � composto por quais palavras:\n", perguntaAtual+1);
		//Ap�s escrever a pergunta chama a fun��o para escrever as quest�es com o "id" da pergunta e o endere�o da variavel opCorreta para ser guardada a alternativa correta
		questoes(numQuestao, &opCorreta);
		//Com as alternativas escritas entra em um loop onde o usuario ficar� at� escrever uma alternativa "v�lida"
		do{
			fflush(stdin);	
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		/*Com a alternativa que o usuario informou e a alternativa correta, ser� enviada para a fun��o o endere�o das duas variaveis junto com o endere�o da variavel ponto
		caso as duas variaveis tenham guardada a mesma alternativa ser� somada mais um ponto para o usu�rio */
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 1){
		system ("cls");
		//escreve pergunta
		printf("%d - Oiii, vamos testar se voc� manja dos filmes kkkkk, no filme V de Vingan�a o protagonista mostra ser uma pessoa\n inteligente, manipuladora e fria, que conspirou contra o governo, no filme se retrata o atentado de 5  de novembro...\n Qual evento que a Inglaterra realizava pra comemorar o fato em que o atentado 5 de novembro deu errado?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 2){
		system("cls");
		//escreve pergunta
		printf("%d - Opa vamos ver seus conhecimentos sobre filmes de super her�i, voc� conhece X-Men n�? Ufa kkkk, enfim no filme X-Men dias de um futuro esquecido,\n qual a pessoa que o magneto mata? E a partir dessa morte quem cria as sentinelas que ca�aram os mutantes no futuro.\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 3){
		system("cls");
		//escreve pergunta
		printf("%d - Vamos ver se voc� � um verdadeiro Otaku, kkkkkk, no Anime que foi um sucesso quando estreado em 2013,\nSword Art Online, teve varias temporadas, no anime mostra a vida de Kirigaya Kazuto um dos 10.000 jogadores,\nque se aventuraram em SAO, o jogo mais esperado de 2022, depois de toda a drama do anime (recomendo assistir),\nfoi criado um novo arco, chamado Phantom Bullet:\nNesse arco qual era o nome do vil�o? //Dica ele era um dos assassinos da guilda dos assassinos da primeira temporada.\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');	
		
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 4){
		system("cls");
		//escreve pergunta
		printf("%d - Olha olha, quem ainda est� aqui, enfim vamos a pergunta hehehe. \nNo anime Nanatsu no Taizai, conta a hist�ria dos 7 pecados capitais, onde o capit�o Meliodas (que � o pecado da ira)\ne l�der dos 7 pecados capitais, vai atr�s da sua equipe, durante o anime o capit�o encontra todos os seus parceiros.\nDiane o pecado da inveja � do cl� dos gigantes, qual a sua altura? E mais uma coisa no anime tamb�m � apresentado\nGowther o pecado da lux�ria, o que ele �?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 5){
		system("cls");
		//escreve pergunta
		printf("%d - Agora vamos testar suas habilidades em s�ries. Na famosa s�rie que estreou sua ultima temporada no dia 12/05/2019,\nmundialmente conhecida por GOT (Game of Thrones), foi considerada a maior s�rie assistida do mundo,\nessa s�rie conta uma historia de um mundo repleto de fantasias, um dos personagens principais se chama Jon Snow,\nrecebeu esse nome pois era considerado um bastardo do norte, mas ao longo da s�rie se descobre que \nesse n�o � o verdadeiro nome dele: \nCite qual o nome dele e qual o feito heroico que Podrick fez quando salvou o Tyrion Lannister na batalha da agua negra? \n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{		
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 6){
		system("cls");
		//escreve pergunta
		printf("%d - Vamos l� mais uma de s�ries! Na s�rie Vikings, o personagem principal chamado Ragnar Lodbrok, � um Viking, qual foi a profecia da sua morte, e quando ele morreu ele acreditava em qual Deus?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 7){
		system("cls");
		//escreve pergunta
		printf("%d - Agora as coisas v�o ficar mais interessantes, vamos ver como est� o seu conhecimento hist�rico.\nUm dos her�is hist�ricos que podemos citar � William Wilberforce, ele era Brit�nico, foi um pol�tico, filantropo.\nEm 1785 se converteu ao evangelicalismo, mudando completamente seu estilo de vida.\nEle se tornou l�der de qual movimento abolicionista?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{	
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 8){
		system("cls");
		//escreve pergunta
		printf("%d - Vamos ver se voc� conhece esse her�i. Jos� Bonif�cio e conhecido como pai da p�tria, ele � considerado \ncomo Benjamin Franklin para o Brasil, pois era um fil�sofo-cientista, que queria moldar o Brasil com suas ideias.\nEm qual o per�odo que Jos� Bonif�cio veio para o Brasil e quais foram os seus planos?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
		do{
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);	
	}
	if (numQuestao == 9){
		system("cls");
		//escreve pergunta
		printf("%d - Ol� vamos testar seu conhecimento mitol�gico. Todos sabem que H�rcules e filho de Zeus, e durante \nseu crescimento ele teve que fazer 12 tarefas, que ficaram conhecidas como os dozes trabalho de H�rcules.\nEle teve que matar certas criaturas quais foram elas?\n", perguntaAtual+1);
		questoes(numQuestao, &opCorreta);
			
		do{
			fflush(stdin);
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		verifica (&op, &opCorreta, pontin);
	}
}

//Inicio do programa principal
int main (){
	setlocale (LC_ALL, "Portuguese");
	//As variaveis porcentagem e pontua��o s�o para o calculo no final se o usuario ganhou ou n�o, pontua��o recebe mais 1 em seu valor cada vez que o usuario acerta a quest�o
	float porcentagem;
	float pontuacao = 0;
	//A variavel perguntas ser� utilizada para contar quantas quest�es foram escritas, cada vez que uma quest�o � escrita ela soma mais 1 em seu valor
	float perguntas = 0;
	//Serve para pegar valores aleat�rios e enviar na fun��o perguntas chamando assim uma pergunta com o "id" correspondente ao valor pego nessa variavel
	int perguntaAtual;
	//estadoPesquisa � para verificar se a pergunta j� foi escrita ou n�o para que n�o haja perguntas repetidas no quiz
	int estadoPesquisa = 0;
	//Tamb�m utilizada para pesquisa, o posVet serve para armazenar o valor no vetor de perguntas utilizadas e tambem para mostrar quantas perguntas foram escritas
	int posVet = 0;
	//Vetor onde s�o guardadas as perguntas j� feitas para que n�o haja repeti��o de perguntas
	int perguntasUtilizadas[10];
	//Variavel que guarda a resposta do usuario se ele quer continuar ou sair do jogo
	char continuacao;
	
	//Boas vindas ao usuario:
	printf("||*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||\n\n");
	printf("  Ol� usu�rio tudo bem? Voc� acaba de inicializar um dos melhores Quizes do mundo, neste quis\n");
	printf("ser� testada suas habilidades e conhecimentos, atrav�s de uma s�rie de perguntas sobre o tema\n");
	printf("HER�I, onde cada pergunta ter� 4 alternativas (A a D), ent�o se prepare...\n\n");
	printf(" PS: N�o se prenda a s� her�is de filmes ou de series, ser�o abordados her�is de animes, filmes,\nseries, her�is hist�ricos e jogos!!!\n\n");
	printf("                                                          Gabriel Silverson & Ygor Takashi\n");
	printf("||*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-||\n");
	
	printf("  Deseja continuar? Precione qualquer tecla, para sair pressione 'S' ");	
	continuacao=getch();
	continuacao = toupper(continuacao);
	
	//Inicio do quiz, s� sa�ra do jogo se o usuario informar a letra S nas boas vindas ou no fim de jogo
	while (continuacao != 'S'){
		system ("cls");
		//Zerar todas as vari�veis para caso queira jogar novamente:
		for (int limpaVet = 0; limpaVet < 10; limpaVet++) {
			//O vetor de perguntas que j� foram utilizadas recebera o valor 11 que � imposs�vel e n�o existe pergunta n�mero 11:
			perguntasUtilizadas[limpaVet] = 11;
		}
		perguntas = 0;
		posVet = 0;
		estadoPesquisa = 0;
		pontuacao = 0;
		//-----------------
		
		//Come�o das perguntas para o quiz:
		srand(time(NULL));
		//Enquanto n�o for feita as 10 perguntas ficar� dentro do loop de gerar perguntas
		while (perguntas != 10){
			//Pegando uma pergunta 
			perguntaAtual = rand() % 10;
			
			//Loop que verifica se a pergunta que foi pega ela j� foi escrita
			for (int procura = 0; procura < posVet + 1; procura++) {
				//Caso ela ja foi escrita a variavel estadoPesquisa recebe 1 representando que h� repeti��o de pergunta
				if (perguntaAtual == perguntasUtilizadas[procura]){
					estadoPesquisa = 1;
				}
			}
			
			//Se a pergunta n�o for repetida ele entrar� guardando essa pergunta no vetor de perguntas utilizadas e chamando a fun��o de escrever perguntas
			if (estadoPesquisa == 0) {
				perguntasUtilizadas[posVet] = perguntaAtual;
				posVet++;
				//Na fun��o de escrever perguntas � enviado qual o n�mero da quest�o, em qual n�mero est� o jogo do quiz e a pontua��o
				Perguntas(perguntaAtual, perguntas, &pontuacao);
				perguntas++;
			}
			//Zera a fun��o de estado da pesquisa
			estadoPesquisa = 0;
		}
		//Ap�s ser feita as dez perguntas ser� calculado quantos % do quiz o jogador acertou
		porcentagem = (pontuacao / perguntas) * 100;
		//Exibe o fim de jogo com o resultado da pontua��o (caso seja maior que 80% ele ganhou sen�o ele perdeu) e perguntando ao usuario se ele quer jogar novamente
		do{
			system("cls");			
			printf ("Fim de jogo!\n");
			if (porcentagem >= 80 ){
				printf ("Voc� ganhou com %.2f%% de acertos", porcentagem);
			} else {
				printf ("Voc� perdeu com %.2f%% de acertos\n", porcentagem);
			}
			printf ("Deseja continuar?\n");
			printf ("[S] - Sair\n");
			printf ("[J] - Jogar novamente\n");
			fflush(stdin);
			continuacao = getch();
			continuacao = toupper(continuacao);
		} while (continuacao != 'S' && continuacao != 'J');
	}
	//Quando acabar o jogo ser� exibido uma tela de agradecimento e a finaliza��o do jogo
	system("cls");
	printf ("Obrigadooooo! Volte sempre ao nosso quiz\n");
	return 0;
}
