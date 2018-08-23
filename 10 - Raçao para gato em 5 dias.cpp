#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio10
	
	//Declaraçao das variaveis e do tipo
	float peso_saco, ra_gato1, ra_gato2, total;
	
	//Entrada dos valores
	printf("________________________________________________________________________________");
	printf("\nDigite o Peso do Saco de Racao(em Kilos): ");
	scanf("%f", &peso_saco);
	printf("________________________________________________________________________________");
	printf("\nA quantidade de racao paro o 1o GATO(em Gramas): ");
	scanf("%f", &ra_gato1);
	printf("________________________________________________________________________________");
	printf("\nA quantidade de racao para o 2o GATO(em Gramas): ");
	scanf("%f", &ra_gato2);
	
	//calculo matematico
	ra_gato1 = ra_gato1 / 1000;//transformando a ração em gramas em kilos
	ra_gato2 = ra_gato2 / 1000;//transformando a ração em gramas em kilos
	total = peso_saco - 5 * (ra_gato1 + ra_gato2);//o 5 de 5 dias
	
	//Resultado
	printf("________________________________________________________________________________");
	printf("\nRestara de racao no saco apos 5 dias: %.f\n\n\n", total);
	printf("________________________________________________________________________________");
	
	getche();
	return 0;
}
