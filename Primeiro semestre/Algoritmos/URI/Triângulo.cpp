#include <stdio.h>

int main () {
	float a, b, c, calculo;
	
	scanf ("%f", &a);
	scanf ("%f", &b);
	scanf ("%f", &c);
	
	if (a < (b + c) && b < (a + c) && c < (a + c)){
		calculo = a + b+ c;
		printf ("Perimetro = %.1f\n", calculo);
	}else{
		calculo = ((a + b) * c ) / 2;
		printf ("Area = %.1f\n", calculo);
	}
	return 0;
}
