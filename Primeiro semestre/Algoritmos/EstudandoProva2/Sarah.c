//trabalho 2 Hist�ria Esquerda volver
//autores Sarah Beatriz Araujo e Thainara Orneles Matos
//bibliotecas necessarias para inicializar o programa
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <locale.h>
//variaveis globais
int quant,teste,z,media=-1,m;
//variaveis globais
char sold[50][20];

//inicio da fun��o de leitura e trocar de vetores
char Soldados()
{
	//registro ou membro da struct
	struct{
		//variaveis necessarias para a fun��o
		int x,y,aux,j;
		
	}tab;
	//la�o de repeti��o para fazer a leitura do teclado (vetor)
	for(tab.y=0;tab.y<1;tab.y++){
		//la�o de repeti��o para fazer a leitura do teclado (vetor)
		for(tab.x=0;tab.x<quant;tab.x++){
			//la�o de repeti�ao para limitar o usuario a digitar somente as letra D e E.
			do{
				//limpa buffer do teclado
				fflush(stdin);
				//faz a leitura do teclado sem precisar que o usuario digite enter e mantem a palavra escrita na tela
				sold[tab.y][tab.x]=getche();
				//transfoma as letras digitadas em maiuscula
				sold[tab.y][tab.x]=toupper(sold[tab.y][tab.x]);
				//la�o para informar o usuario caso ele digite uma letra diferente da solicitada
					if(sold[tab.y][tab.x] != 'E' && sold[tab.y][tab.x] != 'D')
						printf("\n\nLetra diferente de [D] e [E]\n\n");
					
				}while(sold[tab.y][tab.x] != 'E' && sold[tab.y][tab.x] != 'D');
		
		}
	}
	//pula linha
	printf("\n");
	//la�o de repeti��o fomar a string
    for(tab.y=0;tab.y<teste;tab.y++){
		for(tab.x=0;tab.x<quant;tab.x++){
		   printf("%c", sold[tab.y][tab.x]); 
		
		}
	}
	//repeti��o para fazer a compara�ao da string
	z=0;
	for(tab.j=0;tab.j<quant;tab.j++)
	{
		//la�o repeti��o para fazer a compara�ao da string
		for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
		{	//la�o sele�ao para fazer a compara�ao da string
			if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
			{
				//faz a troca das posi�oes
				tab.aux = sold[0][tab.x];
				sold[0][tab.x]=sold[0][tab.y];
				sold[0][tab.y]=tab.aux;
				//contador de troca
				z++;
				//pula linha
				printf("\n");
				//la�o de repeti��o para formar a string
				for(tab.x=0;tab.x<quant;tab.x++)
				printf("%c", sold[0][tab.x]);
			}else//la�o sele�ao para fazer a compara�ao da string
				if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'D')
				{//la�o repeti�ao para fazer a compara�ao da string
					for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
					{//la�o sele�ao para fazer a compara�ao da string
						if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
						{   //faz a troca das posi�oes
							tab.aux = sold[0][tab.x];
							sold[0][tab.x]=sold[0][tab.y];
							sold[0][tab.y]=tab.aux;
							//contador de troca
							z++;
							//pula linha
							printf("\n");
							//la�o de repeti��o para formar a string
							for(tab.x=0;tab.x<quant;tab.x++)
							printf("%c", sold[0][tab.x]);
						}
					}
				}else//la�o sele�ao para fazer a compara�ao da string
					if(sold[0][tab.x] == 'E' && sold[0][tab.y] == 'D')
					{//la�o repeti�ao para fazer a compara�ao da string
						for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
						{ //la�o sele��o para fazer a compara��o da string
							if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
							{	//faz a troca das posi��es
								tab.aux = sold[0][tab.x];
								sold[0][tab.x]=sold[0][tab.y];
								sold[0][tab.y]=tab.aux;
								//contador de troca
								z++;
								//pula linha
								printf("\n");
								//la�o de repeti��o para formar a string
								for(tab.x=0;tab.x<quant;tab.x++)
								printf("%c", sold[0][tab.x]);
							}
						}
						
					}else
						{	//la�o repeti�ao para fazer a compara�ao da string
							for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
							{	//la�o sele��o para fazer a compara��o da string
								if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
								{	//faz a troca das posi��es
									tab.aux = sold[0][tab.x];
									sold[0][tab.x]=sold[0][tab.y];
									sold[0][tab.y]=tab.aux;
									//contador de troca
									z++;
									//pula linha
									printf("\n");
									//la�o de repeti��o para formar a string
									for(tab.x=0;tab.x<quant;tab.x++)
									printf("%c", sold[0][tab.x]);
									
								}
							
						}
					}
					
						
		}
		
		
	}
	
	//mostra na tela o tempo gasto 
	printf("\ntempo gasto:%d ",z);
	
}
// programa principal
int main()
{
	//registro de variaveis ou struct de variaveis
	struct dados
	{	//vari�veis
		int rep;	
	}tab;
	//pede na tela a quantidade de testes
	printf("Digite a quantidade de teste: \n");
	//faz a leitura do teclado
	scanf ("%d", &teste);
	//la�o de repeti��o (repete conforme a quantidade de testes
		for(tab.rep=0;tab.rep<teste;tab.rep++)
		{	//limita o usuario a digitar somente numeros entre 1 e 20
			do
			{
				printf("\ndigite a quantidade de soldados: \n");
				scanf ("%d", &quant);
			}while(quant<1 || quant > 20);
			//pede na rela a posi��o dos soldados 
			printf("\ndigite a ordem dos soldados: \n");
			//chamada da fun��o
			Soldados();
		}
		
	
		
//retorno  fun�ao principal
return 0;
}
