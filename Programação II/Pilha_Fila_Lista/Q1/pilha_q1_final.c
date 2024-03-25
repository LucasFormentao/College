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

numeros ler(){
    numeros n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n.num);
    return n;
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
    no *novo;
    novo = malloc(sizeof(no));
    if (novo){
        novo->proximo = p->topo;
        novo->n = ler();
        p->topo = novo;
        p->tam ++;
        printf("\nTamanho atual: %d\n", p->tam);
    }
    else{
        printf("\nErro ao alocar memória\n");
    }
}

void teste_igual(pilha *p1, pilha *p2){
    int tam1, tam2, i;

    tam1 = p1->tam;
    tam2 = p2->tam;

    no *aux1, *aux2;

    aux1 = p1->topo;
    aux2 = p2->topo;
    if(tam1 != tam2){
        if(tam1>tam2){
            printf("\nA maior pilha e P1\n");
        }
        else{
            printf("\nA maior pilha e P2\n");
        }
    }
    else{
        for(i = 0;i<p1->tam; i++){
            if(aux1->n.num != aux2->n.num){
                printf("\nAs pilhas sao diferentes mas possuem o mesmo tamanho.\n");
                break;
            }
            aux1 = aux1->proximo;
            aux2 = aux2->proximo;

            if(i == p1->tam-1){
                printf("\nAs duas pilhas sao iguais.\n");
            }
        }

    }
}

void med_ma_me(pilha *p){
    int menor, maior, soma, i;
    float media;
    no *aux;
    aux = p->topo;

    menor = aux->n.num;
    maior = aux->n.num;

    soma = aux->n.num;

    for(i=1; i<p->tam;i++){
        aux = aux->proximo;
        soma = soma + aux->n.num;
        if(aux->n.num < menor){
            menor = aux->n.num;
        }
        if(aux->n.num > maior){
            maior = aux->n.num;
        }
    }
    media = soma/p->tam;
    printf("\nMenor Valor: %d;\nMaior Valor: %d;\nMedia: %.2f\n", menor, maior, media);
}

void transferir(pilha *p1, pilha *p2){
    int i;
    no *aux1, *aux2;
    aux1 = p1->topo;
    aux2 = p2->topo;

    if(p1->tam != p2->tam){
        printf("\nA transferencia so pode ser realizada com pilhas de mesmo tamanho.\n");
    }
    else{
    for(i = 0;i < p1->tam;i++){
        aux2->n.num = aux1->n.num;
        aux1 = aux1->proximo;
        aux2 = aux2->proximo;
    }
    }
}

void par_impar(pilha *p, int opcao){
    int qtd_par=0, qtd_impar=0, i;
    no *aux = p->topo;

    for(i=0;i < p->tam; i++){
        if(aux->n.num % 2)
        {
            qtd_impar++;
        }
        else{
            qtd_par++;
        }
        aux = aux->proximo;
    }
    if(opcao == 10 || opcao == 11){
        printf("\nA pilha possui %d numero(s) impares.\n", qtd_impar);
    }
    else if(opcao == 12 || opcao == 13){
        printf("\nA pilha possui %d numero(s) pares.\n", qtd_par);
    }
}

int main(){
    pilha p1, p2;
    int opcao;
    criar_pilha(&p1);
    criar_pilha(&p2);

    do{
        printf("\n0 - Sair\n1 - Empilhar P1\n2 - Empilhar P2\n3 - Imprimir P1\n4 - Imprimir P2\n");
        printf("5 - Testar igual\n6 - med_ma_me P1\n7 - med_ma_me P2\n8 - Transferir P1 -> P2\n9 - Transferir P2 -> P1\n");
        printf("10 - Impares em P1\n11 - Impares em P2\n12 - Pares em P1\n13 - Pares em P2\n");
        scanf("%d", &opcao);
        getchar();

        switch(opcao){
        case 1:
            empilhar(&p1);
            break;
        case 2:
            empilhar(&p2);
            break;
        case 3:
            imprimir_pilha(&p1);
            break;
        case 4:
            imprimir_pilha(&p2);
            break;
        case 5:
            teste_igual(&p1,&p2);
            break;
        case 6:
            med_ma_me(&p1);
            break;
        case 7:
            med_ma_me(&p2);
            break;
        case 8:
            transferir(&p1, &p2);
            break;
        case 9:
            transferir(&p2, &p1);
            break;
        case 10:
            par_impar(&p1, opcao);
            break;
        case 11:
            par_impar(&p2, opcao);
            break;
        case 12:
            par_impar(&p1, opcao);
            break;
        case 13:
            par_impar(&p2, opcao);
            break;
        default:
            if(opcao != 0)
                printf("\nOpcao invalida!!!\n");
        }
    }while(opcao != 0);
    printf("Encerrando o programa...");
    return 0;
}
