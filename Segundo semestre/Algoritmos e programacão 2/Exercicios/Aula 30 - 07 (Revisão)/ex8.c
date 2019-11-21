#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main () {
	int cod = 1, idade, quantidadeM = 0, quantidadeF = 0, quantidadeMvelho = 0, quantidadeFmenorexp = 0;
	float quantidadeMexp = 0, somaIdade = 0;
	char sexo, exp;
	
	while (cod != 0){
		scanf("%d", &cod);
		if (cod != 0){
			scanf("%d", &idade);
		do{
			fflush(stdin);
			scanf("%c", &sexo);
			sexo = toupper(sexo);
			if (sexo == 'M'){
				quantidadeM++;
				if(idade > 45){
					quantidadeMvelho++;
				}
			}
			if (sexo == 'F'){
				quantidadeF++;
			}
		}while(sexo != 'M' && sexo != 'F');
		
		do{
			fflush(stdin);
			scanf("%c", &exp);
			exp = toupper(exp);
			if (exp == 'S'){
				if (sexo == 'M'){
					quantidadeMexp++;
					somaIdade += idade;
				}else{
					if(idade < 35){
						quantidadeFmenorexp++;
					}
				}
			}
		}while(exp != 'S' && exp != 'N');
		}
	}
	
	printf("%d\n", quantidadeF);
	printf("%d\n", quantidadeM);
	if(quantidadeMexp != 0){
		printf("%.1f\n", somaIdade / quantidadeMexp);
	}else{
		printf("0.0\n");
	}
	
	printf("%d\n", quantidadeMvelho);
	printf("%d\n", quantidadeFmenorexp);
	return 0;
}
