#include <stdio.h>
#include <string.h>

int verifica_palindromo(char p[100], int t);

int main()
{
    int tmnh, eh_palindromo;
    char palavra[100];

    printf("Entre com a palavra: ");
    scanf("%s%*c", palavra);

    tmnh = strlen(palavra);

    eh_palindromo = verifica_palindromo(palavra, tmnh);

    if(eh_palindromo == 1){
        printf("eh palindromo");
    }else{
        printf("nao eh palindromo");
    }

    return 0;
}

int verifica_palindromo(char p[100], int t){
    int i;

    for(i=0; i<t; i++){
        if(p[i] != p[t-1]){
            return 0;
        }
        t--;
    }

    return 1;
}
