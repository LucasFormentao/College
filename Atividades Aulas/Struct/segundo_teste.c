#include <stdlib.h>
#include <stdio.h>
int i;

typedef struct
{
    int matricula;
    char nome[30], sobrenome[30];
    float nota;
}dados;

dados ler_dados(int x)
{
    dados aluno[x];
    for(i=0; i<x; i++)
    {
        printf("Digite a matrícula do aluno:");
        scanf("%d", &aluno[i].matricula);
        printf("Digite o nome do aluno:");
        scanf("%s", aluno[i].nome);
        printf("Digite o sobrenome do aluno:");
        scanf("%s", aluno[i].sobrenome);
        printf("Digite a nota do aluno:");
        scanf("%f", &aluno[i].nota);
    }
}

void imprimir(float m, int pos, int acima_m)
{
    dados melhor[pos];
    printf("\n\nA média da turma é: %.2f", m);
    printf("\nUm total de %d pessoas ficaram acima da média.", acima_m);
    printf("\nO aluno com a maior nota foi: %d\n%s %s\nNota:%.2f", melhor[pos].matricula,\
    melhor[pos].nome, melhor[pos].sobrenome, melhor[pos].nota);
}

int main()
{
    int qtd, acima, maior = 0, pos_maior;
    float soma, media;
    
    printf("qtd alunos:");
    scanf("%d", &qtd);
    
    ler_dados(qtd);
    
    dados notas[qtd];
    
    for(i=0; i>qtd; i++)
    {
        soma = soma + notas[i].nota;
        
        if(notas[i].nota>=6)
        acima++;
        
        if(notas[i].nota>maior)
        {
        maior = notas[i].nota;
        pos_maior=i;
        }
    }
    
    imprimir(media, pos_maior, acima);
    
    media = soma/qtd;
    

    return 0;
}
