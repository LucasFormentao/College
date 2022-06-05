#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Como ler uma string do teclado com scanf
    char palavras[100];
    printf("Digite o seu primeiro nome:");
    scanf("%s", palavras);
    //No entanto, esse modelo no scanf para de ler após o primeiro espaço
    printf("%s", palavras);

    return 0;
}
