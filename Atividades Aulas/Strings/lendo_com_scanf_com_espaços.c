#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Como ler uma string do teclado com scanf.
    char palavras[100];
    printf("Digite o seu primeiro nome:");
    scanf("%100[^\n]", palavras);
    //Já esse modelo conta os espaços também.
    printf("%s", palavras);

    return 0;
}
