#include <stdio.h>
#include <stdlib.h>
#include "jogador.h"

int main()
{
    int num;
    printf("Insira o numero de jogadores que deseja cadastrar: ");
    scanf("%d", &num);
    fflush(stdin);
    Stats *vetor = jog_aloc(num);
    jog_atribui(vetor,num);
    jog_imprime(vetor);
    jog_ehbom(vetor);

    return 0;
}
