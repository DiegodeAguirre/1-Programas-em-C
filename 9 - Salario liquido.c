#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){//exercicio 9
    
    //declaraçao de variaveis
    float horas_t, vlr_sal_min, vlr_hora, vlr_sal_bru, imp, vlr_sal_liq;
    
    //Entrada de Horas trabalhadas e Valor do Salario Minimo
    printf("Valor hora trabalhada: ");
    scanf("%f", &horas_t);
    printf("Valor do Salario Minimo: ");
    scanf("%f", &vlr_sal_min);
    
    //calculos
    horas_t = vlr_sal_min / 2;//Horas trabalhadas
    vlr_sal_bru = vlr_hora * horas_t;//Valor do Salario Bruto
    imp = vlr_sal_bru * 3/100;//Desconto do Imposto
    vlr_sal_liq = vlr_sal_bru - imp;//Valor do salario Liquido
    
    //Saida e Resultados
    printf("\nValor do salario liquido:%f", vlr_sal_liq);
    
    getche();
    return 0;
    
}
