#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float raiz1, raiz2, delta;
    printf("Digite os coeficientes inteiros do polinomio de segundo grau (a,b e c):\n");
    scanf("%d%d%d", &a, &b, &c);
    
    raiz1 = (-b + sqrt((pow(b, 2)) - 4 * a * c))/ (2 * a);
    raiz2 = (-b - sqrt((pow(b, 2)) - 4 * a * c))/ (2 * a);
    delta = (pow(b, 2) - 4 * a * c);
    
    if (delta >= 0)
    {
        if (delta == 0)
        {
            printf("\nA funcao possui uma raiz real igual a %.2f", raiz1);
        }
        else
        {
            printf("\nAs raizes da funcao sao %.2f e %.2f", raiz1, raiz2);
        }
    }
    else
    {
        printf("\nA funcao nao possui raizes reais.");
        
    }
    
    return 0;
}
