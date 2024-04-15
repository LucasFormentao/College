#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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

void insere_contato(Agenda *agenda){
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo->info = ler_info();
        if(agenda->inicio == NULL){
            novo->prox = NULL;
            agenda->inicio = novo;
        }
        else{
            aux = agenda->inicio;
            //dar algum jeito de comparar strings e ver se sao iguais
        }

    }
    else
        printf("Erro ao alocar memoria.\n");
}
