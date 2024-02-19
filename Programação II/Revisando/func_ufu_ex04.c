#include <stdio.h>
#include <math.h>
#include <stdbool.h>


//  EXERCÍCIOS FUNÇÕES UFU EX.4

/*
Faca uma func¸ao para verificar se um numero e um quadrado perfeito. Um quadrado
perfeito e um numero inteiro nao negativo que pode ser expresso como o quadrado de
outro numero inteiro. Ex: 1, 4, 9... 
*/

bool quadrado(int a)
{
    float raiz = sqrt(a);
    if( raiz - floor(raiz) == 0)
    {
        printf("O número é quadrado perfeito");
    }
    else printf("O número não é quadrado perfeito");
}

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    quadrado(num);
    return 0;
} 
