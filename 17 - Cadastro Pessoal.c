#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	char  nome[20], idade[3], sexo[8], peso[5], altura[4], profissao[13], rua[30], bairro[15], cidade[9], estado[7], cep[12], telefone[10];
	

	printf("Digite seu NOME: ");
	gets(nome);
	fflush(stdin);
	printf("\nDigite seu SEXO: ");
	gets(sexo);
	fflush(stdin);
	printf("\nDigite seu PESO: ");
	gets(peso);
	fflush(stdin);
	printf("\nDigite sua ALTURA: ");
	gets(altura);
	fflush(stdin);
	printf("\nDigite sua PROFISSAO: ");
	gets(profissao);
	fflush(stdin);
	printf("\nDigite sua RUA: ");
	gets(rua);
	fflush(stdin);
	printf("\nDigite sua CIDADE: ");
	gets(cidade);
	fflush(stdin);
	printf("\nDigite seu ESTADO: ");
	gets(estado);
	fflush(stdin);
	printf("\nDigite seu CEP: ");
	gets(cep);
	fflush(stdin);
	printf("\nDigite seu TELEFONE: ");
	gets(telefone);

	printf("\n\t\t\tNOME: %s", nome);
	printf("\n\t\t\tSEXO: %s", sexo);
	printf("\n\t\t\tPESO: %s", peso);
	printf("\n\t\t\tALTURA: %s", altura);
	printf("\n\t\t\tPROFISSAO: %s", profissao);
	printf("\n\t\t\tRUA: %s", rua);
	printf("\n\t\t\tCIDADE: %s", cidade);
	printf("\n\t\t\tESTADO: %s", estado);
	printf("\n\t\t\tCEP: %s", cep);
	printf("\n\t\t\tTELEFONE: %s\n\n\n", telefone);
	
	system("PAUSE");
	return 0;
	
}
