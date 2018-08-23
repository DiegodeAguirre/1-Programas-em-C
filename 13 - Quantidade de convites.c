#include<stdio.h>
#include<stdlib.h>

int main(){//exercicio 13
	
	float custo, convite, qtd;
	
	printf("Digite o valor do espetaculo: ");
	scanf("%f", &custo);
	printf("Digite o preço do Convite: ");
	scanf("%f", &convite);
	qtd = custo / convite;
	printf("\nQuantidade de convites:%f\n\n\n", qtd);
	
	system("PAUSE");
	return 0;
}
