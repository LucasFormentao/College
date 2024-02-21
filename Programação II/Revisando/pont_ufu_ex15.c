#include <stdlib.h>
#include <stdio.h>

/*
Crie uma funcao que receba dois parametros: um array e um valor do mesmo tipo do
array. A funcao devera preencher os elementos de array com esse valor. Nao utilize
ındices para percorrer o array, apenas aritmetica de ponteiros.
*/

void preencher(int array[], int num, int tam)
{
    int *pont, i;
    pont = &array[0];
    for(i=0; i<tam; i++)
    {
        *(pont + i) = num;
    }
}

int main()
{
    int numeros[10], x, len, j;
    x = 37;
    len = sizeof(numeros)/sizeof(numeros[0]);
    preencher(numeros, x, len);
    
    printf("O array apos a modificacao possui os seguintes valores:\n");
    for(j=0; j<len; j++)
    {
        printf("%d ", numeros[j]);
    }

    return 0;
}
