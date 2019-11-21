#include <stdio.h>

int main () {
	int op, qnt;
	float total;
	
	scanf ("%d", &op);
	scanf ("%d", &qnt);
	
	if(op == 1){
		total = 4 * qnt;
	}else{
		if (op == 2){
			total = 4.5 * qnt;	
		}else{
			if (op == 3){
				total = 5 * qnt;
			}else{
				if (op == 4){
					total = 2 * qnt;
				}else{
					if (op == 5){
						total = 1.5 * qnt;
					}
				}
			}
		}
	}
	
	printf ("Total: R$ %.2f\n", total);
	return 0;
}
