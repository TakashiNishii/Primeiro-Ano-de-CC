#include <stdio.h>

int main (){
	int num[3],i, maior, menor;
	
	for (i = 0; i < 3; i++){
		scanf ("%d", &num[i]);
		if (i == 0){
			maior = num[i];
			menor = num[i];
		}
		if (num[i] > maior){
			maior = num[i];
		}
		if (num[i] < menor){
			menor = num[i];
		}
	}
	
	printf ("%d\n", menor);
	i = 0;
	while (i < 3){
		if (num[i] > menor && num[i] < maior){
			printf("%d\n", num[i]);
			i = 3;
		}
		else{
			i++;
		}
	}
	printf ("%d\n\n", maior);
	
	for (i = 0; i < 3; i++){
		printf ("%d\n", num[i]);
	}
		
	return 0;
}
