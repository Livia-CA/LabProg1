#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &numero);


    switch (numero) {
        case 1:
            printf("31");
            break;
        case 2:
            printf("28/29");
            break;
        case 3:
            printf("31");
            break;
        case 4:
            printf("30");
            break;
        case 5:
            printf("31");
            break;
        case 6:
            printf("30");
            break;
        case 7:
            printf("31");
            break;
        case 8:
            printf("31");
            break;
        case 9:
            printf("30");
            break;
        case 10:
            printf("31");
            break;
        case 11:
            printf("30");
            break;
        case 12:
            printf("31");
            break;
        default:
            printf("valor invalido, digite um numero entre 1 a 12!!!");
            break;
    }

    return 0;
}
