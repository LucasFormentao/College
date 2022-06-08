#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, m, l;
    char stra[100], strb[100], strc[100], strd[100];
    printf("String:\n");
    fgets(stra, 100, stdin);
    
    k = 0;
    for(i=0; stra[i] != '\0'; i++)
    {
       if(stra[i] != ' ' && stra[i] != ',' && stra[i] != '.')
       {
            strc[k] = stra[i];
            k++;
       }
    }
    while((strc[k] != '\0') && (strc[k] != '\n'))
    l++;
    
    m = 0;
    
    for(i = l-1; i >=0 ; i--)
    {
        strb[l] = strc[i];
        m++;
    }
    
    printf("%s", strb);
    
    printf("%s", strc);
    
    if(strb == strc)
    {
        printf("A frase eh palindroma.");
    }
    else
    {
        printf("A frase nao eh palindroma.");
    }
    
    return 0;
}
