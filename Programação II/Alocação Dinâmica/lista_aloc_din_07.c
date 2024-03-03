#include <stdlib.h>
#include <stdio.h>

/*
Considere um cadastro de produtos de um estoque, com as seguintes informações para
cada produto:
 Código de identificação do produto: representado por um valor inteiro
 Nome do produto: com até 50 caracteres
 Quantidade disponível no estoque: representado por um número inteiro
 Preço de venda: representado por um valor real
a) Defina uma estrutura, denominada produto, que tenha os campos apropriados
para guardar as informações de um produto.
b) Crie um conjunto de N produtos (N e um valor fornecido pelo usuário e peca ao
usuário para entrar com as informações de cada produto.
c) Encontre o produto com o maior preço de venda
d) Encontre o produto com a maior quantidade disponível no estoque
*/

typedef struct{
    int codigo;
    char nome[50];
    int qtd;
    float preco;
}registro;

int main()
{
    int tam, i, max_prec=0, max_qtd=0;
    registro *dados;
    printf("Insira o numero de produtos a serem cadastrados:");
    scanf("%d", &tam);

    dados = (registro*) malloc(sizeof(registro)*tam);
    for(i=0;i<tam;i++)
    {
        printf("\nRealizando cadastro do produto %d", i+1);
        printf("\nCodigo: ");
        scanf("%d", &dados[i].codigo);
        printf("Nome: ");
        scanf("%s", dados[i].nome);
        printf("Quantidade em estoque: ");
        scanf("%d", &dados[i].qtd);
        printf("Preco: ");
        scanf("%f", &dados[i].preco);
    }

    printf("\nOs dados armazenados foram os seguintes:");

    for(i=0; i<tam; i++)
    {
        printf("\nProduto %d:", i+1);
        printf("\nCodigo: %d", dados[i].codigo);
        printf("\nNome: %s", dados[i].nome);
        printf("\nQuantidade em estoque: %d", dados[i].qtd);
        printf("\nPreco de venda: %f\n", dados[i].preco);
    }

    for(i=1;i<tam;i++)
    {
        if(dados[i].preco > dados[i-1].preco)
        {
            max_prec = i;
        }
        if(dados[i].qtd > dados[i-1].qtd)
        {
            max_qtd = i;
        }
    }

    printf("\n\nO produto com maior estoque e: %s", dados[max_qtd].nome);
    printf("\nO produto com maior preco de venda e: %s", dados[max_prec].nome);


    free(dados);
    return 0;
}
