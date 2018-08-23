#include<stdio.h>
#include<stdlib.h>

int main(){//exercicio 7

	float dep, tx, rend, total;
	
	printf("Digite o valor do Deposito: ");
	scanf("%f", &dep);
	printf("\nDigite o valor da taxa de Juros: ");
	scanf("%f", &tx);
	rend = dep * tx / 100;
	total = dep + rend;
	printf("\nValor do Rendimento:%f", total);

	system("PAUSE");
	return 0;
}
		
		
