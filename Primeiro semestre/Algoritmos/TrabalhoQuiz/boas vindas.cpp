#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	char sair_cont;
	//função que permite utilizar acentos e caracteres especiais sem a utilização dos numeros da tabela ACII
	setlocale (LC_ALL,"Portuguese");
	
	//Com esses printfs será mostrada a tela de abertura 
	if(sair_cont == 'S'){
		return 0;
	}
	else{
		system("pause");
		system("cls");
	}
	
	printf("kskskss");
	



}
