#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
    float prem, val1, val2, val3, soma, perc1, perc2, perc3, fin1, fin2, fin3;

    printf("Digite o valor do premio da loteria: R$");
    scanf("%f", &prem);

    printf("\nDigite aqui o valor investido pelo primeiro apostador: R$");
    scanf("%f", &val1);

    printf("\nAgora digite o valor investido pelo segundo apostador: R$");
    scanf("%f", &val2);

    printf("\nPor fim, digite o valor investido pelo terceiro apostador: R$");
    scanf("%f", &val3);

    soma=val1+val2+val3;
    perc1=val1/soma;
    perc2=val2/soma;
    perc3=val3/soma;
    fin1=perc1*prem;
    fin2=perc2*prem;
    fin3=perc3*prem;

    printf("Para as quantias apostados de R$%.2f, R$%.2f e R$%.2f, os valores proporcionais ", val1, val2, val3);
    printf("a serem recebidos são:\nAmigo 1:R$%.2f\nAmigo 2: R$%.2f\nAmigo 3: R$%.2f", fin1, fin2, fin3);

    return 0;
}
