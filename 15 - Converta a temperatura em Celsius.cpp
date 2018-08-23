#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio 15
	
	float celsius,  fahrenheit;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = 180 *(celsius + 32) /100;
	printf("\n\n%.f graus em Fahrenheit e: %.2f\n\n\n", celsius, fahrenheit);
		
	getche();
	return 0;
}
