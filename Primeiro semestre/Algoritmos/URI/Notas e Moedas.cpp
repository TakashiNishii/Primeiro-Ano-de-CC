#include <stdio.h>

int main() {
    double valor,restovalor;
    double cedulas[] = {100.00,50.00,20.00,10.00,5.00,2.00};
    double moedas[] = {1.00,0.50,0.25,0.10,0.05,0.01};
    int i, j;
    scanf("%lf",&valor);
	valor += 0.001;
    printf("NOTAS:\n");
    for(i = 0; i < 6;i++){
        int x = valor / cedulas[i];
        restovalor = valor - (cedulas[i] * x);
        valor = restovalor;
        printf("%d nota(s) de R$ %.2lf\n",x,cedulas[i]);
 }
    printf("MOEDAS:\n");
    for(j = 0; j < 6; j++){
        int x = valor / moedas[j];
        restovalor = valor - (moedas[j] * x);
        valor = restovalor;
         printf("%d moeda(s) de R$ %.2lf\n",x,moedas[j]);
 }
    return 0;
}
