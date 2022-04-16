#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qt_parcela;
    float prec, per, total, val_parcela, comiss;
    printf("Digite aqui o preço do produto: R$");
    
    scanf("%f", &prec);
    
    printf("\nDigite o percentual de desconto a ser aplicado:");
    
    scanf("%f", &per);
    
    total=prec-(per*prec/100);
    printf("\nO total a ser pago, com %.0f%% de desconto é de R$%.2f\n\nEm quantas vezes deseja parcelar? (sem juros):", per, total);
    scanf("%i", &qt_parcela);
    if (qt_parcela>1) {
        comiss=0.05*prec;
        val_parcela=total/qt_parcela;
        printf("Cada parcela tem o valor de R$%.2f e comissão é de R$%.2f", val_parcela, comiss);
        
    }
    else
    {
        comiss=0.05*total;
        printf("O preço a ser pago segue o mesmo e a comissão é de R$%.2f", comiss);
    }
    return 0;
}
