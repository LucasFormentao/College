#include <stdio.h>

int main()
{
    int num1;
    
    printf("Entre com o primeiro inteiro:\n");
    scanf("%d", &num1);
    
    printf("\nO valor de num1 eh: %d\n", num1);
    printf("\nO endereço de num1 na memoria RAM eh: %d", &num1);

    //& analisa a primeira e, caso seja 0, não analisa a segunda
    //&& analisa a primeira e, mesmo se for 0, analisa a segunda
    return 0;    
}
