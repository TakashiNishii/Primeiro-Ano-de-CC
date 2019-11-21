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

int verificaSimetria (float matriz[][max], int m){
	int verificacao = 1, i ,j;
	
	for (i = 0; i < m; i++){
		for (j = 0; j < m; j++){
			if (matriz[i][j] != matriz[j][i]){
				verificacao = 0;
			}
		}
	}
	return verificacao;
	
}
int main(){
	int m, verifica;
	float matriz[max][max];
	
	do{
		scanf("%d", &m);
	}while(m < 1 || m > max);
	
	leMatriz(matriz, m);
	verifica = verificaSimetria(matriz, m);
	
	if(verifica == 1){
		printf("SIMETRICA");
	}else{
		printf("NAO SIMETRICA");
	}
	return 0;
}
