#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num, i, cont = 1;
    float raiz;
    
    printf("Digite um numero:\n");
    
    for(i = 1; i <= cont; i++)
    {
        scanf("%d", &num);
        if(num > 0)
        {
            printf("A raiz de %d eh: %.2f", num, raiz = sqrt(num));
        }
        else
        {
            printf("%d eh um valor invalido.\nDigite outro numero:", num);
            cont = cont + 1;
        }
    }
    return 0;
}
