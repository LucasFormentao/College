#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, k, um;
    char numero[100];
    
    printf("Digite um número e o programa dirá quantos 1's esse número tem.\n");
    
    fgets(numero, 100, stdin);
    
    while((numero[k] != '\0') && (numero[k] != '\n'))
    k++;
    
    for(i = 0; i < k; i++)
    {
        if(numero[i] == '1')
        um++;
    }
    printf("O número digitado tem (%d) 1's", um);
    
    return 0;
}
