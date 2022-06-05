#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];
    int i=0;
    
    printf("Digite qualquer texto: ");
    
    fgets(string, 100, stdin);
    
    printf("\nO texto digitado foi:\n%s", string);
    
    while (string[i] != '\0' && string[i] != '\n')
    {
        i++;
    }
    printf("\nO texto digitado tem %d caracteres.(Acentos incluídos)", i);
    
    return 0;
}
