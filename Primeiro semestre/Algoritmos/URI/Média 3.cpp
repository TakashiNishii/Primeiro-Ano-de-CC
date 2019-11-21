#include <stdio.h>

int main () {
	float N1, N2, N3, N4, NR, media;
	
	scanf ("%f", &N1);
	scanf ("%f", &N2);
	scanf ("%f", &N3);
	scanf ("%f", &N4);
	
	media = ((2 * N1) + (3 * N2) + (4 * N3) + (1 * N4)) / 10;
	
	printf ("Media: %.1f\n", media);	
	if (media >= 7){
		printf ("Aluno aprovado.\n");
	}else{
		if (media >= 5){
		
			printf ("Aluno em exame.\n");
			scanf ("%f", &NR);
			printf ("Nota do exame: %.1f\n", NR);
			media = (media + NR) / 2;
			media += 0.001;
			if (media >= 5){
				printf ("Aluno aprovado.\n");
			}else{
				printf ("Aluno reprovado.\n");
			}
			printf ("Media final: %.1f\n", media);
		}else{
			printf ("Aluno reprovado.\n");
		} 
	}
	return 0;
}
