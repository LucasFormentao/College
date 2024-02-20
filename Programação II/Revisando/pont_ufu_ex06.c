#include <stdlib.h>
#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.6

/*
Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao
que retorne a soma do dobro dos dois numeros lidos. A funcao devera armazenar o dobro
de A na propria variavel A e o dobro de B na propria variavel B.
*/


int sum_db(int *n1, int *n2)
{
    *n1 = 2 * *n1;
    *n2 = 2 * *n2;
    return(*n1 + *n2);
}

int main()
{
    int num1, num2;
    
    printf("Digite dois números inteiros: (Ex: 10 45)\n");
    scanf("%d %d", &num1, &num2);
    
    int *p1, *p2, s_dobro;
    
    p1 = &num1;
    p2 = &num2;
    
    s_dobro = sum_db(p1, p2);
    
    printf("\nO dobro dos números é respectivamente %d e %d.\n", num1, num2);
    printf("A soma do dobro é %d.", s_dobro);
    

    
    return 0;
}
