#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    float preco;
    int qtd;
}Produto;

typedef struct no{
    Produto produto;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;

void criar_lista(Lista *lista){
    lista->inicio = NULL;
    lista->tam = 0;
}

Produto ler_produto(){
    Produto p;
    printf("\nDigite o codigo do produto:\n");
    scanf("%d", p.codigo);
    printf("\nDigite o preco do produto:\n");
    scanf("%f", p.preco);
    printf("\nDigite a quantidade de rodutos em estoque\n");
    scanf("%d", p.qtd);
    return p;
}

// procedimento para inserir no fim
void inserir_no_fim(Lista *lista){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->produto = ler_produto();
        novo->proximo = NULL;

        // é o primeiro?
        if(lista->inicio == NULL)
            lista->inicio = novo;
        else{
            aux = lista->inicio;
            while(aux->proximo)
                aux = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void imprimir(Lista lista){
    No *aux = lista.inicio, *no = lista.inicio;
    int cont_maior = 0;
    printf("\n\tLista tam %d: ", lista.tam);
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\nProdutos com estoque maior que 500:\n");
    while(aux->proximo){
        if(aux->produto.qtd > 500){
            printf("%d ", no->valor);
            cont_maior++;
        }
        aux = aux->proximo;
    }
    if(cont_maior == 0)
        printf("\n------Nao ha nenhum produto com estoque maior que 500.------\n\n");
}

void descontar(Lista lista){
    float desconto;
    No *no = lista.inicio;
    printf("\nDigite o valor do desconto:");
    scanf("%f", desconto);
    while(no){
        
    }
}

int main(){

    int opcao, valor, anterior;
    //No *lista = NULL;
    Lista lista;
    No *removido;

    criar_lista(&lista);

    do{
        printf("\n\t0 - Sair\n\t1 - InserirI\n\t2 - inserirF\n\t3 - InserirM\n\t4 - InserirO\n\t5 - Remover\n\t6 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_inicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_no_fim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            inserir_no_meio(&lista, valor, anterior);
            break;
        case 4:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_ordenado(&lista, valor);
            break;
        case 5:
            printf("Digite um valor a ser removido: ");
            scanf("%d", &valor);
            removido = remover(&lista, valor);
            if(removido){
                printf("Elemento removido: %d\n", removido->valor);
                free(removido);
            }
            else
                printf("elemento inexistente!\n");
            break;
        case 6:
            imprimir(lista);
            break;
        default:
            if(opcao != 0)
                printf("Opcao invalida!\n");
        }

    }while(opcao != 0);

    return 0;
}
