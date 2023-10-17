#include <stdio.h>

int main () {

    int conta;
    char consumidor;
    float consumo, custo;

    scanf("%d %f %c", &conta, &consumo, &consumidor);
    if (consumidor == 'R'){
        custo = 5;
        consumo *= 0.05;
        custo += consumo;
        printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, custo);
    }else if (consumidor == 'C'){
        custo = 500;
        if(consumo > 80)
            custo += (consumo - 80) * 0.25;
        printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, custo);
    }else if (consumidor == 'I'){
        custo = 800;
        if(consumo > 100)
            custo += (consumo - 100) * 0.04;
        printf("CONTA = %d\nVALOR DA CONTA = %.2f\n", conta, custo);
    }

    return 0;
}