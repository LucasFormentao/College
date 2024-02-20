#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.10

/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido.
*/

int main()
{
    int nums[5], *pont;
    int i;
    
    for(i=0; i<=4; i++)
    {
        pont = &nums[i];
        printf("Digite o valor para a posição %d do array: ", i);
        scanf("%d", &*pont);
        *pont = 2 * *pont;
    }
    printf("O dobro dos valores é:\n[ ");
    for(i=0; i<=4; i++)
    {
        pont = &nums[i];
        printf("%d ", *pont);
    }
    printf("]");
    return 0;
}
