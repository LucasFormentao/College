#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6], caso;
    
    printf("Digite 6 valores para atribui-los ao vetor A:");
    
    scanf("%i %i %i %i %i %i", &num[0], &num[1], &num[2], &num[3], \
            &num[4], &num[5]);
    
    printf("\nO vetor A é:[%i,%i,%i,%i,%i,%i]", num[0], num[1], num[2], num[3], num[4], num[5]);
    
    do
    {
        printf("\n\nO que deseja fazer?\n0-Sair \n1-Alterar a primeira coordenada\
            \n2-Alterar a segunda coordenada \n3-Alterar a terceira coordenada\
            \n4-Alterar a quarta coordenada \n5-Alterar a quinta coordenada\
            \n6-Alterar a sexta coordenada\n");
        scanf("%i", &caso);
        switch (caso)
        {
            case 0:
                printf("\nSaindo...\n\n");
                break;
            case 1:
                printf("\nInsira o valor desejado:");
                scanf("%d", &num[0]);
                printf("Agora o vetor é: [%i,%i,%i,%i,%i,%i]", num[0], num[1],\
                num[2], num[3], num[4], num[5]);
                break;
            case 2:
                printf("\nInsira o valor desejado:");
                scanf("%d", &num[1]);
                printf("Agora o vetor é: [%i,%i,%i,%i,%i,%i]", num[0], num[1],\
                num[2], num[3], num[4], num[5]);
                break;
            case 3:
                printf("\nInsira o valor desejado:");
                scanf("%d", &num[2]);
                printf("Agora o vetor é: [%i,%i,%i,%i,%i,%i]", num[0], num[1],\
                num[2], num[3], num[4], num[5]);
                break;
            case 4:
                printf("\nInsira o valor desejado:");
                scanf("%d", &num[3]);
                printf("Agora o vetor é: [%i,%i,%i,%i,%i,%i]", num[0], num[1],\
                num[2], num[3], num[4], num[5]);
                break;
            case 5:
                printf("\nInsira o valor desejado:");
                scanf("%d", &num[4]);
                printf("Agora o vetor é: [%i,%i,%i,%i,%i,%i]", num[0], num[1],\
                num[2], num[3], num[4], num[5]);
                break;
            case 6:
                printf("\nInsira o valor desejado:");
                scanf("%d", &num[5]);
                printf("Agora o vetor é: [%i,%i,%i,%i,%i,%i]", num[0], num[1],\
                num[2], num[3], num[4], num[5]);
                break;
            default:
                printf("Alternativa inválida.");
        }
    }
    while (caso != 0);

    return 0;
}
