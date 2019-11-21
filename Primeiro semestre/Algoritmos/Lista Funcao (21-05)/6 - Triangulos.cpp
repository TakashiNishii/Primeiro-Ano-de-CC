#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tipoTriangulo(int X, int Y, int Z) {
	if (X > (Y+Z) || Y > (X+Z) || Z > (X+Y)) {
		printf ("N�o � um tri�ngulo");
	}else{
		if (X != Y && Y != Z && Z != X){
			printf ("� um tri�ngulo escaleno");
		} else if (X == Y && Y == Z){
			printf ("� um tri�ngulo equil�tero");
		} else {
			printf ("� um tri�ngulo is�sceles");
		}
	}
} 

int main () {
	setlocale(LC_ALL, "Portuguese");
	int ladoA, ladoB, ladoC;
	
	printf ("Informe os lados do tri�ngulo: ");
	scanf ("%d %d %d", &ladoA, &ladoB, &ladoC);
	
	tipoTriangulo(ladoA, ladoB, ladoC);
	
	
	return 0;
}
