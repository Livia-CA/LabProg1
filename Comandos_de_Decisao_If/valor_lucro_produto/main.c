//Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da
//compra for menor do que R$ 20,00, caso contrário o lucro será de 30%. Faça um algoritmo
//que leia o valor do produto e escreva o valor que o produto deve ser vendido conforme o
//lucro.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorProduto;

    printf("Digite o valor do produto em reais: " );
    scanf("%f", &valorProduto);

    if (valorProduto < 20)
        printf("o produto deve ser vendido por %.2f reais", valorProduto*1.45);
    else
        printf("o produto deve ser vendido por %.2f reais", valorProduto*1.3);
}
