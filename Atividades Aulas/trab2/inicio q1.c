#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char nome[50], genero[20];
    float horas;
    int rank;
}filmes;

filmes rank[5];

filmes ler_filmes()
{
    filmes n;
    int pos;
    printf("Nome do filme:");
    fgets(n.nome,50,stdin);
    printf("\nGênero do filme:");
    fgets(n.genero,20,stdin);
    printf("\nDuração (em horas):");
    scanf("%f", &n.horas);
    printf("\nRanking do filme:");
    scanf("%d", &pos);
    getchar();
    n.rank = pos;
    rank[pos-1]=n;
    return n;
}

void imprimir(filmes n)
{
    printf("--------------------------------------------");
    printf("\nNome: %s", n.nome);
    printf("\nGênero: %s", n.genero);
    printf("\nDuração:%.2f horas", n.horas);
    printf("\nPosição:%d", n.rank);
    printf("--------------------------------------------");
}

void escolher_filme()
{
    int num;
    printf("Digite um número de 1 a 5:");
    scanf("%d", &num);
    imprimir(rank[num-1]);
}

int main()
{
    filmes movies[3];
    int i, opcao;
    
    for(i=0; i<3; i++)
    {
        movies[i]=ler_filmes();
    }
    
    printf("\n\n1 - Escolher um filme do catálogo\
    \n2 - Achar filmes por gênero\n3 - Verificar se o filme está no catálogo\
    \n0 - Sair");
    scanf("%d", &opcao);
    switch(opcao){
        case 1 :
            escolher_filme();
            break;
    }

    return 0;
}
