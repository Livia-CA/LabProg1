#include <stdio.h>
#include <string.h>
#include <ctype.h>

void gera_login(char n[], char l[]);
void transforma_ma_min(char n[], char nomemin[]);

int main() {
    char nome[100], login[100], nomemin[100];

    printf("entre com seu nome: ");
    fgets(nome, 100, stdin);

    nome[strcspn(nome, "\r\n")] = 0;

    transforma_ma_min(nome, nomemin);

    gera_login(nomemin, login);

    printf("Nome: %s \nLogin: %s", nome, login);
}

void transforma_ma_min(char n[], char nomemin[]){
    int tmnh, i;

    tmnh = strlen(n);

    for(i = 0; i < tmnh; i++){
        nomemin[i] = tolower(n[i]);
    }
}

void gera_login(char n[], char l[]){
    int tmnh, i, j, ultimo, x;

    tmnh = strlen(n);

    l[0] = n[0];
    j = 1;
    x = 0;

    for(i=1; i<tmnh; i++) {
        if(n[i] == ' '){
            if(j==1){
                l[j] = n[i+1];
                j++;
            }
            ultimo = i+1;
            x++;
        }
    }

    if (x < 2){
        j--;
    }

    for (i = ultimo; i< tmnh; i++){
        l[j] = n[i];
        j++;
    }

    l[j] = '\0';
}
