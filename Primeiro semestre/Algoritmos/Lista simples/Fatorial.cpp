#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, contador=1, acumulador=1;
	float g=1,e=1,resultado=1,fatorial;
	
	printf("Informe o n�mero desejado: ");
	scanf("%d", &n);
	
	while (contador<=n){
		fatorial = 1;
		acumulador = 1;
		while (acumulador<=contador){
			fatorial = fatorial*acumulador;
			acumulador++;
		}
		resultado = g/fatorial;
		e = resultado + e;
		contador++;
	}	
	printf("O valor das somas de 1 dividido at� o fatorial do numero informado �: %.2f", e);
}
