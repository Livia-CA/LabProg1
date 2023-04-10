#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100], saida[100];
    int qntd_nomes, i, tmnh_nome, cont, indices[100], x;

    printf("Entre com seu nome: ");
    gets(nome);
    qntd_nomes = 0;
    tmnh_nome = strlen(nome);

    for(i=0; i<tmnh_nome; i++){
        if(nome[i] == ' '){
            indices[qntd_nomes] = i;
            qntd_nomes++;
        }
    }
    x = 0;
    cont = 0;

    for(i=0; i<tmnh_nome; i++){
        if((cont < qntd_nomes-1) && (nome[i] == ' ')){
            saida[x] = nome[i];
            saida[x+1] = nome[i+1];
            saida[x+2] = '.';
            x = x+3;
            cont++;
            i = indices[cont] - 1;
        } else {
            saida[x] = nome[i];
            x++;
        }
    }

    saida[x] = '\0';
    printf("%s", saida);

    return 0;
}
