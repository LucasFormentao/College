#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em
um vetor de double, depois use a função MALLOC para reservar (alocar) o espaço de
memória de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho
maior ou igual a 10 elementos. Use este vetor dinâmico como um vetor comum,
atribuindo aos 10 primeiros elementos do vetor valores aleatórios (usando a função
rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos
do vetor.
*/

int main()
{
    int tam, i;
    double *dados;

    srand(time(0));
    printf("Digite o tamanho do vetor (>=10):");
    scanf("%d", &tam);

    dados = (double*) malloc(sizeof(double) * tam);
    if(dados == NULL)
    {
        perror("main:");
        exit(-1);
    }

    for(i=0;i<tam;i++)
    {
        dados[i] = rand() %100 + 1;
    }

    printf("Um vetor de %d posicoes foi criado usando malloc,"
           "a seguir estao os valores das 10 primeiras posicoes:\n", tam);

    for(i=0;i<10; i++)
    {
        printf("%lf ", dados[i]);
    }

    return 0;
}
