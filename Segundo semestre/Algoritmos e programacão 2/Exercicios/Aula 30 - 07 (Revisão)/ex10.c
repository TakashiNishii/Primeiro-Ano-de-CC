#include <stdio.h>
#include <stdlib.h>
#define max 50

void matriz(int lin, int col){
	int i, j, somaLinha = 0, somaColuna = 0, resultadoLinha[lin], resultadoColuna[col], mat[lin][col];
	
	for (i = 0; i < lin; i++){
		for (j = 0; j < col; j++){
			scanf("%d", &mat[i][j]);	
		}
	}
	
	for (i = 0; i < lin; i++){
		for (j = 0; j < col; j++){
			somaLinha += mat[i][j];	
		}
		resultadoLinha[i] = somaLinha;
		printf("%d\t", resultadoLinha[i]);
		somaLinha = 0;
	}
	
	printf("\n");
	
	for (j = 0; j < col; j++){
		for (i = 0; i < lin; i++){
			somaColuna += mat[i][j];	
		}
		resultadoColuna[i] = somaColuna;
		printf("%d\t", resultadoColuna[i]);
		somaColuna = 0;
	}
}

int main (){
	int lin, col;
	
	do{
		scanf("%d", &lin);
	}while(lin < 1 || lin > max);
	
	do{
		scanf("%d", &col);
	}while(col < 1 || col > max);
	
	matriz(lin, col);
	return 0;
}
