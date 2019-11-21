#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int x=1,y=1, quantNum=0,quantSomas=0;
	
	while(x!=0 && y!=0){
		printf("\nInforme o valor de X: ");
		scanf("%d",&x);
		printf("\nInforme o valor de Y: ");
		scanf("%d",&y);
		quantNum += 2;
		quantSomas += 1;
		printf("%d + %d = %d\n",x,y,x+y);
	}
	quantNum -=2;
	quantSomas-=1;
	printf("\n------------------------------\n");
	printf("A quantidade de números digitados foi: %d\n",quantNum);
	printf("A quantidade de somas digitados foi: %d\n",quantSomas);
}
