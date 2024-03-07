#include "numero_complexo.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct {
  float real;
  float imag;
}Complexo;

Complexo *cpx;
cpx = (Complexo*) malloc(sizeof(Complexo) * 20);

void Complexo_new (int qtd_cpx)
{
  //No código app.c, intrementar qtd_cpx somente após chamar a função para criar complexo
  printf("\nDigite a parte real do numero complexo: ");
  scanf("%f", &cpx[qtd_cpx]->real);
  printf("Digite a parte imaginaria do numero complexo: ");
  scanf("%f", &cpx[qtd_cpx]->imag);
  printf("O numero complexo criado foi o seguinte:\n%f + j%f\n", cpx[qtd_cpx].real, cpx[qtd_cpx].imag);
  printf("(Este numero complexo esta localizado no indice %d)\n");
}

void Complexo_end (int indice)
{
  char resposta;
  printf("\nO numero complexo neste indice e o seguinte: %f + j%f", cpx[indice].real, cpx[indice].imag);
  printf("Tem certeza que deseja apagar este numero complexo?(s/n): ");
  scanf("%c", resposta);
  if(resposta == 'n')
  {
    printf("O numero nao foi apagado\n");
  }
  else
  {
    cpx[indice].real = 0;
    cpx[indice].imag = 0;
  }
  printf("O numero foi apagado\n");
}

void Complexo_sub(int qtd_cpx)
{
    int a, b;
    //No código app.c, intrementar qtd_cpx somente após chamar a função para subtrair complexo
    printf("\nA operacao sera: n(A) - n(B)\nDefina o indice A:");
    scanf("%d", &a);
    printf("Defina o indice B:");
    scanf("%d", &b);
    cpx[qtd_cpx].real = cpx[a].real - cpx[b].real;
    cpx[qtd_cpx].imag = cpx[a].imag - cpx[b].imag;
    printf("\nO resultado da subtracao foi (%f + j%f) e esta alocado no indice %d", cpx[qtd_cpx].real, cpx[qtd_cpx].imag, qtd_cpx);
}

void Complexo_add(int qtd_cpx)
{
    int a, b;
    //No código app.c, intrementar qtd_cpx somente após chamar a função para somar complexo
    printf("\nA operacao sera: n(A) + n(B)\nDefina o indice A:");
    scanf("%d", &a);
    printf("Defina o indice B:");
    scanf("%d", &b);
    cpx[qtd_cpx].real = cpx[a].real + cpx[b].real;
    cpx[qtd_cpx].imag = cpx[a].imag + cpx[b].imag;
    printf("\nO resultado da soma foi (%f + j%f) e esta alocado no indice %d", cpx[qtd_cpx].real, cpx[qtd_cpx].imag, qtd_cpx);
}

void Complexo_div(int qtd_cpx)
{
    int a, b;
    float moda, modb, modr, anga, angb, angr, realr, imagr;
    //No código app.c, intrementar qtd_cpx somente após chamar a função para dividir complexo
    printf("\nA operacao sera: n(A) / n(B)\nDefina o indice A:");
    scanf("%d", &a);
    printf("Defina o indice B:");
    scanf("%d", &b);

    moda = sqrt( pow(cpx[a].real, 2) + pow(cpx[a].imag, 2));
    modb = sqrt( pow(cpx[b].real, 2) + pow(cpx[b].imag, 2));

    anga = atan(cpx[a].imag/cpx[a].real);
    angb = atan(cpx[b].imag/cpx[b].real);

    modr = moda/modb;
    angr = anga-angb;

    realr = modr*cos(angr);
    imagr = modr*sin(angr);

    cpx[qtd_cpx].real = realr;
    cpx[qtd_cpx].imag = imagr;

    printf("\nO resultado da soma foi (%f + j%f) e esta alocado no indice %d", cpx[qtd_cpx].real, cpx[qtd_cpx].imag, qtd_cpx);
}

void Complexo_mult(int qtd_cpx)
{
    int a, b;
    float moda, modb, modr, anga, angb, angr, realr, imagr;
    //No código app.c, intrementar qtd_cpx somente após chamar a função para dividir complexo
    printf("\nA operacao sera: n(A) * n(B)\nDefina o indice A:");
    scanf("%d", &a);
    printf("Defina o indice B:");
    scanf("%d", &b);

    moda = sqrt( pow(cpx[a].real, 2) + pow(cpx[a].imag, 2));
    modb = sqrt( pow(cpx[b].real, 2) + pow(cpx[b].imag, 2));

    anga = atan(cpx[a].imag/cpx[a].real);
    angb = atan(cpx[b].imag/cpx[b].real);

    modr = moda*modb;
    angr = anga+angb;

    realr = modr*cos(angr);
    imagr = modr*sin(angr);

    cpx[qtd_cpx].real = realr;
    cpx[qtd_cpx].imag = imagr;

    printf("\nO resultado da soma foi (%f + j%f) e esta alocado no indice %d", cpx[qtd_cpx].real, cpx[qtd_cpx].imag, qtd_cpx);
}
