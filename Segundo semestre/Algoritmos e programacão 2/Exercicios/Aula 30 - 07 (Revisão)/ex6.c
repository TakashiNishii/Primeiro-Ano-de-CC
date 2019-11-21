#include <stdio.h>
#include <stdlib.h>

void calcula (float *min, float *max, float *media){
	int cont = 0;
	float num;
	
	while (num != 0){
		scanf("%f", &num);
		if(num != 0){
			if (cont == 0){
				*min = num;
				*max = num; 	
			}
			if (num < *min){
				*min = num;	
			}
			if (num > *max){
				*max = num;
			}
			*media += num;
			cont++;
		}
	}
	if (cont != 0){
		*media = *media / cont;
	}
}

int main () {
	float min = 0, max = 0, media = 0;
	
	calcula(&min, &max, &media);	
	
	printf ("%.2f\n", min);
	printf ("%.2f\n", max);
	printf ("%.2f\n", media);
	
	return 0;
}
