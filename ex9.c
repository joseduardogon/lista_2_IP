#include <stdio.h>

int main () {

    int ano;

    scanf("%d", &ano);

    if(ano % 4 == 0 && ano > 1582) {
        if(ano % 100 == 0) {
            if(ano % 400 == 0)
                printf("ANO BISSEXTO");
            else
                printf("ANO NAO BISSEXTO");
        } else 
            printf("ANO BISSEXTO");
    } else 
        printf("ANO NAO BISSEXTO");
    printf("\n");

    return 0;
}