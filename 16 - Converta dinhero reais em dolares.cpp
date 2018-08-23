#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio 17
	
	float  reais, dolar, marco_alemao, libra;
	
	printf("Quantidade de dinheiro em REAIS: ");
	scanf("%f", &reais);
	dolar = reais / 1.80;
	marco_alemao = reais / 2.00;
	libra = reais / 1.57;
	printf("\nSeu dinheiro em Reais e: R$ %.2f", reais);
	printf("\nSeu dinheiro em Dolares e: U$ %.2f", dolar);
	printf("\nSeu dinheiro em Marco Alemao e: € %.2f", marco_alemao);
	printf("\nSeu dinheiro em Libra Esterlina e: £ %.2f\n", libra);  	
	
	getche();
	return 0;
}
	
