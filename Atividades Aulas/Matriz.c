#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, lin=3, col=2;
    int mat_1[lin][col];
    //O nome da matriz é o endereço que guarda a posição [0,0]//
    printf("Entre com os valores da matriz:\n");
    
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("\nDigite o valor da posição[%d][%d]", i, j);
            scanf("%d", &mat_1[i][j]);
        }
    }
    
    printf("\nMatriz digitada:\n");
    
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%2d ", mat_1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
