#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int A[10], B[10], C[10], pos;
	
	//Entrada de dados nos vetores A e B
	for (pos = 0; pos < 10; pos++) {
		printf ("Digite o valor %d do vetor A: ", pos + 1);
		scanf ("%d", &A[pos]);
		printf ("Digite o valor %d do vetor B: ", pos + 1);
		scanf ("%d", &B[pos]);
	}
	
	//Calculando e colocando valores no vetor C:
	for (pos = 0; pos < 10; pos++) {
		C[pos] = A[pos] - B[pos];
		printf ("%d ", C[pos]);
	}
	
	return 0;
}
