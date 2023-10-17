#include <stdio.h>

int main () {

    float nota;
    char conceito;

    scanf("%f", &nota);

    if (nota >= 9)
        conceito = 'A';
    else if (nota >= 7.5)
        conceito = 'B';
    else if (nota >= 6)
        conceito = 'C';
    else 
        conceito = 'D';

    printf ("NOTA = %.1f CONCEITO = %c\n", nota, conceito);

    return 0;
}