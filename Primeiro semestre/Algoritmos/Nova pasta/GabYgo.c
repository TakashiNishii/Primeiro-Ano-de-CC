/*Alunos: Gabriel Silverson Gomes e Ygor Takashi Nishi
Trabalho 2 da mat�ria de algoritmos e programa��o 1
Professora: Yorah Bosse
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Struct que guarda quantidade de soldados para a escrita das posi��es e receber� quantidade de altera��o para o c�lculo da m�dia no final
//J� o vetor pos � para ser informado a dire��o do soldado.
struct testesSoldados{
	int quantSoldados;
	int numAlteracao;
	char pos[50];	
};
//Fun��o que escrevera os ajustes, nele recebe como parametro um ponteiro para o vetor de posi��es e um int que recebe a quantidade de tropas
void escrevePos(char *pos, int tropas){
	//Vetor criado para armazenar as dire��es dos soldados na quantidade que o usuario informou
	char infoPos[tropas];
	//Variavel para auxiliar na escrita do vetor
	int i;
	
	fflush(stdin);
	scanf("%s", infoPos);
	//Esse for serve para verificar se foi informada alguma dire��o invalida
	for(i = 0; i < tropas; i++){
		//Os dois proximos ifs � para se caso o usuario informar a letra em minuscula e assim ser transformada em maiuscula
		if (infoPos[i] == 100){
			infoPos[i] = 68;	
		}
		
		if (infoPos[i] == 101){
			infoPos[i] = 69;
		}
		//J� esse if ser� caso n�o seja uma dire��o v�lida, ent�o ser� informado ao usuario que a posi��o do soldado n�mero tal precisa ser mudada
		if (infoPos[i]!= 'E' && infoPos[i]!= 'D'){
			printf ("A posicao do soldado numero %d � invalida, informe novamente: ", i+1);
			do{
				fflush(stdin);
				scanf("%c", &infoPos[i]);
			}while(infoPos[i]!= 'E' && infoPos[i]!= 'D');
		}
	}
	//Aqui o ponteiro que recebe o vetor da main mudar� os valores com os do vetor da fun��o atual
	for(i = 0; i < tropas; i++){
		pos[i] = infoPos[i];
	}
	
}

//Fun��o que mostra os movimentos da tropa e a quantidade de movimentos que foram feitos, tem como parametro a quantidade de tropas, uma String com as posi��es
// 2 ponteiros onde um serve para guardar o numero de movimentos naquele teste e outro que acumula o numero de movimento de TODOS os movimentos para o calculo da media
void calcPos (int quantidade, char posicoes[50], int *Alteracoes, int *acumulaAlteracoes) {
	//Num ser� para armazenar a quantidade de movimentos que foram realizadas, Cont ser� um contador para verificar se houve altera��o de um movimento para outro se caso n�o
	// tenha nenhuma altera��o ent�o o teste acabou, i serve para auxiliar na modifica��o do vetor de posicoes dos soldados e o estadoVerifica � para acabar o loop de altera��es
	int num = 1, cont, i = 0, estadoVerifica = 0;
	
	//Loop que faz as altera��es enquanto a variavel for igual a 0 h� chances de ter uma modifica��o
	while (estadoVerifica == 0){
		//A contadora de movimentos � resetada a cada altera��o
		cont = 0;
		//Enquanto n�o verificar todos os soldados e seus movimentos ir� fazer as seguintes a��es
		for(i = 0; i < quantidade; i++){
			//Se a posi��o do primeiro soldado for esquerda ele nunca ir� se mover, mas se for outros pode ser que sim ent�o
			//caso a posi��o do soldado � para a esquerda e ele n�o � o primeiro
			if(posicoes[i] == 'E' && i != 0){
				//Ir� ser verificado se o anterior est� virado pra ele, se sim ser� alterado a posi��es dos dois
				if(posicoes[i-1] == 'D') {
					posicoes[i] = 'D';
					posicoes[i-1] = 'E';
					//Aumenta no contador a quantidade de movimentos
					cont++;
					//E se caso o pr�ximo soldado pode ocorrer um movimento denovo ele ser� pulado pois esse movimento s� pode ocorrer na proxima altera��o,
					//verifica tambem se n�o est� no ultimo soldado
					if(posicoes[i+1] == 'E' && i + 1 <= quantidade - 1){
						i++;
					}
				}
			}		
			//Se a posi��o do ultimo soldado for direita ele nunca ir� se mover, mas se for outros pode ser que sim ent�o
			//caso a posi��o do soldado � para a direita e ele n�o � o ultimo
			if(posicoes[i] == 'D' && i != quantidade - 1){
				//Ir� ser verificado se o proximo est� virado pra ele, se sim ser� alterado a posi��es dos dois
				if(posicoes[i+1] == 'E'){
					posicoes[i] = 'E';
					posicoes[i+1] = 'D';
					cont++;
					//E se caso o pr�ximo do proximo soldado pode ocorrer um movimento denovo ele ser� pulado pois esse movimento s� pode ocorrer na proxima altera��o,
					//verifica tambem se n�o est� no ultimo soldado
					if(posicoes[i+2] == 'E' && i + 2 <= quantidade - 1){
						i = i + 2;
					}
				}
			}
		}
		//Se o n�mero de movimentos nessa altera��o for 0 ele acaba o teste ali modificando o valor do estadoVerifica, sen�o soma mais um na quantidade de altera��es e mostra
		//para o usuario como est�o as dire��es das tropas naquela altera��o
		if(cont == 0){
			estadoVerifica = 1;
		}else{
			num++;
			for(i = 0; i < quantidade; i++){
				printf("%c", posicoes[i]);
			}
			printf("\n");
		}
	}
	//No final mostra a quantidade de altera��es e envia nos ponteiros os resultados desse teste.
	printf("%d\n\n", num);
	*Alteracoes = num;
	*acumulaAlteracoes = *acumulaAlteracoes + num;
}

int main(){
	setlocale (LC_ALL, "Portuguese");
	//Cria um vetor da struct que ir� armazenar os valores sobre cada teste:
	struct testesSoldados infoTeste[20];
	//Numero de teste como o pr�prio nome da variavel j� diz guardar� quantas vezes o usuario far� os testes.
	// a variavel i est� ajudando a colocar voleres no vetor de teste, acumulaAlteracoes est� por pegar o tempo para a realizacao dos testes.
	// A media pegara todos os valores do acumulaAlteracoes e dividira pera quantidade de testes, e assim verificando quais testes tiveram um tempo de realizacao maior do que a media. 
	int numTeste, i, verifica, acumulaAlteracoes = 0; 
	float media;
	
	//Para ler a quantidade de testes que foram feitas.
	do{
		scanf ("%d", &numTeste);
	}while (numTeste < 0 || numTeste > 20);
	
	//Este for esta responsavel por pegar as informacoes de cada teste.
	for (i = 0; i < numTeste; i++){
		do{
			scanf ("%d", &infoTeste[i].quantSoldados);
		}while (infoTeste[i].quantSoldados <= 0 || infoTeste[i].quantSoldados > 50);
		//esta chamando a funcao escrevePos para o usuario informar as posicoes das tropas.
		escrevePos(infoTeste[i].pos, infoTeste[i].quantSoldados);	
	}
	
	system("cls");
	
	// Este for � responsavel pela saida de dados do programa, mostrando em qual teste esta e os movimentos que foram feitos.
	for (i = 0; i < numTeste; i++) {
		printf ("\nTeste %d:\n", i+1);
		for (verifica = 0; verifica < infoTeste[i].quantSoldados; verifica++){
			printf ("%c", infoTeste[i].pos[verifica]);
		}
		printf("\n");
		infoTeste[i].numAlteracao = 0;
		// Chama a funcao calcPos para mostrar ao usuario os movimentos que foram feitos, e quantidade de movimentos.
		calcPos(infoTeste[i].quantSoldados, infoTeste[i].pos, &infoTeste[i].numAlteracao, &acumulaAlteracoes);
	}
	

	//Calcula a media de tempo para a realizacao dos testes.
	media = acumulaAlteracoes/numTeste;
		
	//Compara quais testes tem o tempo de realizacao maior que a media e mostra ao usuario.
	for (i = 0; i < numTeste; i++){
		if (infoTeste[i].numAlteracao > media){
			printf("%d ", i + 1);
		}
	}
	return 0;
}
