#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//A função para calcular a distancia euclidiana pega valores x e y dos dois pontos:
float dist (int vx1, int vx2, int vy1, int vy2) {
	float distancia;
	distancia = ((vx1-vx2)*(vx1-vx2))+((vy1-vy2)*(vy1-vy2));
	distancia = sqrt(distancia);
	return distancia; 
}

int main () {
	setlocale (LC_ALL, "Portuguese");
	int X1, X2, Y1, Y2;
	
	printf ("Digite o ponto X do primeiro ponto: ");
	scanf ("%d", &X1);
	printf ("Digite o ponto Y do primeiro ponto: ");
	scanf ("%d", &Y1);
	printf ("Digite o ponto X do segundo ponto: ");
	scanf ("%d", &X2);
	printf ("Digite o ponto Y do segundo ponto: ");
	scanf ("%d", &Y2);
	
	printf ("A distancia euclidiana entre os dois pontos é %.2f", dist(X1, X2, Y1, Y2));
	
}
