#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int numCPF,acumulador=0,acumuladorU=0,penultimo,ultimo,i=10,n[10];
	
	
	while(i>=2){
		do{
			printf("Informe seu %d do CPF: ",11-i);
			scanf("%d",&numCPF);
		}while(numCPF<0 || numCPF>9);
		acumulador += numCPF*i;
		acumuladorU += numCPF*(i+1); 
		n[11-i] = numCPF;
		i--;
		
	}
	
	penultimo = acumulador%11;
	if(penultimo<2){
		penultimo = 0;
	}else{
		penultimo = 11 - penultimo;
	}
	
	acumuladorU += penultimo*2;
	
	ultimo = acumuladorU%11;
	if(ultimo<2){
		ultimo = 0;
	}else{
		ultimo = 11 - ultimo;
	}
	
	i=1;
	system("cls");
	
	while(i<10){
		
		printf("%d",n[i]);
		if(i%3==0 && i!=9){
			printf(".");
		}
		i++;
	}
	
	printf("-%d%d",penultimo,ultimo);
	printf("\nO penúltimo digito do seu CPF é %d e o último é %d",penultimo,ultimo);
	
	return 0;
}
