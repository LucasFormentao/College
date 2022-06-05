#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];
    int i=0;
    
    printf("Digite um nome: ");
    
    fgets(string, 100, stdin);
    
    printf("\nAs quatro primeiras letras do nome sao: ");
    while (i < 4)
    {
       printf("%c", string[i]); 
       i++;
    }
    return 0;
}
