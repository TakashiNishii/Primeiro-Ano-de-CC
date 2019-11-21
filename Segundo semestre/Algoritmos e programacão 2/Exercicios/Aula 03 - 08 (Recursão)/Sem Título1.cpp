#include <stdio.h>
#include <stdlib.h>
int fat (int n){
	if (n == 1) {
		printf("%d ", n);
		return 1;
	}else {
		printf ("%d * ", n);
		return n * fat (n - 1);
	}
}
int main (){
	int n, fatorial;
	
	scanf ("%d", &n);
	
	system("cls");
	printf("%d! = ", n);
	fatorial = fat(n);
	
	printf ("= %d", fatorial);
	return 0;
}
