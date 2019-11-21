#include <stdio.h>
int main (){
	char nome[20];
	double salarioFixo, adicional;

	scanf ("%s", nome);
	scanf ("%lf", &salarioFixo);
	scanf ("%lf", &adicional);
	
	adicional = (adicional * 15)/100;
	
	printf ("TOTAL = R$ %.2lf\n", salarioFixo + adicional);
	return 0;
}
