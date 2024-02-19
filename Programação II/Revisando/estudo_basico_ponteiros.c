#include <stdio.h>

//  ESTUDO SOBRE PONTEIROS

int main(void)
{
 // Declarando variável qualquer;
 int a=45;
 
 // Print da variável
 printf("%d\n",a);
 
 // Pint do endereço da variável;
 printf("%p\n",&a);
 
 // Declarando um ponteiro x;
 int *x;
 
 // Definindo que x aponta para o endereço de a;
 x = &a;
 
 // Aqui, é printado o conteúdo apontado por x, para isso é usado o asterisco;
 printf("%d\n",*x);
 
 // Para ver o conteúdo da variável x propriamente dita (endereço de a), 
 // tira o * e o tipo da variável é p;
 printf("%p\n", x);
 return 0;
} 
