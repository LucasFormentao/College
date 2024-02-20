#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.8

/*
Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array. 
*/


void func(int *n1, int *n2)
{
    *n1 += *n2;
}

int main()
{
    float nums[10], *pont;
    int i;
    
    for(i=0; i<=9; i++)
    {
        pont = &nums[i];
        printf("O endereço da posição %d do array é: %p\n", i, pont);
    }
    
    return 0;
}
