#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.9

/*
Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz. 
*/


void func(int *n1, int *n2)
{
    *n1 += *n2;
}

int main()
{
    float nums[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}}, *pont;
    int i, j;
    
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2;j++)
        {
            pont = &nums[i][j];
            printf("O endereço da posição [%d,%d] da matriz é: %p e seu valor é: %.f\n", i+1, j+1, pont, *pont);
        }
    }
    
    return 0;
}
