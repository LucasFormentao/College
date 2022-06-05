#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, k, um;
    char numero[100];
    
    printf("Digite um número e o programa trocará todos os 0's por 1's.\n");
    
    fgets(numero, 100, stdin);
    
    while((numero[k] != '\0') && (numero[k] != '\n'))
    k++;
    
    for(i = 0; i < k; i++)
    {
        if(numero[i] == '0')
        numero[i] = '1';
    }
    printf("Número sem zeros:%s", numero);
    
    
    return 0;
}
