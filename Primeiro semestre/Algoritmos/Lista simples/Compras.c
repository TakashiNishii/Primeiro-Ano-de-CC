/*Faça um programa de supermercado onde informe N quilos de café comprados onde seu preço unitario é Q
L litros de leite e o custo unitario é P, B quilos de banana e o custo unitario é T. Faça que no final mostre ao usuario
o nome do produto, total gasto com cada produto e o gasto total*/
#include <stdio.h>
#include <stdlib.h>

int main(){
//    Criacao de variaveis
	float N,Q,L,P,B,T,valorf;	
//     Colocando valores nas variaveis	
	printf("Informe o pre%c unit%crio do caf%c: ",135,160,130);
	scanf("%f", &Q);
	printf("Informe quantos quilos de caf%c foi comprado: ",130);
	scanf("%f", &N);	
	printf("Informe o pre%co unit%crio do leite: ",135,160);
	scanf("%f", &P);
	printf("Informe quantos litros de leite foi comprado: ");
	scanf("%f", &L);
	printf("Informe o pre%co unit%crio da banana: ",135,160);
	scanf("%f", &T);
	printf("Informe quantos quilos de banana foi comprado: ");
	scanf("%f", &B);
	
//  Calculos para os valores dos produtos e guardar nas variaveis:
    N = N*Q;	
	L = L*P;
	B = B*T;
	
	valorf = N+L+B;
	
	printf("Conta: \n");
	printf("Caf%c: R$ %.2f \n",130,N);
    printf("Leite: R$ %.2f \n",L);
    printf("Banana: R$ %.2f \n",B);
    printf("-----------------------");
    printf("Valor total: R$ %.2f \n",valorf);
	
	system("pause");
	return 0;
}
