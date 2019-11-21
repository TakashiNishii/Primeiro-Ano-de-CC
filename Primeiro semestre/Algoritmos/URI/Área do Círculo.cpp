#include <stdio.h>
int main (){
	double p = 3.14159, area, raio;
	
	scanf("%lf", &raio);
	
	area = (raio * raio) * p;
	
	printf("A=%.4lf\n", area);
	
	return 0;
}
