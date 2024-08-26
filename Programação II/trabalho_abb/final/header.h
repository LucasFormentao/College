#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    int matricula;
    char nome[40];
    float media;
} Aluno;

typedef struct noABB {
    Aluno *info;
    struct noABB *esq;
    struct noABB *dir;
} NoABB;
NoABB *abb_cria();
Aluno *ler_info();
NoABB* abb_insere(NoABB *raiz);
void abb_imprimeIndividual(Aluno *info);
void abb_imprime(NoABB *raiz);
void abb_libera(NoABB *raiz);
void abb_alunoComMaiorMedia(NoABB *raiz);
int abb_contaAprovados(NoABB *raiz);
void abb_imprimeAprovados(NoABB *raiz);
int abb_contaIntervalo(NoABB *raiz, float min, float max);

