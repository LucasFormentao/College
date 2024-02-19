#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.2

/*
Escreva um programa que contenha duas variaveis inteiras. 
Compare seus endereços e exiba o maior endereço.
*/

int main(void)
{
    //  Declarando variáveis;
int a, *pa, b, *pb;


    //  Definindo valores das variáveis iniciais;
b = 3;
a = 7;


pb = &b;
pa = &a;

    //  Comparando os endereços para ver qual é o maior;
if (pa==pb)
{
    printf("Os ponteiros apontam para o mesmo endereço: %p\n", pa);
}
else if(pa>pb)
{
    printf("O maior ponteiro é \"pa\" e aponta para o endereço: %p\n", pa);
}
else if(pa<pb)
{
    printf("O maior ponteiro é \"pb\" e aponta para o endereço: %p\n", pb);
}
 return 0;
} 
