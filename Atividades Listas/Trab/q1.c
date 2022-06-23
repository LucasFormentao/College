/*
Lucas Formentão Rodrigues - PRG22003
*/
#include <stdlib.h>
#include <stdio.h>

int num_perc;
float perc;

float porcentagem(float x, int y)
{
    perc = x*y*0.01;
    return perc;
}

int main()
{
    float preco;
    printf("Digite o preço da gasolina:\n");
    scanf("%f", &preco);
    printf("+ Valor na bomba: R$%.2f\n- Distribuição e Revenda (17%%): R$%.2f\
    \n- Custo Etanol Anidro (12%%): R$%.2f\n- ICMS (28%%): R$%.2f\
    \n- CIDE, PIS/PASEP e COFINS (7%%): R$%.2f\n= Valor da Refinaria: R$%.2f\n\
    ", preco, porcentagem(preco, 17), porcentagem(preco, 12), porcentagem(preco, 28),\
    porcentagem(preco, 7), porcentagem(preco, 36));

    return 0;
}
