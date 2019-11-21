#include <stdio.h>
int main(){
	int i,j,x,y;
	
	printf("Entre com dois inteiros no intervalo 1-20: ");
	scanf("%d%d", &x, &y);
	
	for(i = 1; i<=y;i++){
		for(j=1;j<=x;j++)
			printf("@");
		printf("\n");
	}
	return 0;
}
