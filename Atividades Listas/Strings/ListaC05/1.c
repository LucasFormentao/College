#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];
    printf("Digite qualquer texto: ");
    fgets(string, 100, stdin);
    printf("\nO texto digitado foi:\n%s", string);
    
    return 0;
}
