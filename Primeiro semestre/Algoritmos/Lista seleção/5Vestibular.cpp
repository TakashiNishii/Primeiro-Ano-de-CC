#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[50];
	float media,notaP,notaM,notaCG;
	
	printf("Informe o nome do candidato: ");
	scanf("%s",&nome);
	printf("\nQual foi a nota do candidato em portugu�s: ");
	scanf("%f",&notaP);
	printf("\nQual foi a nota do candidato em matem�tica: ");
	scanf("%f",&notaM);
	printf("\nQual foi a nota do candidato em conhecimentos gerais: ");
	scanf("%f",&notaCG);
	
	media = (notaP+notaM+notaCG)/3;
	
	system("cls");
	
	printf("Candidato: %s \nNota em portugu�s: %.2f\nNota em matem�tica: %.2f\nNota em conhecimentos gerais %.2f\nM�dia: %.2f\nResultado:   ",nome,notaP,notaM,notaCG,media);
	
	if(media>5 && notaP>4 && notaM>4 && notaCG>4){
		printf("APROVADO");
	}else{
		printf("REPROVADO");
	}
	
	return 0;
}
