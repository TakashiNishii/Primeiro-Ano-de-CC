#include <stdio.h>
#include <math.h>

int main () {
	double a, b, c, delta, r1, r2;
	
	scanf ("%lf", &a);
	scanf ("%lf", &b);
	scanf ("%lf", &c);
	
	delta = (pow(b, 2) - (4 * a * c));
	
	if (a != 0 && delta >= 0){
		r1 = ((b * - 1) + sqrt(delta)) / (2 * a);
		r2 = ((b * - 1) - sqrt(delta)) / (2 * a);
		printf ("R1 = %.5lf\n", r1);
		printf ("R2 = %.5lf\n", r2);
	}else{
		printf ("Impossivel calcular\n");
	}
	
	return 0;
}
