#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 50

void leMatriz (int matriz[][max], int nl, int nc){
    int i, j;
    for (j = 0; j < nc; j++) {
    	for(i = 0; i < nl; i++){
    		scanf ("%d", &matriz[i][j]);
    	}
    }
}

void imprimeMatriz (int matriz[][max], int nl, int nc){
    int i, j;
    for (i = 0; i < nl; i++) {
    	for(j = 0; j < nc; j++){
			printf ("%d\t", matriz[i][j]);
		}
		printf("\n"); 
	}
    
    for (j = nc - 1; j >= 0; j--){
    	for (i = nl - 1; i >= 0; i--){
    		printf("%d ", matriz[i][j]);
		}
	}
	printf("\n");
}

int main () {
    int nl, nc, matriz[max][max];

    do{
        scanf ("%d", &nl);
    }while (nl <= 0 || nl > 50);
    
	do{
        scanf ("%d", &nc);
    }while (nc <= 0 || nc > 50);
    
    leMatriz(matriz, nl, nc);
	imprimeMatriz(matriz, nl, nc);
	
    return 0;
}
