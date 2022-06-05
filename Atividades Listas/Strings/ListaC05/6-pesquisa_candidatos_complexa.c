#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, num;
    printf("Digite o número de pessoas entrevistadas:");
    scanf("%d", &num);
    getchar();
    char nomes[num][100], sexo[num][100]; //matriz de string para nomes e sexo.
    int idade[num]; //vetor para as idades.
    for(i=0; i<num; i++){
        printf("\nDigite o nome da %dª pessoa entrevistada: ", i+1);
        
        fgets(nomes[i], 100, stdin);
        
        printf("\nAgora digite o sexo da pessoa entrevistada(M ou F): ");
        
        fgets(sexo[i], 100, stdin);
        while(sexo[i][0] != 'm' && sexo[i][0] != 'M' && sexo[i][0] != 'f' && sexo[i][0] != 'F')
        {
            printf("Caracter inválido, tente novamente:");
            fgets(sexo[i], 100, stdin);
        }
        printf("\nPor fim, digite a idade da pessoa entrevistada: ");
        scanf("%d", &idade[i]);
        getchar();
    }
    printf("\n");
    for(i=0; i<num; i++){
        
        if((sexo[i][0] == 'f' || sexo[i][0] == 'F') && idade[i] < 30)
        {
            printf("Candidata: %sNÃO ACEITA.\n", nomes[i]);
        }
        else if(sexo[i][0] == 'm' || sexo[i][0] == 'M'){
            printf("Candidato: %sACEITO.\n", nomes[i]);
        }
        else if(sexo[i][0] == 'f' || sexo[i][0] == 'F'){
            printf("Candidata: %sACEITA.\n", nomes[i]);
        }
        printf("\n");
    }

    return 0;
}
