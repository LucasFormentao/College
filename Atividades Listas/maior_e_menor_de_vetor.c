#include<stdlib.h>
#include <stdio.h>

int main()
{
    int num[5], i, maior = 0, menor = 99999;
    
    for(i=0; i<5; i++)
    {
        printf("num[%d]:", i);
        scanf("%d", &num[i]);
        printf("\n");
    }
    for(i=0; i<5; i++)
    {
        if(num[i]>maior)
        {
            maior = num[i];
        }
        if(num[i]<menor)
        {
            menor = num[i];
        }
    }
    printf("Maior número: %d\nMenor número: %d", maior, menor);
    return 0;
}
