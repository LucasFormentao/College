#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.8

/*
Crie um programa que contenha uma funcao que permita passar por parametro dois
numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e
armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera
modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal.
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
