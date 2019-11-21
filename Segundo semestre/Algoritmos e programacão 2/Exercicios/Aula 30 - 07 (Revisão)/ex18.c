#include <stdio.h>
#include <stdlib.h>
#define max 50

void imprimeMatriz (int matriz[][max], int l, int c){
	int i, j;
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}	
	
}

void multiplicaMatrizes (int mResult[][max], int matriz1[][max], int m, int p, int matriz2[][max], int t, int n){
	int i, j, ajudante, ajudanteloc = 0;
	
	for(i = 0; i < m; i++) {
		for(j = 0; j < n; j++) {
			for (ajudante = 0; ajudante < p; ajudante++) {
				ajudanteloc += matriz1[i][ajudante] * matriz2[ajudante][j];
			}
			mResult[i][j] = ajudanteloc;
			ajudanteloc = 0;
		}
	}
	
}

void leMatriz (int matriz[][max], int l, int c){
	int i, j;
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
}

int main (){
	int m, p, t, n, matriz1[max][max], matriz2[max][max], matrizMultiplicada[max][max];
	
	do{
		scanf("%d", &m);
	}while(m < 1 || m > max);
	
	do{
		scanf("%d", &p);
	}while(p < 1 || p > max);
	
	leMatriz(matriz1, m, p);
	
	do{
		scanf("%d", &t);
	}while(t < 1 || t > max);
	
	do{
		scanf("%d", &n);
	}while(n < 1 || n > max);
	
	leMatriz(matriz2, t, n);
	
	
	if(p == t){
		multiplicaMatrizes(matrizMultiplicada, matriz1, m, p, matriz2, t, n);
		imprimeMatriz(matriz1, m, p);
		printf("\n");
		imprimeMatriz(matriz2, t, n);
		printf("\n");
		imprimeMatriz(matrizMultiplicada, m, n);
	}else{
		printf("IMPOSSIVEL MULTIPLICAR\n");
	}
	return 0;
}
