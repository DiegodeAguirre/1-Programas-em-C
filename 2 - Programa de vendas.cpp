#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio 2
	
	float numvend, salario, totalvendas, perc, saltotal, resultado;
	
	printf("\nDigite o Numero do Vendedor: ");
	scanf("%f", &numvend);
	printf("\nDigite seu Salario Fixo: ");
	scanf("%f", &salario);
	printf("\nDigite o Total de Vendas efetuadas: ");
	scanf("%f", &totalvendas);
	printf("\nDigite o Percentual de ganho nas Vendas: ");
	scanf("%f", &perc);
	resultado = totalvendas * perc/100;
	saltotal = salario + resultado;
	printf("\nSeu Numeroe: %.f\n", numvend);
	printf("\nSalario Total: %.f\n\n\n", saltotal);
	
	
	getche();
	return 0;
}
