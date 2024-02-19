#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.3

/*
Escreva um programa que contenha duas variaveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteudo do maior endereço. 
*/

int main(void)
{
    //  Declarando variáveis;
int a, *pa, b, *pb;


    //  Definindo valores das variáveis iniciais;
printf("Defina um valor inteiro para as variaveis a e b: ");
scanf("%d %d", &a, &b);
printf("\na: %d, b: %d\n", a, b);

pa = &a;
pb = &b;

    //  Comparando os endereços para ver qual é o maior;
if (pa==pb)
{
    printf("Os ponteiros apontam para o mesmo endereço, e o valor é: %d\n", a);
}
else if(pa>pb)
{
    printf("O maior ponteiro e \"pa\" e aponta para o valor: %d\n", a);
}
else if(pa<pb)
{
    printf("O maior ponteiro e \"pb\" e aponta para o valor: %d\n", b);
}
 return 0;
}
