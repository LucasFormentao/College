#include <stdlib.h>
#include <stdio.h>
//Criando a struct.
typedef struct
{
    char nome[50], genero[20];
    float horas;
    int rank;
}filmes;
//Variável universal do tipo filmes para gravar a posição de cada filme no rank.
filmes rank[5];
//Vetor universal do tipo filmes para gravar os dados dos filmes.
filmes movies[3];
//Função para ler todos os dados de cada filme.
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
    //Atribuindo todos os detalhes do filme à sua respectiva posição no ranking.
    n.rank = pos;
    rank[pos-1]=n;
    return n;
}
//Função para imprimir os detalhes de um filme.
void imprimir(filmes n)
{
    printf("--------------------------------------------");
    printf("\nNome: %s", n.nome);
    printf("Gênero: %s", n.genero);
    printf("Duração:%.2f horas", n.horas);
    printf("\nPosição:%d\n", n.rank);
    printf("--------------------------------------------");
}
//Função para imprimir um filme de acordo com sua posição no ranking.
void escolher_filme()
{
    int num;
    printf("\nDigite um número de 1 a 5:");
    scanf("%d", &num);
    imprimir(rank[num-1]);
}
//Função para verificar quais são os filmes de certo genero.
void genero()
{
    int i, b;
    char gen[20];
    filmes m;
    printf("\nDigite o genero que deseja procurar: ");
    getchar();
    fgets(gen,20,stdin);
    for(i=0;i<5;i++)
    {
        m = movies[i];
        if(m.genero == gen){
            b=1;
            printf("\n%d-%s", b, m.nome);
            b++;
        }
    }
}

int main()
{
    int i, opcao;
    
    for(i=0; i<3; i++)
    {
        movies[i]=ler_filmes();
    }
    
    printf("\n\n1 - Escolher um filme do catálogo\
    \n2 - Achar filmes por gênero\n3 - Verificar se o filme está no catálogo\
    \n0 - Sair\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1 :
            escolher_filme();
            break;
        case 2 :
            genero();
            break;
    }

    return 0;
}
