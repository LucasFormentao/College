#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int tam, i;
    float media, somatorio_rep, somatorio_rep_media = 0, somatorio_final, final, final_f, teste, tamm;
    
    printf("Digite o tamanho do vetor: ");
    
    scanf("%d", &tam);
    
    int vet[tam];
    
    printf("\nDigite %d valores para compor o vetor.", tam);
    printf("\n(A cada valor digitado aperte enter.)\n");
    
    for(i=0; i<tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    for(i=0; i<tam; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    for(i=0; i<tam; i++)
    {
        somatorio_rep_media = somatorio_rep_media + vet[i];
    }
    
    media = (somatorio_rep_media / tam);
    
    for(i=0; i<tam; i++)
    {
        somatorio_rep = (vet[i]-media)*(vet[i]-media);
        somatorio_final = somatorio_final + somatorio_rep;
    }
    tamm = tam - 1;
    final = (1/tamm)*somatorio_final;
    teste = (tamm);
    final_f = sqrt(final);
    printf("\nO desvio padrão é: %.4f", final);
    return 0;
}
