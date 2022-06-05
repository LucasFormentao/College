#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, k=0, m;
    char frase[100], final[100];
    
    printf("Digite uma frase para que ela seja escrita ao contrário: ");
    
    fgets(frase, 100, stdin);
    
    while((frase[k] != '\0') && (frase[k] != '\n'))
    k++;
    
    m = 0;
    
    for(i = k-1; i >=0 ; i--)
    {
        final[m] = frase[i];
        m++;
    }
    printf("Frase ao contrário: %s", final);
    
    
    return 0;
}
