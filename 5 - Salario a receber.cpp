#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio 5

	float sal, salreceber, grat, imp;
	
	printf("Digite o valor do Salario Base: ");
	scanf("%f", &sal);
	grat = sal * 5/100;
	imp = sal * 7/100;
	salreceber = sal + grat - imp;
	printf("\nSeu Salario a Receber: %.f", salreceber);
	
	getche();
	return 0;
}
