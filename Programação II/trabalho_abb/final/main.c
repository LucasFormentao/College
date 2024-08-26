#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main() {
    NoABB *raiz = abb_cria();
    int opcao;
    float min, max;

    do {
        printf("\n*** Menu ***\n1. Inserir novo aluno\n2. Imprimir todos os alunos\n");
        printf("3. Imprimir aluno com maior media\n4. Contar alunos aprovados (media >= 6)\n");
        printf("5. Imprimir alunos aprovados (media >= 6)\n6. Contar alunos com media em um intervalo\n");
        printf("7. Sair\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        // Limpar o buffer do teclado após ler um inteiro
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                raiz = abb_insere(raiz);
                break;
            case 2:
                printf("\nImprimindo todos os alunos:\n");
                abb_imprime(raiz);
                break;
            case 3:
                if (raiz != NULL) {
                    abb_alunoComMaiorMedia(raiz);
                } else {
                    printf("\nNenhum aluno para mostrar.\n");
                }
                break;
            case 4:
                printf("\nNúmero de alunos aprovados (media >= 6): %d\n", abb_contaAprovados(raiz));
                break;
            case 5:
                printf("\nImprimindo alunos aprovados (media >= 6):\n");
                abb_imprimeAprovados(raiz);
                break;
            case 6:
                printf("\nDigite o valor minimo do intervalo: ");
                scanf("%f", &min);
                printf("Digite o valor maximo do intervalo: ");
                scanf("%f", &max);
                getchar();
                printf("\nNumero de alunos com media entre %.2f e %.2f: %d\n", min, max, abb_contaIntervalo(raiz, min, max));
                break;
            case 0:
                printf("\nSaindo...\n");
                abb_libera(raiz);
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
