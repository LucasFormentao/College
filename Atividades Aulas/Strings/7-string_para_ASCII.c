#include <stdio.h>
#include <stdlib.h>

int main(){

    //Transformando sring para ASCII
    int i;
    char palavras[55] = {"Oi. Vamos aprender a programar com a linguagem C?"};

    printf("Digite algo: ");
    fgets(palavras, 55, stdin);

    i = 0;
    // removendo o caracter ENTER do fim da string
    while(palavras[i] != '\0'){
        if(palavras[i] == '\n') // se for o ENTER
            palavras[i] = '\0'; // troca por fim de string
        i ++;
    }

    i = 0;
    while(palavras[i] != '\0'){
        printf("%d\n", palavras[i]);
        i++;
    }
    
    return 0;
}
