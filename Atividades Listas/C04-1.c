#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6], caso;
    printf("Digite 6 valores para atribui-los ao vetor A:");
    scanf("%i%i%i%i%i%i", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
    
    printf("\nO vetor digitado é:[%i,%i,%i,%i,%i,%i", num[0], num[1], num[2], num[3], num[4], num[5]);
    printf("\nO que deseja fazer?\n 0-Sair \n1-Alterar a primeira coordenada\
            \n2-Alterar a segunda coordenada \n3-Alterar a terceira coordenada\
            \n4-Alterar a quarta coordenada \n5-Alterar a quinta coordenada\
            \n6-Alterar a sexta coordenada");
    scanf("%i", &caso);
    switch (caso)
    
    printf("\nDigite a coordenada z do vetor:");
    scanf("%i", &num[2]);
    
    printf("\nO vetor digitado é: [%i %i %i]", num[0], num[1], num[2]);
    
    return 0;
}

