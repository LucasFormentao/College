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

int main() {
    NoABB *raiz = abb_cria();
    
    // Inserindo alunos
    printf("Inserindo aluno 1:\n");
    raiz = abb_insere(raiz);
    printf("Inserindo aluno 2:\n");
    raiz = abb_insere(raiz);
    printf("Inserindo aluno 3:\n");
    raiz = abb_insere(raiz);
    printf("Inserindo aluno 4:\n");
    raiz = abb_insere(raiz);
    printf("Inserindo aluno 5:\n");
    raiz = abb_insere(raiz);

    // Imprimindo a árvore
    printf("Árvore de alunos:\n");
    abb_imprime(raiz);

    // Imprimindo aluno com a maior média
    printf("Aluno com a maior média:\n");
    abb_alunoComMaiorMedia(raiz)

    // Contando alunos aprovados
    int aprovados = abb_contaAprovados(raiz);
    printf("Número de alunos aprovados: %d\n", aprovados);
    
    // Contando alunos em intervalo
    float min = 5.0, max = 7.0;
    int count = abb_contaIntervalo(raiz, min, max);
    printf("Número de alunos com média entre %.2f e %.2f: %d\n", min, max, count);
    
    // Liberar memória
    abb_libera(raiz);
    
    return 0;
}
