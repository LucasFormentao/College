#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0, k=0, m=0;
    char frase[100], final[100];
    
    printf("Digite uma frase para que ela seja escrita sem suas vogais: ");
    
    fgets(frase, 100, stdin);
    
    while((frase[k] != '\0') && (frase[k] != '\n'))
    k++;
    
    for(i=0; i<k; i++)
    {
        if(frase[i] != 'a' && frase[i] != 'A' && frase[i] != 'e' && frase[i] != 'E'\
        && frase[i] != 'i' && frase[i] != 'I' && frase[i] != 'o' && frase[i] != 'O'\
        && frase[i] != 'u' && frase[i] != 'U')
        {
            final[m] = frase[i];
            m++;
        }
    }
    
    printf("Frase sem vogais: %s", final);
    
    
    return 0;
}
