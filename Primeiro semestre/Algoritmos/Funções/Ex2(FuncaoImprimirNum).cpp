#include <stdio.h>

void imprimirNum (int a, float b, char c) {
	a = 12;
	b = 5.2;
	c = 'F';
	printf("a= %d \nb= %f  \nc= %c\n", a, b,c); 
	
}
main () { 
     int a = 7; 
     float b = 9.6; 
     char c = 'B'; 
 
     imprimirNum(a, b, c); 
     printf("a= %d \nb= %f  \nc= %c", a, b,c); 
}
