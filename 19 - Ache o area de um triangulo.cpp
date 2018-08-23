#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float area, base, altura;
	
	printf("Digite o Valor da BASE: ");
	scanf("%f", &base);
	printf("\nDigite o Valor da ALTURA: ");
	scanf("%f", &altura);
	area = (base * altura)/2;
	printf("\nA area do TRIANGULO:%.2f\n\n\n", area);
	
	system("PAUSE");
	return 0;
}
