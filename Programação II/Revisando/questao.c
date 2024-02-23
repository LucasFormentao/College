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


typedef struct
{
    int hora;
    int minuto;
    int tcelsius;
    int pmmhg;
    char local[10];
} meteoro;

int main()
{
    FILE *arq;
    arq = fopen("dados.txt", "r");

    if(arq == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    meteoro da[20];
    
    int ler = 0;
    int cont = 0;
    do
    {
        ler = fscanf(arq,"%d,%d,%d,%d,%[^\n]", &da[cont].hora, &da[cont].minuto, &da[cont].tcelsius, &da[cont].pmmhg, da[cont].local);
        
        if (ler == 5) cont++;
        
        if (ler != 5 && !feof(arq))
        {
            printf("Formato de arquivo incorreto.\n");
            return 1;
        }
        
        if (ferror(arq))
        {
            printf("Erro ao ler o arquivo.\n");
            return 1;
        }
    }while (!feof(arq));
    
    fclose(arq);
    int n;
    for(n=0; n<12; n++)
    {
        printf("%d,%d,%d,%d,%s\n", da[n].hora, da[n].minuto, da[n].tcelsius, da[n].pmmhg, da[n].local);
    }
    
    return 0;
}
