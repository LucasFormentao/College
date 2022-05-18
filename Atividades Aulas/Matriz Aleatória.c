#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, lin=3, col=2;
    int mat_1[lin][col];
    //O nome da matriz é o endereço que guarda a posição [0,0]//
    srand(time(NULL));
    
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            mat_1[i][j] = rand()%500;
        }
    }
    
    printf("\nMatriz digitada:\n");
    
    for(i=1; i<=lin;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("%3d ", mat_1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

