#include <stdio.h>
int main () {
	double A, B, C, pi = 3.14159, areaA, areaB, areaC, areaD, areaE;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	//Calculo A:
	areaA = (A * C) / 2;
	//Calculo B:
	areaB = pi * (C * C);
	//Calculo C:
	areaC = ((A + B) * C) / 2;
	//Calculo D:
	areaD = B * B;
	//Calculo E:
	areaE = A * B;
	
	printf("TRIANGULO: %.3lf\n", areaA);
	printf("CIRCULO: %.3lf\n", areaB);
	printf("TRAPEZIO: %.3lf\n", areaC);
	printf("QUADRADO: %.3lf\n", areaD);
	printf("RETANGULO: %.3lf\n", areaE);
	
	return 0;
}
