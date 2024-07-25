#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    float salario;
}Funcionario;

typedef struct no{
    Funcionario funcionario;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;

Lista* criar_lista(){
    Lista *lista = (Lista*) calloc(1, sizeof(Lista));
    lista->inicio = NULL;
    lista->tam = 0;
    return lista;
}

Funcionario ler_funcionario(){
    Funcionario f;
    printf("Digite o nome do funcionario: ");
    scanf("%20[^\n]", f.nome);
    printf("Digite o salario do funcionario: ");
    scanf("%f", &f.salario);
    fflush(stdin);
    return f;
}

void imprimir_funcionario(Funcionario *f){
    printf("\nNome: %s\nSalario: %.2f", f->nome, f->salario);
}

void insere_funcionario(Lista *lista){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->funcionario = ler_funcionario();
        if(lista->inicio == NULL){
            novo->proximo = NULL;
            lista->inicio = novo;
        }
        else if(lista->inicio->funcionario.salario < novo->funcionario.salario){
            novo->proximo = lista->inicio;
            lista->inicio = novo;
        }
        else{
            aux = lista->inicio;
            while(aux->proximo){
                if(aux->proximo->funcionario.salario > novo->funcionario.salario){
                    aux = aux->proximo;
                }
                else{
                    break;
                }
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
        lista->tam++;
    }
    else
        printf("\nErro ao alocar memoria.\n");
}

void maior_salario(Lista *lista){
    No *aux;
    aux = lista->inicio;
    printf("\nFuncionario(s) com o maior salario:\n");
    imprimir_funcionario(&aux->funcionario);
    while(aux->proximo){
        if(aux->funcionario.salario == aux->proximo->funcionario.salario){
            aux = aux->proximo;
            imprimir_funcionario(&aux->funcionario);
        }
        else
            break;
    }
}

void media_salario(Lista *lista){
    No *aux;
    aux = lista->inicio;
    float total = lista->inicio->funcionario.salario;
    while(aux->proximo){
        aux = aux->proximo;
        total += aux->funcionario.salario;
    }
    float media;
    media = total/lista->tam;
    printf("\nA media dos salarios eh %.2f", media);
}

void salario_maior_que(Lista *lista, float num){
    No *aux;
    aux = lista->inicio;
    int i, cont = 0;
    for(i=0;i<lista->tam;i++){
        if(aux->funcionario.salario >= num)
            cont++;
        aux = aux->proximo;
    }
    printf("\nHa um total de %d funcionarios com o salario >= %f", cont, num);
}

void imprimir_todos(Lista *lista){
    int i;
    No *aux;
    aux = lista->inicio;
    for(i=0;i<lista->tam;i++){
        imprimir_funcionario(&aux->funcionario);
        aux = aux->proximo;
    }
}

int main()
{
    int i;
    Lista *lista = criar_lista();
    for(i=0;i<5;i++){
        insere_funcionario(lista);
    }
    maior_salario(lista);
    media_salario(lista);
    salario_maior_que(lista, 2000);
    imprimir_todos(lista);
    return 0;
}
