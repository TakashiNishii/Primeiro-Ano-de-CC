#include <stdio.h>
#include <stdlib.h>
int fibao (int n) {
	if (n <= 1){
		return 1;
	}else{
		if (n > 1) {
			return fibao (n - 1) + fibao (n - 2);
		}
		else{
			return 0;
		}
	}
	
}

int main () {
	int n, valor;
	
	scanf ("%d", &n);

	if (n >= 0){
		valor = fibao(n);	
	}else{
		valor = 0;
	}
	
	
	printf ("%d\n", valor);
	
	return 0;
}


