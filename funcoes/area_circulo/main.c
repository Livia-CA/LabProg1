#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

double calcula_area_circulo(double raio);

int main()
{
    double raio, area_circulo;

    printf("entre com o raio do circulo: ");
    scanf("%lf", &raio);

    area_circulo = calcula_area_circulo(raio);

    printf("A area do circulo eh : %lf", area_circulo);

    return 0;
}

double calcula_area_circulo(double raio){
    return PI*raio*raio;
}

