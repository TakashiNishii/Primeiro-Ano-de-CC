#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

struct informacoes
{
	int numero;
	char teste1[50];
}tes;

int teste(int x, char soldado[50])
{
	int i, fim=0,controle=0, tent=0;
	printf("%s\n", soldado);
	while(fim!=1)
	{
		tent=0;
		for(i=0; i<x; i++)
		{
			if(soldado[i]=='e' && soldado[i-1]=='d')
			{
				soldado[i]='d';
				soldado[i-1]='e';
				tent++;
				if(soldado[i+1]=='e' && i<x)
				{
					i++;
				}		
			}
		}
		if(tent!=0)
		{
			controle++;
			printf("%s\n", soldado);
		}
		else
		{
			fim=1;
		}
	}
	return controle+1;
}

int numero()
{
	int x;
	scanf("%d", &x);
	return x;
}

int main()
{
	int opc,rpt,mexidas;
	struct informacoes infor[20];
	rpt=0;
	
	scanf("%i", &opc);
	
	while(rpt!=opc)
	{
		infor[rpt].numero=numero();	
		fflush(stdin);
		scanf("%s", infor[rpt].teste1);
		rpt=rpt+1;
	}
	rpt=0;
	system("cls");
	while(rpt!=opc)
	{
		mexidas=teste(infor[rpt].numero,infor[rpt].teste1);
		printf("numero de mudanca: %i\n", mexidas);
		rpt=rpt+1;
	}
	
	return 0;
}
