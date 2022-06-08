#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k;
    char stra[100], strb[100];
    printf("String:\n");
    fgets(stra, 100, stdin);
    
    k = 0;
    for(i=0; stra[i] != '\0'; i++)
    {
       if(stra[i] != ' ')
       {
            strb[k] = stra[i];
            k++;
       }
       
    }
    
    printf("%s", strb);

    return 0;
}
