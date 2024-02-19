#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//  EXERCÍCIOS FUNÇÕES UFU EX.2

/*
Faca uma funcao que receba a data atual (dia, mes e ano em inteiro) e exiba-a na tela
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.
*/
int data_ext(int dia, int mes,int ano)
{
    char mes_ext[20];
    switch(mes)
    {
        case(1):
            strcpy(mes_ext, "Janeiro");
            break;
        case(2):
           strcpy(mes_ext, "Fevereiro");
            break;
        case(3):
            strcpy(mes_ext, "Março");
            break;
        case(4):
            strcpy(mes_ext, "Abril");
            break;
        case(5):
            strcpy(mes_ext, "Maio");
            break;
        case(6):
            strcpy(mes_ext, "Junho");
            break;
        case(7):
            strcpy(mes_ext, "Julho");
            break;
        case(8):
            strcpy(mes_ext, "Agosto");
            break;
        case(9):
            strcpy(mes_ext, "Setembro");
            break;
        case(10):
            strcpy(mes_ext, "Outrubro");
            break;
        case(11):
            strcpy(mes_ext, "Novembro");
            break;
        case(12):
            strcpy(mes_ext, "Dezembro");
            break;
        default: 
            printf("Mes invalido.");
            exit(0);
            break;
    }
    if(dia<0 || dia>31)
    {
        printf("Dia invalido.");
        exit(0);
    }
    printf("\nHoje é dia %d de %s de %d", dia, mes_ext, ano);
}


int main()
{
    int dia, mes, ano;
    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    data_ext(dia, mes, ano);
    return 0;
} 
