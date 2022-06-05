#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];
    int i=0, tam=0;
    
    printf("Digite um nome: ");
    
    fgets(string, 100, stdin);
    
    while (string[i] != '\0' && string[i] != '\n')
    {
        if (string[i] != ' ')
        {
            tam++;
        }
        i++;
    }
    printf("\nO nome tem %d letras.", tam);
    
    return 0;
}
