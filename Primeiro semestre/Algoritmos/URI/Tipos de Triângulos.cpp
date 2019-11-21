#include <stdio.h>
int main () {
	double a, b, c, maior, menor, meio, lados[3];
	int i;
	
	for (i = 0; i < 3; i++){
		scanf ("%lf", &lados[i]);
		if (i == 0){
			maior = lados[i];
			meio = lados[i];
			menor = lados[i];
		}else{
			if (lados[i] > maior){
				meio = maior;
				maior = lados[i];
			}
			if (lados[i] < menor){
				meio = menor;
				menor = lados[i];
			}
			if (lados[i] > menor && lados[i] < maior){
				meio = lados[i];
			}
		}
	}

	a = maior;
	b = meio;
	c = menor;
	
	if (a >= b + c){
		printf ("NAO FORMA TRIANGULO\n");
	}else{
		if ((a * a) == (b * b) + (c * c)){
			printf ("TRIANGULO RETANGULO\n");
		}	
	
		if ((a * a) > (b * b) + (c * c)){
			printf ("TRIANGULO OBTUSANGULO\n");
		}
	
		if ((a * a) < (b * b) + (c * c)){
			printf ("TRIANGULO ACUTANGULO\n");
		}
		
		if (a == b && a == c){
			printf ("TRIANGULO EQUILATERO\n");
		}
		if (a == b && a != c){
			printf ("TRIANGULO ISOSCELES\n");
		}
		if (b == c && b != a){
			printf ("TRIANGULO ISOSCELES\n");
		}
		if (a == c && a != b){
			printf ("TRIANGULO ISOSCELES\n");
		}
		
	}
	
	return 0;
}
