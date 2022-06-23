#include<stdlib.h>
#include <stdio.h>

int main()
{
    int saque, cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0;
    printf("Digite o valor do saque: R$");
    scanf("%d", &saque);
    while(saque%2 != 0 && saque%5 != 0)
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
        else if(saque >= 5 && saque%5 != 0)
        {
            cinco++;
            saque -= 5;
        }
        else if(saque >= 2)
        {
            dois++;
            saque -= 2;
        }
    }
    while (saque != 0);
    printf("Notas entregues:\nR$100 --- %d\nR$50 ---- %d\nR$20 ---- %d\nR$10 ---- %d\nR$5 ----- %d\nR$2 ----- %d"\
    , cem, cinquenta, vinte, dez, cinco, dois);
    return 0;
}
