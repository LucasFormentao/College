typedef struct {
  float real;
  float imag;
}Complexo;

Complexo *cpx;
cpx = (Complexo*) calloc (sizeof(Complexo) * 20);

void Complexo_cria (int qtd_cpx)
{
  //No código app.c, intrementar qtd_cpx somente após chamar a função para criar complexo
  printf("\nDigite a parte real do numero complexo: ");
  scanf("%f", &cpx[qtd_cpx].real);
  printf("Digite a parte imaginaria do numero complexo: ");
  scanf("%f", &cpx[qtd_cpx].imag);
  printf("O numero complexo criado foi o seguinte:\n%f + j%f\n", cpx[qtd_cpx].real, &cpx[qtd_cpx].imag);
  printf("(Este numero complexo esta localizado no indice %d)\n");
}

void Complexo_end (int indice)
{
  //No código app.c, decrementar a quantidade de numeros após chamar esta função
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
