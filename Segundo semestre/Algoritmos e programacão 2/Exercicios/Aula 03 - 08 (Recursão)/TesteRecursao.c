#include <stdio.h>
#include <stdlib.h>

int fat (int n){
	if (n == 1) {
		return 1;
	}else {
		return n * fat (n - 1);
	}
}
void fatoracao (int i){
	int n, resultado = 1;
	
	do{
		scanf ("%d", &n);
	}while(n<=0 || n > 10);
	
	while(i != n-1){
		printf("%d*%d=%d\n",resultado, i + 1, resultado*(i+1));
		resultado = resultado*(i+1);
		i++;
	}
	printf("%d*%d=",resultado, n);
	resultado = fat(n);
	printf("%d",resultado);
}
int main (){
	int i = 1;
	fatoracao(i);
	return 0;
}
