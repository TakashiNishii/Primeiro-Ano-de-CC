#include <stdio.h>
int main () {
	int a = 2, b = 3; 
	int *pa, *pb;
	
	pa = &a;
	pb = &b;
	
	printf ("%d %d", *pa, *pb);
	
	return 0;
}
