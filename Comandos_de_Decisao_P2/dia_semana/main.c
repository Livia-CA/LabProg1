/*Escreva um programa que leia um número inteiro entre 1 e 7, e escreva o respectivo dia da semana (segunda-feira, terça-feira, quarta-feira...). Utilize a estrutura switch.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &numero);


    switch (numero) {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Ter�a-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("valor invalido, digite um numero entre 1 a 7!!!");
            break;
    }

    return 0;
}
