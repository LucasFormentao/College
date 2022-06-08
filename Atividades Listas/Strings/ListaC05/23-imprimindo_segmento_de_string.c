#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, a, b, k=0;
    char stra[100], strb[100];
    printf("String:\n");
    fgets(stra, 100, stdin);
    printf("int 1: ");
    scanf("%d", &a);
    getchar();
    printf("\nint 2: ");
    scanf("%d", &b);
    while(a > b)
    {
        printf("\nValores inválidos, tente novamente.\n");
        printf("int 1: ");
        scanf("%d", &a);
        getchar();
        printf("\nint 2: ");
        scanf("%d", &b);
    }
    
    for(i=a; i<=b; i++)
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
