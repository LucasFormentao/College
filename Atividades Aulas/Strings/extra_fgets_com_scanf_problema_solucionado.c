#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0, num=5;
    char nomes[num][100], sexo[num][100]; //matriz de string para nomes e sexo.
    int idade[num]; //vetor para as idades.
    for(i=0; i<num; i++){
        printf("Digite o nome da %dª pessoa entrevistada: ", i+1);
        
        fgets(nomes[i], 100, stdin);
        
        printf("Agora digite o sexo da pessoa entrevistada(M ou F): ");
        
        fgets(sexo[i], 100, stdin);
        
        printf("Por fim, digite a idade da pessoa entrevistada: ");
        scanf("%d", &idade[i]);
        getchar();
    }

    return 0;
}
