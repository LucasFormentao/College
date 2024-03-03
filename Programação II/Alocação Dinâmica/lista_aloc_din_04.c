#include <stdlib.h>
#include <stdio.h>

/*
Faça um programa para armazenar em memoria um vetor de dados contendo 1500
valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:
a) Atribua para cada elemento do vetor o valor do seu índice.
b) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.
*/

int main()
{
    int *dados, tam = 1500, i;
    dados = (int*) malloc(sizeof(int) * tam);

    for(i=0;i<tam;i++)
    {
        dados[i] = i;
    }

    printf("Um vetor de 1500 posicoes foi criado usando malloc, a seguir estao:\n");

    printf("O valor das primeiras 5 posicoes:\n");
    for(i=0;i<10; i++)
    {
        printf("%d ", dados[i]);
    }

    printf("\nO valor das ultimas 5 posicoes:\n");
    for(i=1490;i<1500; i++)
    {
        printf("%d ", dados[i]);
    }

    return 0;
}
