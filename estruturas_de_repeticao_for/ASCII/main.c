#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("TABELA ASCII\n\n");

    for (i = 32; i <= 255; i++){
        printf("CODIGO: %d\n\n caracter: %c\n hexadecimal: %X\n\n", i,i,i);
    }


    return 0;
}
