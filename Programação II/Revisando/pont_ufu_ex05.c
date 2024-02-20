#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.5

/*
Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes 
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
segunda variavel. Escreva o conteudo das 2 variaveis na tela.
*/


void maior(int *n1, int *n2)
{
    int temp;
    if(*n1<*n2)
    {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
}

int main()
{
    int num1, num2;
    
    printf("Digite dois números inteiros: (Ex: 10 45)\n");
    scanf("%d %d", &num1, &num2);
    
    int *p1, *p2;
    
    p1 = &num1;
    p2 = &num2;
    
    maior(p1, p2);
    
    if(num1==num2)
    {
        printf("Os dois números são iguais a %d", num1);
    }
    else
    {
        printf("O maior número é %d e o menor é %d", num1, num2);
    }
    
    return 0;
}
