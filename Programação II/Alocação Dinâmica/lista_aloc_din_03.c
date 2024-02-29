#include <stdlib.h>
#include <stdio.h>

int main()
{
    int tam, i;
    char *txt;
    printf("Digite o tamanho da string:");
    scanf("%d", &tam);
    
    txt = (char*) malloc(sizeof(char) * tam);
    
    if(txt == NULL)
    {
        perror("main:");
        exit(-1);
    }
    
    printf("\nDigite o texto:");
    
    int c;
    do{
        c = getchar();
    }while(c != EOF && c != '\n');
    
    fgets(txt,tam,stdin);
    
    printf("\nO texto é o seguinte:\n");
    for(i=0; i<tam; i++)
    {
        printf("%c", txt[i]);
    }
    
    printf("\nTexto sem vogais:\n");
    for(i=0; i<tam; i++)
    {
        if(txt[i] != 'a' & txt[i] != 'e' & txt[i] != 'i' & txt[i] != 'o' & txt[i] != 'u'
        & txt[i] != 'A' & txt[i] != 'E' & txt[i] != 'I' & txt[i] != 'O' & txt[i] != 'U')
        {
            printf("%c", txt[i]);
        }
    }
    
    free(txt);
    
    return 0;
}
