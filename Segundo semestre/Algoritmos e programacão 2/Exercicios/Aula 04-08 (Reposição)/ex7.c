#include <stdio.h>
#include <stdlib.h>
#define max 50

void leMatriz(int mat[][max],int n,int m){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&mat[i][j]);
		}
	}
}

void inverteMatriz(int mat[][max],int lin,int col){
	int mat2[lin][col],i,j;
	
	for(i = 0;i<lin;i++){
		for (j=0;j<col;j++){
			mat2[i][j]=mat[lin-(i+1)][col-(j+1)];
		}
	}
	
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			mat[i][j]=mat2[i][j];
		}
	}
}

void escreveMatriz(int mat[][max],int n,int m){
	int i, j;
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n,m;
	int mat[max][max];
	
	do{
		scanf("%d",&n);
	}while(n<1||n>50);

	do{
		scanf("%d",&m);
	}while(m<1||m>50);
	
	leMatriz(mat,n,m);
	inverteMatriz(mat,n,m);
	escreveMatriz(mat,n,m);	
	return 0;
}

