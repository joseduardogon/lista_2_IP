#include <stdio.h>

int main () {

    float salario;
    int familia, escola, etnia, cota;

    scanf("%f %d %d %d", &salario, &familia, &escola, &etnia);

    if(escola == 2){
        salario = salario / familia;
        if(salario > 937){
            if(etnia == 4)
                cota = 3;
            else
                cota = 4;
        }else{
            if(etnia == 4)
                cota = 1;
            else
                cota = 2;
        }
        printf("ALUNO COTISTA (L%d)", cota);
    }else 
        printf("ALUNO NAO COTISTA");
    printf("\n");

    return 0;
}