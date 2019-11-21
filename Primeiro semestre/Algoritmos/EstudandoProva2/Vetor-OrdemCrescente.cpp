#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
	setlocale (LC_ALL, "Portuguese");
	int i, j, aux;
	scanf("%d %d", &i, &j);
	
	if (i > j){
		aux = j;
		j = i;
		i = aux;
	}
	
	system ("cls");
	printf ("%d %d", i, j);
	
	return 0;
}
