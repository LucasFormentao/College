#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, j;
    //Primeiro FOR controla o número de linhas
    for(i = 0; i < 6; i++)
    {
        //Segundo FOR controla o número de colunas
        for(j = 0; j <=10; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
