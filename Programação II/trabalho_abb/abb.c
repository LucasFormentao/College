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

Aluno *ler_info(){
    Aluno *a = malloc(sizeof(Aluno));
    printf("\nDigite o nome do novo aluno:\n");
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
    NoABB *aux = raiz;
    if(novo){
        novo->info = ler_info();
        novo->dir = NULL;
        novo->esq = NULL;

        if(raiz == NULL){
            return novo;
        }

        while(aux){
            if(novo->info->media < aux->info->media)
                raiz = &aux->esq;
            else
                raiz = &aux->dir;
            aux = *raiz;
        }
        aux = novo;
        return aux;
    }
    else
        printf("\nNao foi possivel alocar a memoria!\n");
}

void abb_imprimeIndividual(Aluno *info){
    printf("\n\nAluno: %s",info->nome);
    printf("\nMatricula: %d", info->matricula);
    printf("\nMedia: %.2f\n", info->media);
}

void abb_imprime(NoABB *raiz){
    if(raiz){
        abb_imprime(raiz->esq);
        abb_imprimeIndividual(raiz->info);
        abb_imprime(raiz->dir);
    }
}

void abb_libera(NoABB *raiz){
    if(raiz){
        abb_libera(raiz->esq);
        abb_libera(raiz->dir);
        free(raiz->info);
        free(raiz);
    }
}

void abb_alunoComMaiorMedia(NoABB *raiz){
    NoABB *aux = raiz;
    while(aux->dir != NULL){
        aux = aux->dir;
    }
    printf("\nDados do aluno com maior média:");
    abb_imprimeIndividual(aux->info);
}

int abb_contaAprovados(NoABB *raiz){
    if(raiz == NULL)
        return 0;
    
    if(raiz->info->media >= 6)
        return 1 + abb_contaAprovados(raiz->esq) + abb_contaAprovados(raiz->dir);
    else
        return abb_contaAprovados(raiz->dir);
}

void abb_imprimeAprovados(NoABB *raiz){
    if(raiz != NULL){
        if (raiz->dir != NULL && raiz->info->media >= 6) {
            abb_imprimeAprovados(raiz->dir);
        }
        if (raiz->info->media >= 6) {
            abb_imprimeIndividual(raiz->info);
        }
        if (raiz->esq != NULL && (raiz->info->media >= 6 || raiz->dir != NULL)) {
            abb_imprimeAprovados(raiz->esq);
        }
    }
}

int abb_contaIntervalo(NoABB *raiz, float min, float max){
    if(raiz == NULL)
        return 0;
    
    int num = 0;

    if(raiz->info->media >= min)
        num += abb_contaIntervalo(raiz->dir, min, max);

    if(raiz->info->media >= min && raiz->info->media <= max)
        num++;

    if(raiz->info->media <= max)
        num += abb_contaIntervalo(raiz->dir, min, max);

    return num;
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
            abb_insere(&raiz);
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
