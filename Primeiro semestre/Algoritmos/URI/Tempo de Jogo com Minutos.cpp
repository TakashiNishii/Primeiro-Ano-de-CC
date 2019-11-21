#include <stdio.h>

int main () {
	int Hinicio, Minicio, Hfim, Mfim;
	
	scanf ("%d", &Hinicio);	
	scanf ("%d", &Minicio);	
	scanf ("%d", &Hfim);
	scanf ("%d", &Mfim);
	
	if (Hinicio == Hfim){
		printf ("O JOGO DUROU %d HORA(S) E ", 24);
	}
	if (Hinicio < Hfim){
		printf ("O JOGO DUROU %d HORA(S) E ", Hfim - Hinicio);
	}
	if (Hinicio > Hfim){
		printf ("O JOGO DUROU %d HORA(S) E ", (24 - Hinicio) + Hfim);
	}
	
	
	if (Minicio == Mfim){
		printf ("%d MINUTO(S)\n", 0);
	}
	if (Minicio < Mfim){
		printf ("%d MINUTO(S)\n", Mfim - Minicio);
	}
	if (Minicio > Mfim){
		printf ("%d MINUTO(S)\n", (60 - Minicio) + Mfim);
	}
	return 0;
}
