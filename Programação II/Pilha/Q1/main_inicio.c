#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
}numeros;

typedef struct no{
    numeros n;
    struct no *proximo;
}No;

typedef struct{
    No *topo;
    int tam;
}Pilha;

numeros ler_num(){
    numeros n;
    printf("\nDigite um numero inteiro:");
    scanf("%d", &n.num);
    return n;
}

void imprimir_num(numeros n){
    printf("Numero: %d", n.num);
}

void criar_pilha(Pilha *p){
    p->topo = NULL;
    p->tam = 0;
}

void empilhar_pilha(Pilha *p){
    No *novo = malloc(sizeof(No));
}

int main()
{
    ler_num();
    return 0;
}
