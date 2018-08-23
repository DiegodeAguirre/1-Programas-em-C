#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float a, b, c, d, md;
	
	printf("Digite PRIMEIRO Valor: ");
	scanf("%f", &a);
	printf("\nDigite SEGUNDO Valor: ");
	scanf("%f", &b);
	printf("\nDigite TERCEIRO Valor: ");
	scanf("%f", &c);
	printf("\nDigite QUARTO Valor: ");
	scanf("%f", &d);
	md = (a + b + c + d)/4;
	printf("\nA media:%.2f\n\n\n", md);
	
	system("PAUSE");
	return 0;
}
