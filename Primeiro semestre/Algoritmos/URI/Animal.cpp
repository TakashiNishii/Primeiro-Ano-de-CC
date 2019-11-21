#include <stdio.h>
#include <string.h>

int main () {
	char tp1[30], tp2[30], tp3[30];
	
	scanf ("%s", tp1);
	scanf ("%s", tp2);
	scanf ("%s", tp3);
	
	if (strcmp(tp1, "vertebrado") == 0){
		if (strcmp(tp2, "ave") == 0){
			if (strcmp(tp3, "carnivoro") == 0){
				printf ("aguia\n");
			}else{
				printf ("pomba\n");
			}
		}else{
			if (strcmp(tp3, "onivoro") == 0){
				printf ("homem\n");
			}else{
				printf ("vaca\n");
			}
		}
	}else{
		if (strcmp(tp2, "inseto") == 0){
			if (strcmp(tp3, "hematofago") == 0){
				printf ("pulga\n");
			}else{
				printf ("lagarta\n");
			}
		}else{
			if (strcmp(tp3, "hematofago") == 0){
				printf ("sanguessuga\n");
			}else{
				printf ("minhoca\n");
			}
		}
	}
	
	return 0;
}
