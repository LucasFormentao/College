#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, posicao_maior;
    char modelo[20][5];
    float consumo[5], maior = 0.00, mil_km[5];
    for(i=0; i<5; i++)
    {
        printf("Entre com o modelo do carro: ");
        scanf("%s", modelo[i]);
        printf("\nEntre com o consumo do carro(em km por litro): ");
        scanf("%f", &consumo[i]);
        
        mil_km[i] = 1000 / consumo[i];
        
        
        if(consumo[i] > maior)
        {
            maior = consumo[i];
            posicao_maior = i;
        }
        printf("\n");
    }
    printf("O carro mais economico eh: %s\n", modelo[posicao_maior]);
    for(i=0; i<5; i++)
    {
        printf("\nO modelo %s percorre 1000km com %.2f litros de combustivel.",\
        modelo[i], mil_km[i]);
    }

    return 0;
}
