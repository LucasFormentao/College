#include <stdio.h>

//  EXERCÍCIOS PONTEIROS UFU EX.1

/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). 
Modifique os valores de cada variavel usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação. 
*/

int main(void)
{
    //  Declarando variáveis;
int num, *pnum;
float real, *preal;
char letra, *pletra;

    //  Definindo valores das variáveis iniciais
num = 12;
real = 53.7;
letra = 'K';

    //  Printando os valores iniciais
printf("Valores iniciais:\n");
printf("Numero inteiro: %d\n", num);
printf("Numero real: %.2f\n", real);
printf("Letra: %c\n", letra);

    // Associando as variáveis aos ponteiros;
pnum = &num;
preal = &real;
pletra = &letra;

    // Modificando os valores das variáveis com os ponteiros;
*pnum = 7;
*preal = 13.13;
*pletra = 'p';

    //  Printando os valores finais
printf("\nValores finais:\n");
printf("Numero inteiro: %d\n", num);
printf("Numero real: %.2f\n", real);
printf("Letra: %c\n", letra);

 return 0;
} 
