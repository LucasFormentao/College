#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, lin=3, col=2;
    int mat_1[lin][col], mat_2[lin][col], mat_3[lin][col];
    srand(time(NULL));
    
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            mat_1[i][j] = rand()%500;
            mat_2[i][j] = rand()%500;
            mat_3[i][j] = mat_1[i][j] + mat_2[i][j];
        }
    }
    printf("Matriz 1:\n");
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%3d ", mat_1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2:\n");
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%3d ", mat_2[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz soma:\n");
    
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%3d ", mat_3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
