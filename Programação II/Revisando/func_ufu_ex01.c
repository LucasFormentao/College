#include <stdio.h>

//  EXERCÍCIOS FUNÇÕES UFU EX.1

/*
Crie uma funçao que recebe como parametro um numero inteiro e devolve o seu dobro.
*/
int dobro(int a)
{
    return 2*a;
}


int main()
{
    int x = 7;
    printf("%d", dobro(x));
    return 0;
} 
