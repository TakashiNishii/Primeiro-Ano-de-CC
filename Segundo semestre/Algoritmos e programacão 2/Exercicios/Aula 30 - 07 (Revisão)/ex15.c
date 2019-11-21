#include <stdio.h>
#include <stdlib.h>
#define max 50

void leMatriz (float matriz[][max], int m){
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
			scanf("%f", &matriz[i][j]);
		}
	}
}

void diagonalPrincipal (float matriz[][max], int m){
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
			if(i == j){
				printf("%.1f ", matriz[i][j]);
			}
		}
	}
	printf("\n");
}

void diagonalSecundaria (float matriz[][max], int m){
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
			if(i + j == (m-1)){
				printf("%.1f ", matriz[i][j]);
			}
		}
	}	
}

int main(){
	int m;
	float matriz[max][max];
	
	do{
		scanf("%d", &m);
	}while(m < 1 || m > max);
	
	leMatriz(matriz, m);
	diagonalPrincipal(matriz, m);
	diagonalSecundaria(matriz, m);
	
	return 0;
}
