//Escreva um programa para ler um ano e imprimir na tela se o ano é bissexto ou não. As
//regras para um ano ser bissexto são as seguintes:
// • De 4 em 4 anos é ano bissexto;
// • De 100 em 100 anos não é ano bissexto;
// • De 400 em 400 anos é ano bissexto;
// • Prevalecem as últimas regras sobre as primeiras.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;

    printf("Digite um ano: " );
    scanf("%d", &ano);

    if (ano % 400 == 0)
        printf("%d eh um ano bissexto", ano);
    else if (ano % 100 == 0)
        printf("%d nao eh um ano bissexto", ano);
    else if (ano % 4 == 0)
        printf("%d eh um ano bissexto", ano);
    else
        printf("%d nao eh um ano bissexto", ano);
}
