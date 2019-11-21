#include <stdio.h>
#include <stdlib.h>
int pot(int n){
	if (n == 1){
		return 2;
	}else{
		return 2 * pot(n-1);
	}
}
void potencia (int n){
	int i = 1, result = 2;
	while(i < n-1){
		printf("%d*2=%d\n",result, result*2);
		result = result * 2;
		i++;
	}
	printf("%d*2=", result);
	result = pot(n);
	printf("%d",result);
}
int main (){
	int n;
	
	scanf ("%d", &n);
	
	potencia(n);
	return 0;
}
