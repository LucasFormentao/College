#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.11 INCOMPLETO

/*
Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereco das posicoes contendo valores pares.
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
    }

    for(i=0; i<=4; i++)
    {
        
        pont = &nums[i];
        if(*pont % 2 == 0)
        {
            printf("A posição %d do array contém um número par e seu endereco e: %p\n", i, pont);
        }
    }

    return 0;
}
