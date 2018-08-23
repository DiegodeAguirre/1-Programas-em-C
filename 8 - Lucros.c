#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio 8
    
    //declaraçao de variaveis
    float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;
    
    //Entrada de valores
    printf("Preço de Fabrica: ");
    scanf("%f", &p_fab);
    printf("Valor Percentual de lucros: ");
    scanf("%f", &perc_d);
    printf("Percentual de Impostos: ");
    scanf("%f", perc_i);
    //calculos
    vlr_d = p_fab * perc_d / 100;
    vlr_i = p_fab + perc_i / 100;
    p_final = p_fab + vlr_d + vlr_i;
    //Saida e Resultado
    printf("\nO valor correspondente ao lucro do distribuidor:%f", vlr_d);
    printf("\nO valor correspondente aos impostos:%f", vlr_i);
    printf("\nO preço final do Veiculo:%f", p_final);
    
    system("PAUSE");
    return 0;
    
}
