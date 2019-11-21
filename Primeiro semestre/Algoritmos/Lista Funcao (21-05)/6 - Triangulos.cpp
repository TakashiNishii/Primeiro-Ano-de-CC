#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tipoTriangulo(int X, int Y, int Z) {
	if (X > (Y+Z) || Y > (X+Z) || Z > (X+Y)) {
		printf ("Não é um triângulo");
	}else{
		if (X != Y && Y != Z && Z != X){
			printf ("É um triângulo escaleno");
		} else if (X == Y && Y == Z){
			printf ("É um triângulo equilátero");
		} else {
			printf ("É um triângulo isósceles");
		}
	}
} 

int main () {
	setlocale(LC_ALL, "Portuguese");
	int ladoA, ladoB, ladoC;
	
	printf ("Informe os lados do triângulo: ");
	scanf ("%d %d %d", &ladoA, &ladoB, &ladoC);
	
	tipoTriangulo(ladoA, ladoB, ladoC);
	
	
	return 0;
}
