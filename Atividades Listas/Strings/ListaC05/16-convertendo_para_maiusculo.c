#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char frase[100];
    printf("Entre com uma frase:\n");
    
    fgets(frase, 100, stdin);
    
    for(i=0; frase[i] != '\0'; i++)
    {
        if(frase[i]>='a' && frase[i]<='z')
        {
            frase[i] = frase[i]-32;
        }
    }
    printf("%s", frase);

    return 0;
}
