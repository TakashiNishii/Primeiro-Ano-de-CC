#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float nota1,nota2,nota3,media=1;
	
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nInforme a segunda nota: ");
	scanf("%f", &nota2);
	printf("\nInforme a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	if(media>=0 && media<=5){
		printf("A sua m�dia �: %.2f e o seu conceito �: E",media);
	}else if(media>5 && media<=6){
		printf("A sua m�dia �: %.2f e o seu conceito �: D",media);
	}else if(media>6 && media<=7){
		printf("A sua m�dia �: %.2f e o seu conceito �: C",media);
	}else if(media>7 && media<=8){
		printf("A sua m�dia �: %.2f e o seu conceito �: B",media);
	}else if(media>8 && media<=10){
		printf("A sua m�dia �: %.2f e o seu conceito �: A",media);
	}else{
		printf("A m�dia est� invalida (maior que 10 ou menor que 0)");
	}
	
	return 0;
}
