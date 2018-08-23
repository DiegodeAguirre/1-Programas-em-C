#include<stdio.h>
#include<stdlib.h>

int main(){//exercicio 6
		
	float salario, salreceber, imposto, salfinal;
	
	printf("Digite o Salario Base: ");
	scanf("%f", &salario);
	salreceber = salario * 50;	
	imposto = salreceber * 10/100;	
	salfinal = imposto - salario;	
		
	system("PAUSE");
	return 0;
}
