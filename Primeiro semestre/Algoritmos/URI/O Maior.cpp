#include <stdio.h>
#include <stdlib.h>

int main () {
	int a, b, c, MaiorABC;
	
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	
	MaiorABC = (a + b + abs(a - b)) / 2;
	MaiorABC = (MaiorABC + c + abs(MaiorABC - c)) / 2;
	
	printf ("%d eh o maior\n", MaiorABC);
	return 0;
}
