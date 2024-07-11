#include <stdio.h>
#include <stdlib.h>

void ler_e_imprimir_elementos(int *i, int j){
    int k;
    for(k=0; k<j; k++){
        scanf("%d", &i[k]);
    }
    for(k=0; k<j; k++){
        printf("%d\n", i[k]);
    }
}

void par_impar(int *i, int j){
    int k, par=0, impar=0;
    for(k=0; k<j; k++){
        if(i[k]%2 == 0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("Sao %d numero(os) par(es)\n", par);
    printf("Sao %d numero(os) impar(es)\n", impar);
}

int main()
{
    int a;
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &a);

    int *v;
    v = (int*)malloc(a*sizeof(int));
    if (v==NULL){
        printf("Memoria insuficiente. \n");
    }

    printf("Digite os elementos do vetor:\n");
    ler_e_imprimir_elementos(v, a);
    par_impar (v, a);

    free(v);
    return 0;
}
