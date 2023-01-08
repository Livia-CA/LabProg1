//Escreva um programa em C que lê da entrada um caractere e verifica se o caractere lido
//está presente no alfabeto, ou seja, se encontra entre as letras a-z ou A-Z. Dica: Use a
//informação da tabela ASCII.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;

    printf("digite um caractere: ");
    scanf("%c", &caractere);

    if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z'))
        printf("%c pertence ao alfabeto", caractere);
    else
        printf("%c nao pertence ao alfabeto", caractere);
}
