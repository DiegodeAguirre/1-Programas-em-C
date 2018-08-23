#include<stdio.h>
#include<stdlib.h>

int main(){//exercicio 12
	
	float vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc;
	
	printf("Digite o Valor do Salario Minimo: ");
	scanf("%f", &vlr_sal);
	printf("\nDigite a Quantidade de Quilowats: ");
	scanf("%f", &qtd_kw);
	vlr_kw = vlr_sal / 5;
	vlr_reais = vlr_kw * qtd_kw;
	desc = vlr_reais * 15/100;
	vlr_desc = vlr_reais - desc;
	printf("\nO valor em reais de cada quilowatt:%f", vlr_kw);
	printf("\nO valor em reias a ser pago por residencia:%f", vlr_reais);
	printf("\nO valor em reias a ser pago com desconto de 15%:%f", vlr_desc);	
	
	system("PAUSE");
	return 0;
}
