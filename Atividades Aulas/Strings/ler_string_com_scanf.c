#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Como ler uma string do teclado com scanf
    char palavras[100];
    printf("Digite o seu primeiro nome:");
    scanf("%s", palavras);
    printf("%s", palavras);

    return 0;
}
