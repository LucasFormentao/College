#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

NoABB *abb_cria(){
    return NULL;
}

Aluno *ler_info(){
    Aluno *a = malloc(sizeof(Aluno));
    if (a) {
        printf("\nDigite o nome do novo aluno:\n");
        fgets(a->nome, sizeof(a->nome), stdin);

        a->nome[strcspn(a->nome, "\n")] = 0;

        printf("\nDigite a matricula:\n");
        scanf("%d", &a->matricula);

        printf("\nDigite a media:\n");
        scanf("%f", &a->media);

        while (getchar() != '\n');
    }
    return a;
}

NoABB* abb_insere(NoABB *raiz){
    NoABB *novo = malloc(sizeof(NoABB));
    if (novo) {
        novo->info = ler_info();
        novo->esq = NULL;
        novo->dir = NULL;

        if (raiz == NULL) {
            return novo;
        }

        NoABB *pai = NULL;
        NoABB *aux = raiz;

        while (aux) {
            pai = aux;
            if (novo->info->media < aux->info->media) {
                aux = aux->esq;
            } else {
                aux = aux->dir;
            }
        }

        if (novo->info->media < pai->info->media) {
            pai->esq = novo;
        } else {
            pai->dir = novo;
        }

        return raiz;
    } else {
        printf("\nNao foi possivel alocar a memoria!\n");
        return NULL;
    }
}

void abb_imprimeIndividual(Aluno *info){
    printf("\n\nAluno: %s",info->nome);
    printf("\nMatricula: %d", info->matricula);
    printf("\nMedia: %.2f\n", info->media);
}

void abb_imprime(NoABB *raiz){
    if(raiz == NULL)
        return;

    if(raiz->esq)
        abb_imprime(raiz->esq);

    abb_imprimeIndividual(raiz->info);

    if(raiz->dir)
        abb_imprime(raiz->dir);
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
    printf("\nDados do aluno com maior media:");
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

    if(raiz->info->media >= min && raiz->info->media <= max)
        num ++;
    if (raiz->info->media > min)
        num += abb_contaIntervalo(raiz->esq, min, max);
    if (raiz->info->media < max)
        num += abb_contaIntervalo(raiz->dir, min, max);

    return num;
}
