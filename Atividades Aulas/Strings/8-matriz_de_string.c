#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //Criando matrizes de strings
    char nomes[3][30];
    int lin;

    for(lin = 0; lin < 3; lin++){
        printf("\nDigite o %dº nome: ", lin+1);
        fgets(nomes[lin],30,stdin);
    }

    printf("Nomes Digitados:\n");
    for(lin = 0; lin < 3; lin++)
        printf("\nNome na %dº posicao: %s", lin+1, nomes[lin]);

    return 0;
}
