#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    int mat[6], mat_ao_quadrado[10];
    printf("Digite 6 números inteiros:\n");
    scanf("%d%d%d%d%d%d", &mat[0], &mat[1], &mat[2], &mat[3], &mat[4], &mat[5]);
    
    for(i=5;i>=0;i--)
    {
        printf("%d ", mat[i]);
    }
    
    return 0;
}
