#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float vet[10], maior;
    
    printf("Entre com os valores para o vetor:\n");
    
    for(i=0; i<9; i++)
    {
        scanf("%f", &vet[i]);
    }
    maior = vet[0];
    for(i=0; i<9; i++)
    {
        if(maior<vet[(i+1)])
        {
            maior = vet[i+1];
        }
    }
    printf("%.2f", maior);
    
    return 0;
}
