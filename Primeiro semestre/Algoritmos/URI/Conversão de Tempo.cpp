#include <stdio.h>

int main () {
	int seg;
	
	scanf("%d", &seg);
	
	printf("%d:", seg / 3600);
	seg = seg - ((seg / 3600) * 3600);
	printf("%d:", seg / 60);
	seg = seg - ((seg / 60) * 60);
	printf("%d\n", seg);
	return 0;
}
