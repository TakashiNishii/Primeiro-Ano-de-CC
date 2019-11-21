#include <stdio.h>
int main(){
	int x;
	
	do{
		scanf("%d",&x);
		
		if(x%2==0){
			printf("%d\n",x+(x+2)+(x+4)+(x+6)+(x+8));
		}else{
			printf("%d\n",(x+1)+(x+3)+(x+5)+(x+7)+(x+9));
		}		
	}while(x!=0);
	
	return 0;
}
