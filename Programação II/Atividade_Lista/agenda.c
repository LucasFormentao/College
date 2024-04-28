#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "header.h"


struct data{
    int dia, mes;
};

struct contato{
    char nome[40];
    char telefone[20];
    char celular[20];
    char email[40];
    Data aniversario;
};

struct no{
    Contato info;
    struct no* prox;
};

struct lista{
    No *inicio;
    int tam;
};

Agenda *criar_agenda(){
    Agenda *agenda = (Agenda*) calloc(1,sizeof(Agenda));
    agenda->inicio = NULL;
    agenda->tam = 0;
    return agenda;
}

Contato ler_info(){
    Contato c;

    printf("\nDigite o nome do novo contato (letras minusculas apenas):\n");
    fgets(c.nome, sizeof(c.nome), stdin);

    printf("\nDigite o telefone:\n");
    fgets(c.telefone, sizeof(c.telefone), stdin);

    printf("\nDigite o celular:\n");
    fgets(c.celular, sizeof(c.celular), stdin);

    printf("\nDigite o email:\n");
    fgets(c.email, sizeof(c.email), stdin);

    printf("\nDigite o dia de nascimento:\n");
    scanf("%d", &c.aniversario.dia);

    printf("\nDigite o mes de nascimento:\n");
    scanf("%d", &c.aniversario.mes);

    fflush(stdin);
    return c;
}

void print_contato(Contato *info){
    printf("\nNome: %s\n", info->nome);
    printf("Telefone: %s\n", info->telefone);
    printf("Celular: %s\n", info->celular);
    printf("Email: %s\n", info->email);
    printf("Aniversario: %d/%d\n", info->aniversario.dia, info->aniversario.mes);
}

void insere_contato(Agenda *agenda){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->info = ler_info();
        if(agenda->inicio == NULL){
            novo->prox = NULL;
            agenda->inicio = novo;
        }
        else if(strcmp(novo->info.nome, agenda->inicio->info.nome) < 0){
                novo->prox = agenda->inicio;
                agenda->inicio = novo;
        }
        else{
            aux = agenda->inicio;
            while(aux->prox){
                if(strcmp(aux->prox->info.nome, novo->info.nome) < 0){
                    aux = aux->prox;
                }
                else{
                    break;
                }
            }
            novo->prox = aux->prox;
            aux->prox = novo;
        }
        agenda->tam++;
    }
    else
        printf("\nErro ao alocar memoria.\n");
}

void remove_contato(Agenda *agenda, char *string){
    No *aux, *remover = NULL;
    //char string[40];
    //printf("\nDigite o nome:\n");
    //fgets(string, sizeof(string), stdin);
    aux = busca_contato(agenda, 1, string);
    if(aux){
        remover = aux->prox;
        aux->prox = remover->prox;
        agenda->tam--;
    }
}

void lista_contatos(Agenda *agenda){
    int i;
    No *aux;
    aux = agenda->inicio;
    printf("\n---------------Lista de Contatos (Tam: %d)---------------\n", agenda->tam);
    for(i = 0; i<agenda->tam; i++){
        print_contato(&aux->info);
        printf("\n\n");
        aux = aux->prox;
    }
}

No* busca_contato(Agenda *agenda, int i, char *nome){
    /*
    A variável i serve como controle auxiliar, quando o valor desta for:
    i = 1: a função retornará o endereço do contato anterior;
    i = 2: a função retornará o endereço do contato.
    */
    No *aux, *aux2;
    aux = agenda->inicio;
    while(strcmp(aux->info.nome,nome) != 0){
            if(aux->prox){
            aux2 = aux;
            aux = aux->prox;
            }
            else{
                printf("\n***Contato nao encontrado***\n");
                return NULL;
            }
        }
    if(i == 1){
    return aux2;
    }
    else if(i == 2){
    return aux;
    }
    else return 0;
}

int conta_duplicados(Agenda *agenda, char *nome){
    No *aux;
    int i=0;
    aux = agenda->inicio;
    while(aux){
        if(strcmp(aux->info.nome,nome) ==0){
            i++;
        }
        aux = aux->prox;
    }
    return i;
}

void remove_duplicados(Agenda *agenda, char *nome){
int qtd = conta_duplicados(agenda, nome);
int i = 0;
if(qtd>1){
    for(i=0;i<(qtd-1);i++){
        remove_contato(agenda, nome);
    }
}
printf("\n***Contatos duplicados excluidos.***\n");
}

void atualiza_contato(Agenda *agenda, char *nome){
Contato ctt_att;
No *ctt;
ctt = busca_contato(agenda, 2, nome);
ctt_att = ler_info();
ctt->info = ctt_att;
printf("\n***Contato atualizado.***\n");
}
