#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* dados.csv é o nome do arquivo, dados abaixo
hora,minuto,tcelsius,pmmhg,local
21,15,24,915,A
02,05,26,878,B
15,26,29,705,C
15,50,30,814,D
23,55,22,759,C
07,30,19,764,B
09,22,27,903,A
12,14,32,826,D
17,25,26,890,C
10,20,25,857,C
13,08,24,798,A
21,59,23,910,B
*/


struct meteoro
{
    int hora;
    int minuto;
    int tcelsius;
    int pmmhg;
    char local[50];
};

int main()
{
    struct meteoro dados[100];
    FILE *arq;
    arq = fopen("dados.csv", "r");
    char *token;
    
    if(arq == NULL)
    {
        printf("Arquivo nao abriu.\n");
        void exit();
    }
    
    int n=1;
    while(!feof(arq))
    {
        fscanf(arq,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]", dados.hora[n], dados.minuto[n], dados.tcelsius[n], dados.pmmhg[n], dados.local[n]);
        n++;
    }
    fclose(arq);
    
    
    
    return 0;
}
