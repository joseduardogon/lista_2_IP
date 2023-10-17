#include <stdio.h>

int main () {

    int tempo;
    float valor;

    scanf("%d", &tempo);
    valor += (tempo % 3) * 5;
    tempo -= tempo % 3;
    valor += (tempo / 3) * 10;

    printf("O VALOR A PAGAR E = %.2f\n", valor);

    return 0;
}