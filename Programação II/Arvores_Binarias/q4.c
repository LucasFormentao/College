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

TAB* buscar(TAB *raiz, int num){
    while(raiz){
        if(num < raiz->info)
            raiz = raiz->esq;
        else if(num > raiz->info)
            raiz = raiz->dir;
        else
            return raiz;
    }
    return NULL;
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

TAB* espelharArvore(TAB *raiz){
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
    novaRaiz->esq = espelharArvore(raiz->dir);
    novaRaiz->dir = espelharArvore(raiz->esq);

    return novaRaiz;
}

TAB* maiorElemento(TAB *raiz){
    TAB *aux = raiz;
    if(raiz == NULL){
        return NULL;
    }
    if(raiz->dir){
        while(aux->dir){
            aux = aux->dir;
        }
    }
    return aux;
}

TAB* menorElemento(TAB *raiz){
    TAB *aux = raiz;
    if(raiz == NULL){
        return NULL;
    }
    if(raiz->esq){
        while(aux->esq){
            aux = aux->esq;
        }
    }
    return aux;
}

int main(){
    TAB *raiz = NULL, *copia, *espelha, *maior, *busca, *menor;
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
    espelha = espelharArvore(raiz);
    imprimir(espelha,0);
    maior = maiorElemento(raiz);
    printf("No do maior elemento:\n");
    imprimir(maior, 0);
    busca = buscar(raiz, 7);
    if(busca)
        printf("\nValor encontrado: %d\n", busca->info);
    else
        printf("\nValor nao encontrado!\n");
    menor = menorElemento(raiz);
    printf("No do menor elemento:\n");
    imprimir(menor, 0);
    return 0;
}
