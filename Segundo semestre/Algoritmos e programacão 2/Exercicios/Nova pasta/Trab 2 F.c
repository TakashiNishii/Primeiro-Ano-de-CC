#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Registro de c�lula
typedef struct no {
  int info;
  struct no* prox;
}no;

//cria o n�
no* cria_no (void) {
  return NULL;
}

//funcao que insere o valor 
no* inserir (no* lst, int v) {
  no* novo = (no*) malloc(sizeof(no));
  novo->info = v;
  novo->prox = lst;
  return novo;
}
 
//Funcao que compara o valores de L1 e L2 
void Comparar(no * l1, no * l2) {
	while ((l1 != NULL) && (l2 != NULL) && (l1->info == l2->info)){	
		l1= l1->prox;
		l2= l2->prox;
	}
	//comparando se h� igualdade ou n�o
	if (l1 == l2)
		printf("\nAs duas listas s�o iguais\n");
	else printf("\nDiferentes.\n");
}
   
int main (void){
  setlocale(LC_ALL,"portuguese");
  
  no* lst1; 
  no* lst2; 
  int n1, n2;

  lst1 = cria_no();
  lst2 = cria_no(); 
  //informa os valores de n1 e n2 at� que o usuario digite um valor diferente
  do{
  	printf("\nInforme um valor da lista 1: ");
  	//usuario informando n1
  	scanf("%d", &n1);
  	//passando valores de n1 para o lst1
  	lst1 = inserir(lst1, n1); 
  	
  	printf("Informe um valor da lista 2: ");
  	//usuario informando n2
  	scanf("%d", &n2);
  	//passando valores de n2 para o lst2
  	lst2 = inserir(lst2, n2); 
  	//chamando a func�o comparar 
	Comparar(lst1,lst2);
  
  }while (n1 == n2);//a parada � quando o mesmo n�mero de elementos s�o iguais e os valores diferentes
}
