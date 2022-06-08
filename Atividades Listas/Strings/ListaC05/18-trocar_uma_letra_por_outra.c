#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char str[100], A, B;
    printf("String:\n");
    fgets(str, 100, stdin);
    
    printf("\nL1:\n");
    scanf("%c", &A);
    
    getchar();
    
    printf("\nL2:\n");
    scanf("%c", &B);
    
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == A)
        str[i] = B;
    }
    printf("%s", str);

    return 0;
}
