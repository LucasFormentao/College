#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    n = 10;
    int vet[n], i;
    float media, somatorio_rep, somatorio_final;
    printf("Entre com os inteiros para o vetor:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d", &vet[0], &vet[1], &vet[2], &vet[3],\
            &vet[4], &vet[5], &vet[6], &vet[7], &vet[8], &vet[9]);
            
    media = ((vet[0]+vet[1]+vet[2]+vet[3]+vet[4]+\
            vet[5]+vet[6]+vet[7]+vet[8]+vet[9])/10);
    
    for(i=0; i<10; i++)
    {
        somatorio_rep = pow((vet[i]-media), 2);
        somatorio_final =+ somatorio_rep;
    }
    
    printf("O desvio padrão é: %.4f",sqrt(somatorio_final) );
    return 0;
}
