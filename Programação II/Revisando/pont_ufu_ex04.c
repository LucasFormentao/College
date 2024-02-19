#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.4

/*
Faça um programa que leia 2 valores inteiros e chame uma funçao que receba estas
2 variaveis e troque o seu conteudo, ou seja, esta funçao e chamada passando duas
variaveis A e B por exemplo e, apos a execuçao da funçao, A contera o valor de B e B 
tera o valor de A.
*/
int troca(int *pont1, int *pont2)
{
    int temp;
    temp = *pont1;
    *pont1 = *pont2;
    *pont2 = temp;
}


int main()
{
    //  Declarando variáveis;
int a, *pa, b, *pb;


    //  Definindo valores das variáveis iniciais;
printf("Defina um valor inteiro para as variaveis a e b: ");
scanf("%d %d", &a, &b);
printf("\na: %d, b: %d\n", a, b);

pa = &a;
pb = &b;

printf("\npa: %d, pb: %d\n", *pa, *pb);

troca(pa, pb);

printf("\na: %d, b: %d\n", a, b);
printf("\npa: %d, pb: %d\n", *pa, *pb);
 return 0;
} 
