#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Encontrando o fim de uma string:

    int i;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite seu nome: ");
    fgets(palavras, 55, stdin);// file

    i = 0;
    // \0 -> caracter que indica o fim de string
    // enquanto palavras[i] for diferente do fim de string...
    while(palavras[i] != '\0'){
        printf("%d = %d\n", i, palavras[i]);
        i++;
    }
    printf("\n");

    return 0;
}
