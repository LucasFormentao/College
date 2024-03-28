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
    no *fim;
    int tam;
}fila;

void criar_fila(fila *f){
    f->topo = NULL;
    f->fim = NULL;
    f->tam = 0;
}

numeros ler(){
    numeros n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n.num);
    return n;
}

void imprimir(numeros n){
    printf("Numero: %d\n", n.num);
}

void imprimir_fila(fila *f){
    no *aux = f->topo;
    printf("\n-------------- FILA TAM: %d -----------\n", f->tam);
    while(aux){
        imprimir(aux->n);
        aux = aux->proximo;
    }
    printf("-------------- FIM FILA --------------\n");
}

void inserir(fila *f, int num){
    no *novo;
    novo = malloc(sizeof(no));
    if (novo){
        novo->proximo = NULL;
        novo->n = num;
        if(f->topo == NULL)
            f->topo = novo;
            f->fim = novo;
        else{
            f->fim->proximo = novo;
            f->fim = novo;
        }
        f->tam ++;
        printf("\nTamanho atual: %d\n", f->tam);
    }
    else{
        printf("\nErro ao alocar memória\n");
    }
}

no* remover(fila *f){
    no *remover = NULL;
    
    if(fila->topo){
        remover = fila->prim;
        fila->prim = remover->proximo;
        fila->tam--;
    }
    else
        printf("\nFila vazia.\n");
    return remover;
}

int fibonacci(fila *f){
    no *aux1, *aux2;
    if(f->tam==0){
        return 1;
    }
    else if(f->tam==1){
        return 1;
    }
    else if(f->tam>1){
        
    }
}

int main(){
    fila f;
    int opcao;
    criar_fila(&f);

    do{
        printf("\n0 - Sair\n1 - Adicionar proximo valor\n2 - Imprimir\n3 - Remover o primeiro da fila\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            inserir(&f);
            break;
        case 2:
            imprimir_fila(&f);
            break;
        case 3:
            imprimir_fila(&f);
            break;
        
        default:
            if(opcao != 0)
                printf("\nOpcao invalida!!!\n");
        }
    }while(opcao != 0);
    printf("Encerrando o programa...");
    return 0;
}
