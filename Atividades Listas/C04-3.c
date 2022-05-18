#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float mat[10], mat_ao_quadrado[10];
    printf("Digite 10 valores para compor o seu vetor:");
    scanf("%f%f%f%f%f%f%f%f%f%f", &mat[0], &mat[1], &mat[2], &mat[3], &mat[4], \
            &mat[5], &mat[6], &mat[7], &mat[8], &mat[9]);
    
    printf("\nO vetor digitado foi:[ ");
    for(i=0;i<10;i++)
    {
        printf("%.f ", mat[i]);
    }
    printf("]");
    
    printf("\nO quadrado do vetor é:[ ");
    for(i=0;i<10;i++)
    {
        printf("%.f ", mat_ao_quadrado[i] = mat[i]*mat[i]);
    }
    printf("]");
    
    return 0;
}
