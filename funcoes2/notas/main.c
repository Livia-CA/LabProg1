#include <stdio.h>
#include <stdlib.h>

float calcula_media(float n1, float n2, float n3, char opcao);
float media_aritmetica(float n1, float n2, float n3);
float media_ponderada(float n1, float n2, float n3);


int main()
{
    float n1,n2,n3, media;
    char opcao;

    printf("Entre com as tres notas respectivamente: ");
    scanf("%f%f%f%*c",&n1,&n2,&n3);

    printf("Entre com a letra 'A' para calcular a media aritmetica e 'P' para calcular a media ponderada: ");
    scanf("%c%*c", &opcao);

    media = calcula_media(n1,n2,n3,opcao);

    media == -1 ? printf("Valores invalidos!") : printf("A media eh %f", media);

    return 0;
}

float calcula_media(float n1, float n2, float n3, char opcao){

    switch(opcao){
    case 'A':
        return media_aritmetica(n1,n2,n3);
        break;
    case 'P':
        return media_ponderada(n1,n2,n3);
        break;
    default:
        return -1;
        break;
    }

}

float media_aritmetica(float n1, float n2, float n3){
    if((n1 <= 10 && n1 >= 0) && (n2 <= 10 && n2 >= 0) && (n3 <= 10 && n3 >= 0)){
        return (n1+n2+n3)/3;
    }else{
        return -1;
    }
}
float media_ponderada(float n1, float n2, float n3){
    if((n1 <= 10 && n1 >= 0) && (n2 <= 10 && n2 >= 0) && (n3 <= 10 && n3 >= 0)){
        return (n1*5+n2*3+n3*2)/10;
    }else{
        return -1;
    }
}

