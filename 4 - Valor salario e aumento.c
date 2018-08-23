#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float sal, perc, aumento, novosal;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &sal);
	printf("\nDigite o valor do Aumento: ");
	scanf("%f", &perc);
	aumento = sal * perc/100;
	novosal = sal + aumento;
	printf("\nValor do Aumento:%.2f\n", aumento);
	printf("\nNovo Salario:%.2f\n\n\n", novosal);
	
	system("PAUSE");
	return 0;
}
