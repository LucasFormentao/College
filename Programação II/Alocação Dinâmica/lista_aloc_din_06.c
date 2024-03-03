#include <stdlib.h>
#include <stdio.h>

/*
Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
a) Deverão ser armazenados, para cada aluno: matrıcula, nome (apenas um) e ano
de nascimento.
b) Ao início do programa, o usuário deverá informar o número de alunos que serão
armazenados
c) O programa devera alocar dinamicamente a quantidade necessária de memória
para armazenar os registros dos alunos.
d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
e) Ao final, mostrar os dados armazenados e liberar a memória alocada.
*/

typedef struct{
    long long int matricula;
    char nome[20];
    int ano;
}registro;

int main()
{
    int tam, i;
    registro *dados;
    printf("Insira o numero de alunos a serem cadastrados:");
    scanf("%d", &tam);

    dados = (registro*) malloc(sizeof(registro)*tam);
    for(i=0;i<tam;i++)
    {
        printf("\nRealizando cadastro do aluno %d", i+1);
        printf("\nMatricula: ");
        scanf("%lld", &dados[i].matricula);
        printf("Nome: ");
        scanf("%s", dados[i].nome);
        printf("Ano de nascimento: ");
        scanf("%d", &dados[i].ano);
    }

    printf("\nOs dados armazenados foram os seguintes:");

    for(i=0; i<tam; i++)
    {
        printf("\nAluno %d:", i+1);
        printf("\nMatricula: %lld", dados[i].matricula);
        printf("\nNome: %s", dados[i].nome);
        printf("\nAno de nascimento: %d\n", dados[i].ano);
    }

    free(dados);
    return 0;
}
