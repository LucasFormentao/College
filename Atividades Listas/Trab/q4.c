/*
Lucas Formentão Rodrigues - PRG22003
*/
#include<stdlib.h>
#include <stdio.h>

int main()
{
    int saque, cem = 0, cinquenta = 0, vinte = 0, dez = 0;
    printf("Digite o valor do saque: R$");
    scanf("%d", &saque);
    while(saque%10 != 0)
    {
        printf("Valor inválido, tente novamente: R$");
        scanf("%d", &saque);
    }
    
    do
    {
        if(saque >= 100)
        {
            cem++;
            saque -= 100;
        }
        else if(saque >= 50)
        {
            cinquenta++;
            saque -= 50;
        }
        else if(saque >= 20)
        {
            vinte++;
            saque -= 20;
        }
        else if(saque >= 10)
        {
            dez++;
            saque -= 10;
        }
    }
    while (saque != 0);
    printf("Notas entregues:\nR$100 --- %d\nR$50 ---- %d\nR$20 ---- %d\nR$10 ---- %d"\
    , cem, cinquenta, vinte, dez);
    return 0;
}
