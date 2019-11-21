//trabalho 2 História Esquerda volver
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

//inicio da função de leitura e trocar de vetores
char Soldados()
{
	//registro ou membro da struct
	struct{
		//variaveis necessarias para a função
		int x,y,aux,j;
		
	}tab;
	//laço de repetição para fazer a leitura do teclado (vetor)
	for(tab.y=0;tab.y<1;tab.y++){
		//laço de repetição para fazer a leitura do teclado (vetor)
		for(tab.x=0;tab.x<quant;tab.x++){
			//laço de repetiçao para limitar o usuario a digitar somente as letra D e E.
			do{
				//limpa buffer do teclado
				fflush(stdin);
				//faz a leitura do teclado sem precisar que o usuario digite enter e mantem a palavra escrita na tela
				sold[tab.y][tab.x]=getche();
				//transfoma as letras digitadas em maiuscula
				sold[tab.y][tab.x]=toupper(sold[tab.y][tab.x]);
				//laço para informar o usuario caso ele digite uma letra diferente da solicitada
					if(sold[tab.y][tab.x] != 'E' && sold[tab.y][tab.x] != 'D')
						printf("\n\nLetra diferente de [D] e [E]\n\n");
					
				}while(sold[tab.y][tab.x] != 'E' && sold[tab.y][tab.x] != 'D');
		
		}
	}
	//pula linha
	printf("\n");
	//laço de repetição fomar a string
    for(tab.y=0;tab.y<teste;tab.y++){
		for(tab.x=0;tab.x<quant;tab.x++){
		   printf("%c", sold[tab.y][tab.x]); 
		
		}
	}
	//repetição para fazer a comparaçao da string
	z=0;
	for(tab.j=0;tab.j<quant;tab.j++)
	{
		//laço repetição para fazer a comparaçao da string
		for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
		{	//laço seleçao para fazer a comparaçao da string
			if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
			{
				//faz a troca das posiçoes
				tab.aux = sold[0][tab.x];
				sold[0][tab.x]=sold[0][tab.y];
				sold[0][tab.y]=tab.aux;
				//contador de troca
				z++;
				//pula linha
				printf("\n");
				//laço de repetição para formar a string
				for(tab.x=0;tab.x<quant;tab.x++)
				printf("%c", sold[0][tab.x]);
			}else//laço seleçao para fazer a comparaçao da string
				if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'D')
				{//laço repetiçao para fazer a comparaçao da string
					for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
					{//laço seleçao para fazer a comparaçao da string
						if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
						{   //faz a troca das posiçoes
							tab.aux = sold[0][tab.x];
							sold[0][tab.x]=sold[0][tab.y];
							sold[0][tab.y]=tab.aux;
							//contador de troca
							z++;
							//pula linha
							printf("\n");
							//laço de repetição para formar a string
							for(tab.x=0;tab.x<quant;tab.x++)
							printf("%c", sold[0][tab.x]);
						}
					}
				}else//laço seleçao para fazer a comparaçao da string
					if(sold[0][tab.x] == 'E' && sold[0][tab.y] == 'D')
					{//laço repetiçao para fazer a comparaçao da string
						for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
						{ //laço seleção para fazer a comparação da string
							if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
							{	//faz a troca das posições
								tab.aux = sold[0][tab.x];
								sold[0][tab.x]=sold[0][tab.y];
								sold[0][tab.y]=tab.aux;
								//contador de troca
								z++;
								//pula linha
								printf("\n");
								//laço de repetição para formar a string
								for(tab.x=0;tab.x<quant;tab.x++)
								printf("%c", sold[0][tab.x]);
							}
						}
						
					}else
						{	//laço repetiçao para fazer a comparaçao da string
							for(tab.x=0,tab.y=1;tab.x<quant,tab.y<quant;tab.x++,tab.y++)
							{	//laço seleção para fazer a comparação da string
								if(	sold[0][tab.x] == 'D' && sold[0][tab.y] == 'E')
								{	//faz a troca das posições
									tab.aux = sold[0][tab.x];
									sold[0][tab.x]=sold[0][tab.y];
									sold[0][tab.y]=tab.aux;
									//contador de troca
									z++;
									//pula linha
									printf("\n");
									//laço de repetição para formar a string
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
	{	//variáveis
		int rep;	
	}tab;
	//pede na tela a quantidade de testes
	printf("Digite a quantidade de teste: \n");
	//faz a leitura do teclado
	scanf ("%d", &teste);
	//laço de repetição (repete conforme a quantidade de testes
		for(tab.rep=0;tab.rep<teste;tab.rep++)
		{	//limita o usuario a digitar somente numeros entre 1 e 20
			do
			{
				printf("\ndigite a quantidade de soldados: \n");
				scanf ("%d", &quant);
			}while(quant<1 || quant > 20);
			//pede na rela a posição dos soldados 
			printf("\ndigite a ordem dos soldados: \n");
			//chamada da função
			Soldados();
		}
		
	
		
//retorno  funçao principal
return 0;
}
