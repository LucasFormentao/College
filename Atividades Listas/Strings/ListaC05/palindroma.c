#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, k=0, m=0, boolean;
char frase[100], contra[100];

int main()
{
    int i, k=0, m=0, l=0;
    char frase[100], final[100], limpo[100];
    
    printf("Digite:");
    
    fgets(frase, 100, stdin);
    
    for(i=0; frase[i] != '\0'; i++)
    {
       if(frase[i] != ' ' && frase[i] != ',' && frase[i] != '.' )
       {
            limpo[l] = frase[i];
            l++;
       }
    }
    k = strlen(limpo)-1;
    
    m = 0;
    for(i = k-1; i >=0 ; i--)
    {
        contra[m] = limpo[i];
        m++;
    }
    printf("\n%s\n", limpo);
    printf("\n%s\n", contra);
    boolean = strcmp(limpo,contra);
    printf("\n%d\n", boolean);
    if(strcmp(limpo,contra) == 10)
    {
        printf("A frase eh palindroma.");
    }
    else
    {
        printf("A frase nao eh palindroma.");
    }
    
    for(i=0; i<20; i++)
    {
        printf("%c   %c\n", contra[i], limpo[i]);
    }
    
    
    return 0;
}
