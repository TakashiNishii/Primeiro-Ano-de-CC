#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale(LC_ALL,"Portuguese");
	int A[6], pos, soma;
	//Colocando valores no vetor:
	A[0] = 1;
	A[1] = 0;
	A[2] = 5;
	A[3] = -2;
	A[4] = -5;
	A[5] = 7;
	
	//Colocando os valores do vetor que estão nas posi na variavel soma e mostrando esse valor:
	soma = A[0] + A[1] + A[5];
	printf ("%d\n", soma);
	
	//Alterando o valor do vetor na posição 4:
	A[3] = 100;
	
	for (pos = 0; pos < 6; pos++) {
		printf ("%d\n", A[pos]);
	}
	return 0;
}
