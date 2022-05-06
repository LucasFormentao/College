#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opcao, nota1, nota2, nota3, p1, p2, p3;

    do
    {
      printf("\n1 - Media aritmetica\n2 - Media Ponderada\n3 - Media Harmonica\n4 - Geometrica\n0 - Sair\n");
      scanf("%d", &opcao);
      if(opcao>0 && opcao<5)
      {
          printf("Digite as notas:");
          scanf("%d%d%d", &nota1, &nota2, &nota3);
      }
      switch(opcao)
      {
          case 0:
          printf("Saindo...\n");
          break;
          
          case 1:
          printf("A media aritmetica das notas eh: %d", (nota1 + nota2 + nota3)/3);
          break;
          
          case 2:
          printf("Digite o peso das notas:\n")
          scanf("%d%d%d", &p1, &p2, &p3);
          printf("A media ponderada das notas eh: %d", ((nota1*p1) + (nota2*p2) + (nota3*p3))/(p1 + p2 + p3));
          break;
          
          case 3:
          printf("A media harmonica das notas eh: %d", (1/((1/nota1) + (1/nota2) + (1/nota3))));
          break;
          
          case 4:
          printf("A media geometrica das notas eh: %d", pow((nota1 * nota2 * nota3) , (1/3)));
          break;
          
          
          
          
          
          
      }
        
    }
    while (opcao != 0)
    return 0;
}
