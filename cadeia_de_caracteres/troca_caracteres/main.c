#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100];
    int n, i;

    printf("Entre com a primeira string: ");
    scanf("%s%*c", s1);

    printf("Entre com a segunda string: ");
    scanf("%s%*c", s2);

    printf("Entre com a quantidade de caractere que gostaria de copiar: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        s2[i] = s1[i];
    }

    printf("%s", s2);


    return 0;
}
