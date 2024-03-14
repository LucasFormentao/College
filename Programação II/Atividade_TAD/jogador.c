#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "jogador.h"

/*
Implemente um TAD Jogador de Futebol.
- Cada jogador possui os campos nome, jogos, gols e assistências.
- Implemente as operações:
(a) Atribui: atribui valores para os campos;
(b) Imprime: imprime os dados / estatísticas do jogador;
(c) EhBom: testa se o jogador é bom (defina seu próprio critério de bom jogador).
- Crie o main para testar seu TAD;
- Utilize alocação dinâmica de memória e modularização.
*/

struct stats{
char nome[20];
int jogos;
int gols;
int assist;
};

Stats* jog_aloc(int n)
{
    Stats *end_stat = calloc(n,sizeof(Stats));
    return end_stat;
}

void jog_atribui(Stats *vec, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nInsira o nome do jogador (apenas o primeiro):");
        scanf("%20[^\n]", vec[i].nome);
        printf("\nInsira o numero de jogos:");
        scanf("%d", &vec[i].jogos);
        printf("\nInsira o numero de gols:");
        scanf("%d", &vec[i].gols);
        printf("\nInsira o numero de assistencias:");
        scanf("%d", &vec[i].assist);
        fflush(stdin);
    }
}

void jog_imprime(Stats *vec)
{
    int i;
    printf("\nDigite o indice do jogador para ver suas estatisticas: ");
    scanf("%d", &i);
    printf("Os dados do jogador selecionado sao os seguintes:");
    printf("\nNome: %s\nNumero de jogos: %d\nNumero de gols:%d\nNumero de assistencias:%d", vec[i].nome, vec[i].jogos, vec[i].gols, vec[i].assist);
}

void jog_ehbom(Stats *vec)
{
    float metrica;
    int i;
    printf("\nDigite o indice do jogador para ver se eh bom: ");
    scanf("%d", &i);
    metrica = (0.2 * vec[i].assist + 0.7 * vec[i].gols)/vec[i].jogos;
    if(metrica >= 2)
    {
        printf("O jogador e bom");
    }
    else
    {
        printf("O jogador nao e bom");
    }
}
