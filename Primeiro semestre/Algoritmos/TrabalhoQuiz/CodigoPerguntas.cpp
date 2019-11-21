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

/*Essa função pega a alternativa correta, a alternativa escolhida pelo usuario e a pontuação
se a alternativa escolhida pelo usuario for correta soma mais um ponto*/
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
//Pegará a posição atual em que está sendo escrita a alternativa correta e retornará em letra qual é a alternativa correta:
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

/*A função questões é responsavel por gerar as alternativas, usa como parametro a questão que está sendo mostrada para o usuario
e a variavel que irá receber a alternativa correta*/
void questoes(float numQuestao, char *op){
	//Esse vetor armazena quais alternativas já foram escritas para que não tenha repetições
	int alternativaUtilizada[4];
	
	//Essa variavel irá pegar valores de forma aleatória para escrever as alternativas "embaralhadas"
	int qualAlternativa = 0
	//Já a variavel abaixo será utilizada para verificar se a alternativa já foi escrita ou não para que não haja repetição
	int numEstado = 0
	//Será utilizada para verificar quantas alternativas foram escritas e qual é a alternativa correta
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
		
		//Pegando um valor aleatório para escolher qual alternativa será escrita, só saíra do loop quando o número aleatorio gerado não é repetido:
		while (numEstado != 1){
			qualAlternativa = rand() % 4;
			if ( qualAlternativa != alternativaUtilizada[0] && qualAlternativa != alternativaUtilizada[1] && qualAlternativa != alternativaUtilizada[2])  {
				numEstado = 1;
			} 
		}
		
		//Irá pegar qual é a alternativa conforme o valor que veio no parametro da função e escrevendo as alternativas daquela pergunta:
		if (numQuestao == 0){
			//Quando for escrita a alternativa correta será armazenado a opção correta através da função alternativaCorreta passando o quant para verificar qual é essa letra
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
				printf ("Mercúrio, Bolivar Trask. \n");
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
				printf ("8,5 metros, Um demônio.\n");
			}
		}
		
		if (numQuestao == 5){
			if(qualAlternativa == 0) {
				printf ("Aenar Targaryen, ele salvou a vida de Tyrion, enfiando uma espada no pescoço de um soldado Lannister.\n");
			} else if (qualAlternativa == 1) {
				printf ("Aegon Targaryen, ele salvou a vida de Tyrion, enfiando uma lança na nuca de um soldado Lannister.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("Aerys II, ele salvou a vida de Tyrion, enfiando uma lança na cabeça de um soldado Lannister.\n");
			} else {
				printf ("Viserys Targaryen, ele salvou a vida de Tyrion, enfiando uma espada no peito de um soldado Lannister.\n");
			}
		}
		
		if (numQuestao == 6){
			if(qualAlternativa == 0) {
				printf ("Quando um dos filhos dele o traísse, Acreditava em Deus (religião cristã).\n");
			} else if (qualAlternativa == 1) {
				printf ("Ele morreria quando um dos seus filhos nascesse com uma marca de cobra em um dos olhos, Acreditava em Odin.\n");
			} else if (qualAlternativa == 2) {
				printf ("Ele morreria quando um cego enxergasse ele, Acreditava nos dois tanto em Odin e Deus (religião cristã).\n");
				*op = alternativaCorreta(quant);
			} else {
				printf ("Ele morreria em batalha, descobrindo a Inglaterra, morreu não acreditando em nenhum Deus.\n");
			}
		}
		
		if (numQuestao == 7){
			if(qualAlternativa == 0) {
				printf ("Reforma dos trabalhadores.\n");
			} else if (qualAlternativa == 1) {
				printf ("Expansão das maquinas.\n");
			} else if (qualAlternativa == 2) {
				printf ("Igualdade racial. \n");
			} else {
				printf ("Tráfico de negros. \n");
				*op = alternativaCorreta(quant);
			}
		}
		
		if (numQuestao == 8){
			if(qualAlternativa == 0) {
				printf ("1800 - 1820, com os planos de dar um fim da escravidão, criação de escolas públicas, preservação ambiental e reforma agrária, confiscando propriedades improdutivas.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 1) {
				printf ("1820 - 1840, queria aumentar o território brasileiro, com o intuito de ter mais poder, assim podendo tornar o Brasil um país de primeiro mundo.\n");
			} else if (qualAlternativa == 2) {
				printf ("1780 - 1800, tinha os planos de tornar o Brasil um país com o governo monarca, assim se tornando o rei.\n");
			} else {
				printf ("1840 - 1850, criar instituições de estudo, aumentar a produtividade da cana de açúcar, investir em grandes empresas terceirizadas, aumentar a carga horaria obrigatória.   \n");
			}
		}
		
		if (numQuestao == 9){
			if(qualAlternativa == 0) {
				printf ("O Leão de Neméia, o Javali de Erimanto.\n");
			} else if (qualAlternativa == 1) {
				printf ("O Leão de Neméia, A  Hidra de Lerna.\n");
				*op = alternativaCorreta(quant);
			} else if (qualAlternativa == 2) {
				printf ("A Hidra de Lerna, o Touro de Minos.\n");
			} else {
				printf ("Gerião, Cérbero (o cão de três cabeças).\n");
			}
		}
		
		alternativaUtilizada[quant] = qualAlternativa;
		numEstado = 0;
		quant++;
	}	
}

/*A função perguntas tem como parametro o numero da questão que será escrita, pergunta atual para informar ao usuario em qual questão ele está
e o endereço da variavel ponto para caso a função perceba que o usuario acertou a questão seja armazenada mais um ponto*/
void Perguntas (float numQuestao, int perguntaAtual, float *pontin){
	//Variavel que guardará as alternativas do usuário e a alternativa correta:
	char op , opCorreta;
	
	if (numQuestao == 0){
		//escreve pergunta
		system ("cls");
		printf("%d - Ai vai uma perguntinha sobre jogos, como todo gamer que joga RPG sabe, skyrim foi um dos, e ainda é um jogo \nincrível com seu mapa com conceito aberto, sua mitologia suas histórias e dragões, enfim, o jogo se baseia em um herói \ncom o título de Dovahkiin, onde ele é o único mortal, que possui uma alma de dragão, assim podendo usar os famosos \n'gritos' que são palavras de poder na língua dos dragões, cada grito possui três (3) palavras. \nDe acordo com o contexto acima o grito Become Ethereal é composto por quais palavras:\n", perguntaAtual+1);
		//Após escrever a pergunta chama a função para escrever as questões com o "id" da pergunta e o endereço da variavel opCorreta para ser guardada a alternativa correta
		questoes(numQuestao, &opCorreta);
		//Com as alternativas escritas entra em um loop onde o usuario ficará até escrever uma alternativa "válida"
		do{
			fflush(stdin);	
			op = getch();
			op = toupper(op);
		}while (op != 'A' && op != 'B' && op != 'C' && op != 'D');
		/*Com a alternativa que o usuario informou e a alternativa correta, será enviada para a função o endereço das duas variaveis junto com o endereço da variavel ponto
		caso as duas variaveis tenham guardada a mesma alternativa será somada mais um ponto para o usuário */
		verifica (&op, &opCorreta, pontin);
	}
	if (numQuestao == 1){
		system ("cls");
		//escreve pergunta
		printf("%d - Oiii, vamos testar se você manja dos filmes kkkkk, no filme V de Vingança o protagonista mostra ser uma pessoa\n inteligente, manipuladora e fria, que conspirou contra o governo, no filme se retrata o atentado de 5  de novembro...\n Qual evento que a Inglaterra realizava pra comemorar o fato em que o atentado 5 de novembro deu errado?\n", perguntaAtual+1);
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
		printf("%d - Opa vamos ver seus conhecimentos sobre filmes de super herói, você conhece X-Men né? Ufa kkkk, enfim no filme X-Men dias de um futuro esquecido,\n qual a pessoa que o magneto mata? E a partir dessa morte quem cria as sentinelas que caçaram os mutantes no futuro.\n", perguntaAtual+1);
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
		printf("%d - Vamos ver se você é um verdadeiro Otaku, kkkkkk, no Anime que foi um sucesso quando estreado em 2013,\nSword Art Online, teve varias temporadas, no anime mostra a vida de Kirigaya Kazuto um dos 10.000 jogadores,\nque se aventuraram em SAO, o jogo mais esperado de 2022, depois de toda a drama do anime (recomendo assistir),\nfoi criado um novo arco, chamado Phantom Bullet:\nNesse arco qual era o nome do vilão? //Dica ele era um dos assassinos da guilda dos assassinos da primeira temporada.\n", perguntaAtual+1);
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
		printf("%d - Olha olha, quem ainda está aqui, enfim vamos a pergunta hehehe. \nNo anime Nanatsu no Taizai, conta a história dos 7 pecados capitais, onde o capitão Meliodas (que é o pecado da ira)\ne líder dos 7 pecados capitais, vai atrás da sua equipe, durante o anime o capitão encontra todos os seus parceiros.\nDiane o pecado da inveja é do clã dos gigantes, qual a sua altura? E mais uma coisa no anime também é apresentado\nGowther o pecado da luxúria, o que ele é?\n", perguntaAtual+1);
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
		printf("%d - Agora vamos testar suas habilidades em séries. Na famosa série que estreou sua ultima temporada no dia 12/05/2019,\nmundialmente conhecida por GOT (Game of Thrones), foi considerada a maior série assistida do mundo,\nessa série conta uma historia de um mundo repleto de fantasias, um dos personagens principais se chama Jon Snow,\nrecebeu esse nome pois era considerado um bastardo do norte, mas ao longo da série se descobre que \nesse não é o verdadeiro nome dele: \nCite qual o nome dele e qual o feito heroico que Podrick fez quando salvou o Tyrion Lannister na batalha da agua negra? \n", perguntaAtual+1);
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
		printf("%d - Vamos lá mais uma de séries! Na série Vikings, o personagem principal chamado Ragnar Lodbrok, é um Viking, qual foi a profecia da sua morte, e quando ele morreu ele acreditava em qual Deus?\n", perguntaAtual+1);
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
		printf("%d - Agora as coisas vão ficar mais interessantes, vamos ver como está o seu conhecimento histórico.\nUm dos heróis históricos que podemos citar é William Wilberforce, ele era Britânico, foi um político, filantropo.\nEm 1785 se converteu ao evangelicalismo, mudando completamente seu estilo de vida.\nEle se tornou líder de qual movimento abolicionista?\n", perguntaAtual+1);
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
		printf("%d - Vamos ver se você conhece esse herói. José Bonifácio e conhecido como pai da pátria, ele é considerado \ncomo Benjamin Franklin para o Brasil, pois era um filósofo-cientista, que queria moldar o Brasil com suas ideias.\nEm qual o período que José Bonifácio veio para o Brasil e quais foram os seus planos?\n", perguntaAtual+1);
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
		printf("%d - Olá vamos testar seu conhecimento mitológico. Todos sabem que Hércules e filho de Zeus, e durante \nseu crescimento ele teve que fazer 12 tarefas, que ficaram conhecidas como os dozes trabalho de Hércules.\nEle teve que matar certas criaturas quais foram elas?\n", perguntaAtual+1);
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
	//As variaveis porcentagem e pontuação são para o calculo no final se o usuario ganhou ou não, pontuação recebe mais 1 em seu valor cada vez que o usuario acerta a questão
	float porcentagem;
	float pontuacao = 0;
	//A variavel perguntas será utilizada para contar quantas questões foram escritas, cada vez que uma questão é escrita ela soma mais 1 em seu valor
	float perguntas = 0;
	//Serve para pegar valores aleatórios e enviar na função perguntas chamando assim uma pergunta com o "id" correspondente ao valor pego nessa variavel
	int perguntaAtual;
	//estadoPesquisa é para verificar se a pergunta já foi escrita ou não para que não haja perguntas repetidas no quiz
	int estadoPesquisa = 0;
	//Também utilizada para pesquisa, o posVet serve para armazenar o valor no vetor de perguntas utilizadas e tambem para mostrar quantas perguntas foram escritas
	int posVet = 0;
	//Vetor onde são guardadas as perguntas já feitas para que não haja repetição de perguntas
	int perguntasUtilizadas[10];
	//Variavel que guarda a resposta do usuario se ele quer continuar ou sair do jogo
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
	
	//Inicio do quiz, só saíra do jogo se o usuario informar a letra S nas boas vindas ou no fim de jogo
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
		//-----------------
		
		//Começo das perguntas para o quiz:
		srand(time(NULL));
		//Enquanto não for feita as 10 perguntas ficará dentro do loop de gerar perguntas
		while (perguntas != 10){
			//Pegando uma pergunta 
			perguntaAtual = rand() % 10;
			
			//Loop que verifica se a pergunta que foi pega ela já foi escrita
			for (int procura = 0; procura < posVet + 1; procura++) {
				//Caso ela ja foi escrita a variavel estadoPesquisa recebe 1 representando que há repetição de pergunta
				if (perguntaAtual == perguntasUtilizadas[procura]){
					estadoPesquisa = 1;
				}
			}
			
			//Se a pergunta não for repetida ele entrará guardando essa pergunta no vetor de perguntas utilizadas e chamando a função de escrever perguntas
			if (estadoPesquisa == 0) {
				perguntasUtilizadas[posVet] = perguntaAtual;
				posVet++;
				//Na função de escrever perguntas é enviado qual o número da questão, em qual número está o jogo do quiz e a pontuação
				Perguntas(perguntaAtual, perguntas, &pontuacao);
				perguntas++;
			}
			//Zera a função de estado da pesquisa
			estadoPesquisa = 0;
		}
		//Após ser feita as dez perguntas será calculado quantos % do quiz o jogador acertou
		porcentagem = (pontuacao / perguntas) * 100;
		//Exibe o fim de jogo com o resultado da pontuação (caso seja maior que 80% ele ganhou senão ele perdeu) e perguntando ao usuario se ele quer jogar novamente
		do{
			system("cls");			
			printf ("Fim de jogo!\n");
			if (porcentagem >= 80 ){
				printf ("Você ganhou com %.2f%% de acertos", porcentagem);
			} else {
				printf ("Você perdeu com %.2f%% de acertos\n", porcentagem);
			}
			printf ("Deseja continuar?\n");
			printf ("[S] - Sair\n");
			printf ("[J] - Jogar novamente\n");
			fflush(stdin);
			continuacao = getch();
			continuacao = toupper(continuacao);
		} while (continuacao != 'S' && continuacao != 'J');
	}
	//Quando acabar o jogo será exibido uma tela de agradecimento e a finalização do jogo
	system("cls");
	printf ("Obrigadooooo! Volte sempre ao nosso quiz\n");
	return 0;
}
