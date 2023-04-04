#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um programa que recebe uma frase, calcule e mostre a quantidade de vogais da frase
//digitada. O programa deverá contar vogais maiúsculas e minúsculas.
int main()
{
    char frase[100];
    int cont_vogais, i;

    printf("Entre com a frase: ");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\r\n")] = 0;

    i = 0;
    cont_vogais = 0;

    while (frase[i] != 0){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            cont_vogais++;
        }
        i++;
    }

    printf("A quantidade de vogais é %d", cont_vogais);
    return 0;
}
