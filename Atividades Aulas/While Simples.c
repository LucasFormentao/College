#include <stdlib.h>
#include <stdio.h>

int main()
{
    int val;
    printf("Digite um valor inteiro qualquer:");
    scanf("%d", &val);
    while(val <= 0)
    {
        printf("\nValor invalido! Digite um valor inteiro positivo qualquer:");
        scanf("%d", &val);
    }
    printf("\nValor lido: %d", val);
    return 0;
}
