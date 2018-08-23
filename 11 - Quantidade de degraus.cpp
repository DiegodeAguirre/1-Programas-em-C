#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio 11
	
	float degrau, usuario, qtd ;
	
	printf("O valor da Altura: ");
	scanf("%f", &degrau);
	printf("A altura que deseja alcancar subindo a escada: ");
	scanf("%f", &usuario);
	
	qtd = usuario / degrau;
	
	printf("A quantidade de degraus devera subir e: %.f\n\n\n", qtd);
	
	
	
	
	getche();
	return 0;
}
