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
    char telefone[15];
    char celular[15];
    char email[40];
    Data aniversario;
};

struct no{
    Contato info;
    struct no* prox;
};

struct agenda{
    No *inicio;
    int tam;
};

void criar_agenda(Agenda *agenda){
    agenda->inicio = NULL;
    agenda->tam = 0;
}

Contato ler_info(){
    Contato c;
    printf("\nDigite o nome do novo contato:\n");
    scanf("%39s", c.nome);
    printf("\nDigite o telefone:\n");
    scanf("%15s", c.telefone);
    printf("\nDigite o celular:\n");
    scanf("%15s", c.celular);
    printf("\nDigite o email:\n");
    scanf("%39s", c.email);
    printf("\nDigite o dia de nascimento:\n");
    scanf("%d", &c.aniversario.dia);
    printf("\nDigite o mes de nascimento:\n");
    scanf("%d", &c.aniversario.mes);
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
        while (strcmp(novo->info.nome, agenda->inicio->info.nome) > 0){
            aux = aux->prox;
        }
        novo->prox = aux->prox;
        aux->prox = novo;
        }
        agenda->tam++;
    }
    else
        printf("Erro ao alocar memoria.\n");
}

void remover_duplicados(Agenda *agenda){
    No *aux, *remover = NULL;
    char string[40];
    printf("Digite o nome do contato que deseja excluir");
    scanf("%s", string);
    if(agenda->inicio){
        if(strcmp(agenda->inicio->info.nome,string) == 0){
            remover = agenda->inicio;
            agenda->inicio = remover->prox;
            agenda->tam--;
        }
        else{
            aux = agenda->inicio;
            while(aux->prox){
            while(strcmp(aux->info.nome,string) != 0){
                aux = aux->prox;
            }
            if(aux->prox){
                remover = aux->prox;
                aux->prox = remover->prox;
                agenda->tam--;
            }
            }
        }
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

Contato busca_contato(Agenda *agenda){
    char nome[40];
    int i;
    No *aux;
    printf("\nDigite o nome do contato:\n");
    scanf("%s", nome);

    while(strcmp(aux->info.nome,nome) != 0){
            aux = aux->prox;
        }
    if(aux->prox){
        return aux->prox->info;
    }
    else
        exit(0);
}
