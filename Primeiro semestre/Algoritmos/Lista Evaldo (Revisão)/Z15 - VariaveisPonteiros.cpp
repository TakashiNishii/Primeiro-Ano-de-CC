#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	int a = 10;
	int *pa = &a;
	
	printf("Antes da mudança: \n");
	printf("%p\n", &a); 
	printf("%d\n", a);
	printf("%p\n", &pa);
	printf("%p\n", pa);
	printf("%d\n", *pa);
	
	*pa = 9;
	
	printf("\nMudança 1: \n");
	printf("%p\n", &a); 
	printf("%d\n", a);
	printf("%p\n", &pa);
	printf("%p\n", pa);
	printf("%d\n", *pa);
	
	a = 8;
	
	printf("\nMudança 2: \n");
	printf("%p\n", &a); 
	printf("%d\n", a);
	printf("%p\n", &pa);
	printf("%p\n", pa);
	printf("%d\n", *pa);
	
	return 0;
}
