#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char nome[20], idade[4], cargo[15];
	float salario, salbruto, salliquido, novosal, reajuste, saltotal, salariofinal;
	
	printf("\n\nDigite seu Nome: ");
	gets(nome);
	fflush(stdin);
	printf("\nDigite sua Idade: ");
	gets(idade);
	fflush(stdin);
	printf("\nDigite seu Cargo: ");
	gets(cargo);
	fflush(stdin);
	printf("\nDigite seu Salario: ");
	scanf("%f", &salario);
	reajuste = ((salario * 38) / 100);// achei 38% do salario
	novosal = salario + reajuste;//somei 38% + salario
	salbruto = ((novosal * 20)/ 100);//20% do salario com o reajuste de 38%
	salariofinal = salbruto + novosal;//+38% + 20% + salariofinal
	saltotal =((salariofinal * 15)/100);//15% do salario
	salliquido = salariofinal - saltotal;// tira desconto de 15% do salario
	printf("\nNome: %s", nome);
	printf("\nIdade: %s", idade);
	printf("\nCargo: %s\n\n", cargo);
	printf("\nSalario Bruto: %.2f", salariofinal);
	printf("\nSalario Liquido: %.2f\n\n\n", salliquido);
	
	
	system("PAUSE");
	return 0;
}
