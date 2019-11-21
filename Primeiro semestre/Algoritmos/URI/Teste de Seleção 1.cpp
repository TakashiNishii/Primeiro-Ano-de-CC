#include <stdio.h>

int main () {
	int A, B, C, D;
	
	scanf ("%d", &A);
	scanf ("%d", &B);
	scanf ("%d", &C);
	scanf ("%d", &D);
	
	if (A % 2 == 0 && C > 0 && D > 0 && A + B < C + D && B > C && D > A){
		printf ("Valores aceitos\n");
	}else{
		printf ("Valores nao aceitos\n");
	}
	
	return 0;
}
