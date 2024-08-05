#include <stdio.h>
#include <stdlib.h>

typedef struct ab{
    int info;
    struct ab *esq, *dir;
}TAB;

void inserir(TAB **raiz, int num){
    TAB *aux = *raiz;
    while(aux){
        if(num < aux->info)
            raiz = &aux->esq;
        else
            raiz = &aux->dir;
        aux = *raiz;
    }
    aux = malloc(sizeof(TAB));
    aux->info = num;
    aux->esq = NULL;
    aux->dir = NULL;
    *raiz = aux;
}

void imprimir(TAB *raiz, int nivel) {
    if (raiz != NULL) {
        imprimir(raiz->dir, nivel + 1);
        printf("%*s%d\n", 4 * nivel, "", raiz->info);
        imprimir(raiz->esq, nivel + 1);
    }
}

TAB* copiarArvore(TAB *raiz){
    if (raiz == NULL) {
        return NULL;
    }

    // Cria um novo nó com o valor do nó raiz atual
    TAB *novaRaiz = malloc(sizeof(TAB));
    if (novaRaiz == NULL) {
        // Se não foi possível alocar memória, retornar NULL
        return NULL;
    }
    novaRaiz->info = raiz->info;
    novaRaiz->esq = copiarArvore(raiz->esq);
    novaRaiz->dir = copiarArvore(raiz->dir);

    return novaRaiz;
}

int main(){
    TAB *raiz = NULL, *copia;
    inserir(&raiz, 1);
    inserir(&raiz, 2);
    inserir(&raiz, 4);
    inserir(&raiz, 8);
    inserir(&raiz, 7);
    inserir(&raiz, 0);
    inserir(&raiz, 3);
    imprimir(raiz, 0);
    copia = copiarArvore(raiz);
    imprimir(copia,0);
    return 0;
}
