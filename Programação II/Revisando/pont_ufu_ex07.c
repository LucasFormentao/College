#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.7

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
    int num1, num2;
    
    printf("Digite dois números inteiros: (Ex: 10 45)\n");
    scanf("%d %d", &num1, &num2);
    
    int *p1, *p2;
    
    p1 = &num1;
    p2 = &num2;
    
    printf("\nOs valores inciais são respectivamente %d e %d.\n", num1, num2);
    
    func(p1, p2);
    
    printf("\nOs valores finais são respectivamente %d e %d.\n", num1, num2);

    return 0;
}
