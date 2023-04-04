#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da
//frase digitada.

int main()
{
    char frase[100];
    int cont_palavras, i;

    printf("Entre com a frase: ");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\r\n")] = 0;

    i = 0;
    cont_palavras = 1;

    while (frase[i] != 0){
        if(frase[i] == ' '){
            cont_palavras++;
        }
        i++;
    }

    printf("A quantidade de palavras é %d", cont_palavras);
    return 0;
}
