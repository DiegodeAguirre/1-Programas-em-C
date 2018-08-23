#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float salario, aumento, novosalario;
	
	printf("Digite o valor do SALARIO: ");
	scanf("%f", &salario);
	aumento = ((salario * 25)/100);
	novosalario = aumento + salario;
	printf("\nSeu novo salario: %.f\n\n\n", novosalario);
	
	getche();
	return 0;
}
