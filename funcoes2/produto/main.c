#include <stdio.h>
#include <stdlib.h>

double calcula_aumento(double valor_antigo, double valor_atual);

int main()
{
    double antigo, atual, aumento_percentual;

    printf("Entre com o valor antigo e atual do produto respectivamente: ");
    scanf("%lf%lf",&antigo, &atual);

    aumento_percentual = calcula_aumento(antigo, atual);

    printf("O aumento percentual foi de %.2lf %%", aumento_percentual);

    return 0;
}

double calcula_aumento(double valor_antigo, double valor_atual){
    return (valor_atual*100/valor_antigo)-100;
}


