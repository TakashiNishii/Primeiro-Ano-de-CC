#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct pilha{
char dado[20];
char dado2[20] ;
struct pilha *prox;
}pilha;

//inser��o na pilha 
pilha *inserir (pilha *topo, char dado[], int d){
	pilha *aux;
	
	aux = (pilha *) malloc (sizeof(pilha));
	
	if (aux == NULL)
		exit (1);
		
	strncpy(aux->dado, dado, 20);
	
	if( d == 0 )
		strncpy(aux->dado2, "e um palindromo", 20);
    else 
    	strncpy(aux->dado2, "nao e um palindromo", 20);
    	
	aux->prox = topo;
	topo = aux;
	
	return topo;
}

//A fun��o que verificar se a palavra � um palindromo
pilha *inverte (char dado[], pilha *P) {
	int a, b, d;
	char c, dado2[20];
	
	//strlen retorna a quantidade de caracteres usados da string
	a = strlen(dado);
	
	//strcpy copia o conte�do de uma string para outra
	    strncpy(dado2, dado, 20);
	
	//invers�o 
    for (b = 0; b<a/2 ; b++){
    	c = dado[b];
    	dado[b] = dado[a-1-b];
		 dado[a-1-b] = c;
	}
    
    
    //Para comparar o conte�do de duas strings, se valor igual a 0 elas s�o iguais
    d = strcmp(dado2, dado);
    
    //igual a zero se dado2 e dado s�o iguais;
    if( d == 0 )
    	printf ("%s e um palindromo\n", dado2); 
    	
    else 
    	printf ("%s nao e um palindromo\n", dado2);
    
    //chama fun��o para armazenar na pilha
  	return inserir (P, dado2, d);
    
   
}




 
 int main (){
	int i, a, retorno;
	char dado[20]; 	
 	pilha *topo;
 	topo = NULL;
	            
	

	
	do{	
		printf("1 - Inserir item\n2 - Mostrar topo\n3 - Sair\n");
		
	//faz com que apenas numeros sejam aceitos.
		while (scanf("%d", &a) != 1){
			static char temp[256];
			fgets(temp, sizeof (temp), stdin);
			
		}	
		
			
	
		switch ( a ) {
		case 1 :
			//� usado o terma de parada o caracter f
			retorno=1;
			while(retorno != 0){
			
				scanf("%s", dado);
				for (i=0;i<20;i++)
					dado[i]=tolower(dado[i]);
							
				retorno = strcmp (dado,"f");
				//se caracter f digitado a fun��o n�o chamada
				if ( retorno != 0)
				    topo = inverte(dado, topo);			
			}
  		break;
  	
  	
 		case 2 :
 			//mostra o dado registrado no topo
  			if (topo == NULL)
				printf("\nPilha Vazia!\n\n");
			else
				printf("%s %s\n", topo->dado, topo->dado2);	
 
 	   	break;
    
    
  		case 3 :
  			// para a fun��o.
			exit (1); 
  	  	break;
    

	  }
	  		
	
	}while(a>0);
}
