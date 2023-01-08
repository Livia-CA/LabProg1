//Escreva um programa em C que lê as coordenadas (x, y) de um ponto e determina em
//que quadrante o ponto se encontra.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coordenadaX, coordenadaY;

    printf("Digite a coordenada x e y respectivamente: " );
    scanf("%d%d", &coordenadaX, &coordenadaY);

    if (coordenadaX > 0 && coordenadaY > 0)
        printf("o ponto com as coordenadas (%d,%d) se encontra no primeiro quadrante", coordenadaX, coordenadaY);
    else if (coordenadaX < 0 && coordenadaY > 0)
        printf("o ponto com as coordenadas (%d,%d) se encontra no segundo quadrante", coordenadaX, coordenadaY);
    else if (coordenadaX < 0 && coordenadaY < 0)
        printf("o ponto com as coordenadas (%d,%d) se encontra no terceiro quadrante", coordenadaX, coordenadaY);
    else
        printf("o ponto com as coordenadas (%d,%d) se encontra no quarto quadrante", coordenadaX, coordenadaY);
}
