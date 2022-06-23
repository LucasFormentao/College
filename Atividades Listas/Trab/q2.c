/*
Lucas Formentão Rodrigues - PRG22003
*/
#include<stdlib.h>
#include <stdio.h>

float juros(float x, int dias)
{
    float juro;
    if (dias == 0)
    {
        juro = 0;
    }
    else
    {
        juro = (0.03+(0.001*dias))*x;
    }
    return juro;
}

int main()
{
    float parcela;
    int dias;
    
    do{
        printf("Digite o valor da parcela a ser paga: R$");
        scanf("%f", &parcela);
        
        if (parcela != 0){
            printf("\nAgora digite o número de dias em atraso:");
            
            scanf("%d", &dias);
            
            printf("\nO valor a ser pago é: R$%.2f\n\n", parcela + juros(parcela, dias));
            
            }
    }
    while(parcela != 0);
    
    return 0;
}
