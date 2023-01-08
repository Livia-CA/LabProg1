//Sabendo que um carro do tipo A faz 12km com um litro de gasolina, um carro do tipo B
//faz 9km e um do tipo C faz 8km, faça um algoritmo que leia o percurso em quilômetros,
//o tipo de carro e informe o consumo estimado de combustível.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float percursoKM;
    char carro;

    printf("Digite a distancia percorrida em quilometros e o tipo do carro (A, B ou C) respectivamente: " );
    scanf("%f %c", &percursoKM, &carro);

    if (carro == 'A' || carro == 'a')
        printf("o consumo estimado de combustivel com o carro %c eh de %.2f litros", carro, percursoKM/12);
    else if (carro == 'B' || carro == 'b')
        printf("o consumo estimado de combustivel com o carro %c eh de %.2f litros", carro, percursoKM/9);
    else if (carro == 'C' || carro == 'c')
        printf("o consumo estimado de combustivel com o carro %c eh de %.2f litros", carro, percursoKM/8);
    else
        printf("o tipo do carro digitado nao eh valido");
}
