
#include <stdio.h>
#include <stdlib.h>


typedef struct aluno{
    int matricula;
    char nome[40];
    float media;
}Aluno;

typedef struct noABB{
    Aluno *info;
    struct noABB *esq;
    struct noABB *dir;
}NoABB;

NoABB *abb_cria(){
    NoABB *raiz = malloc(sizeof(NoABB));
    raiz->esq = NULL;
    raiz->dir = NULL;
    return raiz;
}

Aluno ler_info(){
    Aluno a;
    printf("\nDigite o nome do novo aluno (letras minusculas apenas):\n");
    fgets(a.nome, sizeof(a.nome), stdin);

    printf("\nDigite a matricula:\n");
    scanf("%d", &a.matricula);

    printf("\nDigite a media:\n");
    scanf("%f", &a.media);
    fflush(stdin);
    return a;
}

NoABB* abb_insere(NoABB *raiz){
    NoABB *novo = malloc(sizeof(NoABB));
    NoABB *aux = *raiz;
    if(novo){
        novo->info = ler_info();
        if(raiz == NULL){
            novo->dir = NULL;
            novo->esq = NULL;
            return novo;
        }
        while(aux){
            if(novo->info->media < aux->info->media)
                raiz = &aux->esq;
            else
                raiz = &aux->dir;
            aux = *raiz;
        }
        aux->info = novo->info;
        aux->esq = NULL;
        aux->dir = NULL;
        return aux;
    }
}

void abb_imprime(NoABB *raiz){
    if(raiz){
        abb_imprime(raiz->esq);
        printf("\n\nAluno: %s", raiz->info->nome);
        printf("\nMatricula: %d", raiz->info->matricula);
        printf("\nMedia: %f\n", raiz->info->media);
        abb_imprime(raiz->dir);
    }
}

int main(){

    NoABB *busca, *raiz = NULL;
    int opcao, valor;

    do{
        printf("\n\t0 - Sair\n\t1 - Inserir\n\t2 - Imprimir\n\t3 - Buscar\n\t4 - Altura\n\t5 - Tamanho\n\t6 - Folhas\n\t7 - Remover\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("\n\tDigite um valor: ");
            scanf("%d", &valor);
            //raiz = abb_insere(raiz, valor);
            //inserir_versao_2(&raiz, valor);
            inserir_versao_3(&raiz, valor);
            break;
        case 2:
            printf("\n\tPrimeira impressao:\n\t");
            imprimir_versao_1(raiz);
            printf("\n");
            printf("\n\tSegunda impressao:\n\t");
            abb_imprime(raiz);
            printf("\n");
            break;
        case 3:
            printf("\n\tDigite o valor a ser procurado: ");
            scanf("%d", &valor);
            //busca = buscar_versao_1(raiz, valor);
            busca = buscar_versao_2(raiz, valor);
            if(busca)
                printf("\n\tValor encontrado: %d\n", busca->valor);
            else
                printf("\n\tValor nao encontrado!\n");
            break;
        case 4:
            printf("\n\tAltura da arvore: %d\n\n", altura(raiz));
            break;
        case 5:
            printf("\n\tQuantidade de nos: %d\n", quantidade_nos(raiz));
            break;
        case 6:
            printf("\n\tQuantidade folhas: %d\n", quantidade_folhas(raiz));
            break;
        case 7:
            printf("\t");
            abb_imprime(raiz);
            printf("\n\tDigite o valor a ser removido: ");
            scanf("%d", &valor);
            raiz = remover(raiz, valor);
            break;
        default:
            if(opcao != 0)
                printf("\n\tOpcao invalida!!!\n");
        }
    }while(opcao != 0);

    return 0;
}

