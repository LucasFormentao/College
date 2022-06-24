/*
Lucas Formentão Rodrigues - PRG22003
*/
#include<stdlib.h>
#include <stdio.h>

int main()
{
    int c_pista, voltas, num_reab, consumo, c_total;
    float c_p_reab, litros;
    
    printf("Digite o comprimento da pista em metros:");
    scanf("%d", &c_pista);
    printf("\nDigite o número total de voltas:");
    scanf("%d", &voltas);
    printf("\nDigite o número de reabastecimentos desejados:");
    scanf("%d", &num_reab);
    printf("\nDigite o consumo em km/L:");
    scanf("%d", &consumo);
    
    c_total = c_pista*voltas;
    c_p_reab = c_total/(num_reab+1);
    litros = c_p_reab/(1000*consumo);
    
    printf("\nSerão necessários %.2f litros de gasolina para percorrer até o primeiro reabastecimento.", litros);
    
    return 0;
}
