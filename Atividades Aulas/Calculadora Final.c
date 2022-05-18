#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opcao, p1, p2, p3;
    float mhar, nota1, nota2, nota3;
    
    do
    {
      printf("1 - Media aritmetica\n2 - Media Ponderada\n3 - Media Harmonica\n4 - Geometrica\n0 - Sair\n");
      scanf("%d", &opcao);
      if(opcao>0 && opcao<5)
      {
          printf("Digite as notas:");
          scanf("%f%f%f", &nota1, &nota2, &nota3);
          mhar = (3/((1/nota1) + (1/nota2) + (1/nota3)));
      }
      switch(opcao)
      {
          case 0:
          printf("\nSaindo...\n\n");
          break;
          
          case 1:
          printf("\nA media aritmetica das notas eh: %f\n\n", (nota1 + nota2 + nota3)/3);
          break;
          
          case 2:
          printf("\nDigite o peso das notas:\n\n");
          scanf("%d%d%d", &p1, &p2, &p3);
          printf("\nA media ponderada das notas eh: %f\n\n", ((nota1*p1) + (nota2*p2) + (nota3*p3))/(p1 + p2 + p3));
          break;
          
          case 3:
          printf("\nA media harmonica das notas eh: %.2f\n\n", mhar);
          break;
          
          case 4:
          printf("\nA media geometrica das notas eh: %.2f\n\n", cbrt(nota1 * nota2 * nota3));
          break;
          
          default:
            printf("\nOpcao invalida.\nDigite outra opcao:\n\n");
      }
        
    }
    while (opcao != 0);
    return 0;
}
