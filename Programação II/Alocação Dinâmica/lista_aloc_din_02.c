#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int *par_impar(int *vetor, int *par, int *impar, int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(vetor[i] % 2 == 0)
        {
            (*par)++;
        }
        else{
            (*impar)++;
        }
    }
}

int main()
{
    int tam, i, *vec, *pa, par = 0, impar = 0;
    srand(time(NULL));
    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam);
    
    vec = (int*) malloc(sizeof(int) * tam);
    
    if(vec == NULL)
    {
        perror("main:");
        exit(-1);
    }
    
    for(i=0; i<tam; i++)
    {
        vec[i] = rand() %500 + 1;
    }
    
    printf("O vetor preenchido com números aleatórios é o seguinte:\n");
    for(i=0; i<tam; i++)
    {
        printf("%d ", vec[i]);
    }
    
    par_impar(vec,&par,&impar, tam);
    
    printf("\nO vetor possui %d numeros pares e %d numeros impares", par, impar);
    
    free(vec);
    
    return 0;
}
