#include<stdio.h>
#include<stdlib.h>

int main(){//exercicio14
		
	float conta1, conta2, salario, resto, r1, r2, r3;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	printf("\nDigite o valor da 1a Conta: ");
	scanf("%f", &conta1);
	printf("\nDigite o valor da 2a Conta: ");
	scanf("%f", &conta2);
	r1 = (conta1 * 2/100);
	r2 = (conta2 * 2/100);
	r3 = r1 + r2 + conta1 + conta2;
	resto = salario - r3;
	printf("\nRestara de seu Salario:%.f\n\n\n", resto);
	
	system("PAUSE");
	return 0;
}
