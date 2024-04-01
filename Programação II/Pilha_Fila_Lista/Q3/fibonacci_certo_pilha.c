#include <stdio.h>
#include <stdlib.h>

typedef struct{
int num;
}numeros;

typedef struct No{
    numeros n;
    struct No *proximo;
}no;

typedef struct{
    no *topo;
    int tam;
}pilha;

void criar_pilha(pilha *p){
    p->topo = NULL;
    p->tam = 0;
}

void imprimir(numeros n){
    printf("Numero: %d\n", n.num);
}

void imprimir_pilha(pilha *p){
    no *aux = p->topo;
    printf("\n-------------- PILHA TAM: %d -----------\n", p->tam);
    while(aux){
        imprimir(aux->n);
        aux = aux->proximo;
    }
    printf("-------------- FIM PILHA --------------\n");
}

void empilhar(pilha *p){
    no *novo, *aux;
    novo = malloc(sizeof(no));

    if (novo){
        novo->proximo = p->topo;
        if (p->tam == 0 || p->tam == 1){
            novo->n.num = 1;
        }
        else{
            aux = p->topo;
            aux = aux->proximo;
            novo->n.num = p->topo->n.num + aux->n.num;
        }
        p->topo = novo;
        p->tam ++;
        printf("\nTamanho atual: %d\n", p->tam);
    }
    else{
        printf("\nErro ao alocar memória\n");
    }
}

int main(){
    pilha p1;
    int opcao;
    criar_pilha(&p1);

    do{
        printf("\n0 - Sair\n1 - Empilhar Pilha\n2 - Imprimir Pilha\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            empilhar(&p1);
            break;
        case 2:
            imprimir_pilha(&p1);
            break;
        default:
            if(opcao != 0)
                printf("\nOpcao invalida!!!\n");
        }
    }while(opcao != 0);
    printf("Encerrando o programa...");
    return 0;
}
