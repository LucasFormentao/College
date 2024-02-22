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
    struct meteoro da[20];
    FILE *arq;
    arq = fopen("dados.txt", "r");
    char *token;
    
    if(arq == NULL)
    {
        printf("Arquivo nao abriu.\n");
        void exit();
    }
    
    int n=1;
    while(n<=13)
    {
        fscanf(arq,"%d,%d,%d,%d,%[^,]\n", &da[n-1].hora, &da[n-1].minuto, &da[n-1].tcelsius, &da[n-1].pmmhg, da[n-1].local);
        n++;
    }
    fclose(arq);
    
    for(n=0; n<=12; n++)
    {
        printf("%d\n", da[n].hora);
    }
    
    return 0;
}
