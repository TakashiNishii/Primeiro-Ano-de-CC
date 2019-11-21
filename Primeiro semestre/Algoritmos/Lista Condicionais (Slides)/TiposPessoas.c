#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float altura, peso;
	
	printf("Informe a sua altura: ");
	scanf("%f",&altura);
	printf("\nInforme o seu peso: ");
	scanf("%f",&peso);
	
	if(peso<=60){
		if(altura<1.20){
			printf("Você é uma pessoa do tipo: A");
		}else if(altura>1.20 && altura<1.70){
			printf("Você é uma pessoa do tipo: B");
		} else{
			printf("Você é uma pessoa do tipo: C");
		}
	}else if(peso>60 && peso<=90){
		if(altura<1.20){
			printf("Você é uma pessoa do tipo: D");
		}else if(altura>1.20 && altura<1.70){
			printf("Você é uma pessoa do tipo: E");
		} else{
			printf("Você é uma pessoa do tipo: F");
		}
	} else{
		if(altura<1.20){
			printf("Você é uma pessoa do tipo: G");
		}else if(altura>1.20 && altura<1.70){
			printf("Você é uma pessoa do tipo: H");
		} else{
			printf("Você é uma pessoa do tipo: I");
		}
	}	
	
	
	
	return 0;
}
