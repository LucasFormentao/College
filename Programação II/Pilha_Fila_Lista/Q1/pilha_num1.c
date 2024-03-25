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
    printf("Numero: %d\n", n.num);
}

void criar_pilha(Pilha *p){
    p->topo = NULL;
    p->tam = 0;
}

void empilhar(Pilha *p){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo->n = ler_num();
        novo->proximo = p->topo;
        p->topo = novo;
        p->tam++;
    }
    else
        printf("\nErro ao alocar memoria...\n");
}

No* desempilhar(Pilha *p){
    if(p->topo){
        No *remover = p->topo;
        p->topo = remover->proximo;
        p->tam--;
        return remover;
    }
    else{
        printf("\nPilha vazia!\n");
        return NULL;
    }
}

void imprimir_pilha(Pilha *p){
    No *aux = p->topo;
    printf("\n---------- PILHA TAM: %d ----------\n", p->tam);
    while(aux){
        imprimir_num(aux->n);
        aux = aux->proximo;
    }
    printf("---------- FIM PILHA ----------\n");
}

int main()
{
    No *remover;
    Pilha p;
    int opcao;

    criar_pilha(&p);

    do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            empilhar(&p);
            break;
        case 2:
            remover = desempilhar(&p);
            if(remover){
                printf("\nElemento removido com sucesso!\n");
                imprimir_num(remover->n);

                free(remover);
            }
            else
                printf("\nSem no a remover.\n");
            break;
        case 3:
            imprimir_pilha(&p);
            break;
        default:
            if(opcao != 0)
                printf("\nOpcao invalida!!!\n");
        }
    }while(opcao != 0);


    return 0;
}
