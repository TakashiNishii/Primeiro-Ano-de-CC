#include<stdio.h>

int main(){
	int a = 5;
	int vet[10];
	int b = 55;
	int i;
	for (i = -1; i < 11 ; i ++){
		printf("%d - %d ---- %p\n",i,vet[i],&vet[i]);\
		if( i == 10){
			vet[i] = 30;
		}
	}
	printf("%d --- %p\n",b,&b);
	printf("%d --- %p", a,&a);
	
	return 0;
}
