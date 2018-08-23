#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float a, b, c, mdharm, mdart;
	
	printf("Digite o PRIMEIRO valor: ");
	scanf("%f", &a);
	printf("\nDigite o SEGUNDO valor: ");
	scanf("%f", &b);
	printf("\nDigite o TERCEIRO valor: ");
	scanf("%f", &c);
	mdart = (a + b + c)/3;
	mdharm = (3 /(1 / a)+(1 / b)+(1 / c));
	printf("\nA média aritmética:%.2f", mdart);
	printf("\nA média harmônica:%.2f\n\n\n", mdharm);
	
	
	getche();
	return 0;
	
}
