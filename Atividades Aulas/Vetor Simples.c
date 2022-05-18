#include <stdio.h>

int main()
{
    int num[3];
    printf("Digite a coordenada x do vetor:");
    scanf("%i", &num[0]);
    
    printf("\nDigite a coordenada y do vetor:");
    scanf("%i", &num[1]);
    
    printf("\nDigite a coordenada z do vetor:");
    scanf("%i", &num[2]);
    
    printf("\nO vetor digitado é: [%i %i %i]", num[0], num[1], num[2]);
    
    return 0;
}
