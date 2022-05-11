#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    //int avai[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    //pode ser substiruído por:
    //int avai [10]
    //podemos fazer também:
    int x, i;
   
    printf("Digite o tamanho do vetor:");
    scanf("%d", &x);
    
    int avai[x];
    //int avai[5]={0}; dá um vetor nulo
    
    
    for(i=0; i<x; i++)
    {
        printf("avai[%d]:", i);
        scanf("%d", &avai[i]);
    }    
    for(i=0; i<x;i++)
        printf("%d ", avai[i]);
    
    return 0;
}
