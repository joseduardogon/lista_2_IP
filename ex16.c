#include <stdio.h>

int main () {

    int matricula, dependentes;
    float salmin, sal, taxa, imposto;

    scanf("%d %f %d %f %f", &matricula, &salmin, &dependentes, &sal, &taxa);

    taxa /= 100;
    printf("MATRICULA = %d\n", matricula);
    if(sal > (12 * salmin)){
        imposto = 0.2 * sal;
        printf("IMPOSTO BRUTO = %.2f\n", imposto);
        imposto -= dependentes * 300;
        printf("IMPOSTO LIQUIDO = %.2f\n", imposto);
    }else if(sal > (5 * salmin)){
        imposto = 0.08 * sal;
        printf("IMPOSTO BRUTO = %.2f\n", imposto);
        imposto -= dependentes * 300;
        printf("IMPOSTO LIQUIDO = %.2f\n", imposto);
    }else {
        imposto = 0;
        printf("IMPOSTO BRUTO = %.2f\n", imposto);
        imposto -= dependentes * 300;
        printf("IMPOSTO LIQUIDO = %.2f\n", imposto);
    }
    imposto -= sal * taxa;
    printf("RESULTADO = %.2f\n", imposto);

    if(imposto > 0)
        printf("IMPOSTO A PAGAR\n");
    else if(imposto == 0)
        printf("IMPOSTO QUITADO\n");
    else 
    printf("IMPOSTO A RECEBER\n");

    return 0;
}