#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, num1, num2;
    
    do
    {
    printf("Escolha a opção desejada:\n\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n");
    scanf("%i", &opcao);
    
    if(opcao>0 && opcao<5)
    {
        printf("Digite dois valores inteiros:");
        scanf("%d%d", &num1, &num2);
    }
    
    switch(opcao)
    {
        case 0:
        printf("Saindo...\n");
        break;
        
        case 1:
            printf("Soma: %d\n", num1 + num2);
            break;
        
        case 2:
            printf("Subtracao: %d\n", num1 - num2);
            break;
        
        case 3:
            printf("Multiplicacao: %d\n", num1 * num2);
            break;
        
        case 4:
            while(num2 == 0){
            printf("Não existe divisão por zero.\n Digite outro valor:\n");
            scanf("%d", &num2);
        }
            printf("Divisao: %d\n", num1 / num2);
            break;
    default:
        printf("Opção inválida.\nDigite outra opcao:\n");
    }
    
    }
    while (opcao != 0);
    

    return 0;
}
