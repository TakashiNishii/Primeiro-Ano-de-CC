#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, m, n;
	
	do{
		scanf("%d", &m);
	}while(m < 1);
	
	do{
		scanf("%d", &n);
	}while(n < 1 );
	
	if(n > m){
		for (i = m; i <= n; i++){
			for (j = 1; j <= 10; j++){
				printf("%d\t", i*j);
			}
			printf("\n");
		}
	}else{
		for (i = n; i <= m; i++){
			for (j = 1; j <= 10; j++){
				printf("%d\t", i*j);
			}
			printf("\n");
		}
	}
	
	
	return 0;
}
