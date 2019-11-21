#include <stdio.h>
#include <stdlib.h>
#define max 50

void imprimeMatriz (int matriz[][max], int l, int c){
	int i, j;
	for (i = 0; i < c; i++){
		for (j = 0; j < l; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

void transposta (int matriz[][max], int l, int c, int transp[][max]){
	int i, j;
	for (i = 0; i < l; i++){
		for (j = 0; j < c; j++){
			transp[j][i] = matriz[i][j];
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
	int l, c, mat[max][max], trans[max][max];
	
	do{
		scanf("%d", &l);
	}while(l < 1 || l > max);
	
	do{
		scanf("%d", &c);
	}while(c < 1 || c > max);
		
	leMatriz(mat, l, c);	
	transposta(mat, l, c, trans);
	imprimeMatriz(trans, l, c);
	return 0;
}
