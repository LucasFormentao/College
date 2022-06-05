#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];
    
    printf("Digite um texto que comece com a letra A: ");
    
    fgets(string, 100, stdin);
    
    if (string[0] == 'a' || string[0] == 'A')
    {
        printf("%s", string);
    }
    return 0;
}
