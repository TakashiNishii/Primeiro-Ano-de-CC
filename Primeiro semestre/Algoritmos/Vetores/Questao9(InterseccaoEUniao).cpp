#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int VA[15], VB[20], Vetor1[15], Vetor2[35], contI = 0, contU = 15, pos, pos1=0, pos2=0, comp, i;
	
	//Introduzindo valores no Vetor A e no Vetor2 responsavel pela união dos Vetores A e B:
	for (pos = 0; pos < 15; pos++) {
		printf ("Informe o valor do vetor A na posição %d: ", pos + 1);
		scanf ("%d", &VA[pos]);
		Vetor2[pos2] = VA[pos];
		system("cls");
		pos2++;
	}
	
	//Introduzindo valores no Vetor B:
	for (pos = 0; pos < 20; pos++) {
		printf ("Informe o valor do vetor B na posição %d: ", pos + 1);
		scanf("%d", &VB[pos]);
		
		//Verifica se o número recém introduzido no vetor B está presente no vetor A:
		for (i = 0; i < 15; i++) {
			if (VB[pos] == VA[i]) {
				comp = 1;
			}
		}
		//Se o valor introduzido no vetor B também está no vetor A ele será introduzido no Vetor1 responsavel pela intersecção
		//dos vetores A e B
		if (comp == 1){
			Vetor1[pos1] = VB[pos];
			contI++;
			pos1++;
		}else{ //Se não quer dizer que é um valor inexistente do vetor A então será acrescentado no vetor 2 que é responsavel pela união 
			Vetor2[pos2] = VB[pos];
			contU++;
			pos2++;
		}
		comp = 0;
		system("cls");
	}
	
	system("cls");
	
	//Mostrando a intersecção dos dois vetores
	for (pos = 0; pos < contI; pos++) {
			printf("%d ", Vetor1[pos]);
	}
	
	//Pula linha
	printf("\n");
	
	//Mostrando a união
	for (pos = 0; pos < contU; pos++) {
			printf("%d ", Vetor2[pos]);
	}
	return 0;
}
