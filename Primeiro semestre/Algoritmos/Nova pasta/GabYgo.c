/*Alunos: Gabriel Silverson Gomes e Ygor Takashi Nishi
Trabalho 2 da matéria de algoritmos e programação 1
Professora: Yorah Bosse
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Struct que guarda quantidade de soldados para a escrita das posições e receberá quantidade de alteração para o cálculo da média no final
//Já o vetor pos é para ser informado a direção do soldado.
struct testesSoldados{
	int quantSoldados;
	int numAlteracao;
	char pos[50];	
};
//Função que escrevera os ajustes, nele recebe como parametro um ponteiro para o vetor de posições e um int que recebe a quantidade de tropas
void escrevePos(char *pos, int tropas){
	//Vetor criado para armazenar as direções dos soldados na quantidade que o usuario informou
	char infoPos[tropas];
	//Variavel para auxiliar na escrita do vetor
	int i;
	
	fflush(stdin);
	scanf("%s", infoPos);
	//Esse for serve para verificar se foi informada alguma direção invalida
	for(i = 0; i < tropas; i++){
		//Os dois proximos ifs é para se caso o usuario informar a letra em minuscula e assim ser transformada em maiuscula
		if (infoPos[i] == 100){
			infoPos[i] = 68;	
		}
		
		if (infoPos[i] == 101){
			infoPos[i] = 69;
		}
		//Já esse if será caso não seja uma direção válida, então será informado ao usuario que a posição do soldado número tal precisa ser mudada
		if (infoPos[i]!= 'E' && infoPos[i]!= 'D'){
			printf ("A posicao do soldado numero %d é invalida, informe novamente: ", i+1);
			do{
				fflush(stdin);
				scanf("%c", &infoPos[i]);
			}while(infoPos[i]!= 'E' && infoPos[i]!= 'D');
		}
	}
	//Aqui o ponteiro que recebe o vetor da main mudará os valores com os do vetor da função atual
	for(i = 0; i < tropas; i++){
		pos[i] = infoPos[i];
	}
	
}

//Função que mostra os movimentos da tropa e a quantidade de movimentos que foram feitos, tem como parametro a quantidade de tropas, uma String com as posições
// 2 ponteiros onde um serve para guardar o numero de movimentos naquele teste e outro que acumula o numero de movimento de TODOS os movimentos para o calculo da media
void calcPos (int quantidade, char posicoes[50], int *Alteracoes, int *acumulaAlteracoes) {
	//Num será para armazenar a quantidade de movimentos que foram realizadas, Cont será um contador para verificar se houve alteração de um movimento para outro se caso não
	// tenha nenhuma alteração então o teste acabou, i serve para auxiliar na modificação do vetor de posicoes dos soldados e o estadoVerifica é para acabar o loop de alterações
	int num = 1, cont, i = 0, estadoVerifica = 0;
	
	//Loop que faz as alterações enquanto a variavel for igual a 0 há chances de ter uma modificação
	while (estadoVerifica == 0){
		//A contadora de movimentos é resetada a cada alteração
		cont = 0;
		//Enquanto não verificar todos os soldados e seus movimentos irá fazer as seguintes ações
		for(i = 0; i < quantidade; i++){
			//Se a posição do primeiro soldado for esquerda ele nunca irá se mover, mas se for outros pode ser que sim então
			//caso a posição do soldado é para a esquerda e ele não é o primeiro
			if(posicoes[i] == 'E' && i != 0){
				//Irá ser verificado se o anterior está virado pra ele, se sim será alterado a posições dos dois
				if(posicoes[i-1] == 'D') {
					posicoes[i] = 'D';
					posicoes[i-1] = 'E';
					//Aumenta no contador a quantidade de movimentos
					cont++;
					//E se caso o próximo soldado pode ocorrer um movimento denovo ele será pulado pois esse movimento só pode ocorrer na proxima alteração,
					//verifica tambem se não está no ultimo soldado
					if(posicoes[i+1] == 'E' && i + 1 <= quantidade - 1){
						i++;
					}
				}
			}		
			//Se a posição do ultimo soldado for direita ele nunca irá se mover, mas se for outros pode ser que sim então
			//caso a posição do soldado é para a direita e ele não é o ultimo
			if(posicoes[i] == 'D' && i != quantidade - 1){
				//Irá ser verificado se o proximo está virado pra ele, se sim será alterado a posições dos dois
				if(posicoes[i+1] == 'E'){
					posicoes[i] = 'E';
					posicoes[i+1] = 'D';
					cont++;
					//E se caso o próximo do proximo soldado pode ocorrer um movimento denovo ele será pulado pois esse movimento só pode ocorrer na proxima alteração,
					//verifica tambem se não está no ultimo soldado
					if(posicoes[i+2] == 'E' && i + 2 <= quantidade - 1){
						i = i + 2;
					}
				}
			}
		}
		//Se o número de movimentos nessa alteração for 0 ele acaba o teste ali modificando o valor do estadoVerifica, senão soma mais um na quantidade de alterações e mostra
		//para o usuario como estão as direções das tropas naquela alteração
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
	//No final mostra a quantidade de alterações e envia nos ponteiros os resultados desse teste.
	printf("%d\n\n", num);
	*Alteracoes = num;
	*acumulaAlteracoes = *acumulaAlteracoes + num;
}

int main(){
	setlocale (LC_ALL, "Portuguese");
	//Cria um vetor da struct que irá armazenar os valores sobre cada teste:
	struct testesSoldados infoTeste[20];
	//Numero de teste como o próprio nome da variavel já diz guardará quantas vezes o usuario fará os testes.
	// a variavel i está ajudando a colocar voleres no vetor de teste, acumulaAlteracoes está por pegar o tempo para a realizacao dos testes.
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
	
	// Este for é responsavel pela saida de dados do programa, mostrando em qual teste esta e os movimentos que foram feitos.
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
