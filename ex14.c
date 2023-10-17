#include <stdio.h>

int main () {

    int data, dia, mes, ano;

    scanf("%d", &data);

    dia = data / 1000000;
    data -= dia * 1000000;
    mes = data / 10000;
    data -= mes * 10000;
    ano = data;
    
    if(mes == 1 && dia > 0 && dia < 32){
        printf("%d de janeiro de %d\n", dia, ano);
    }else if(mes == 2 && dia > 0 && dia < 29){
        printf("%d de fevereiro de %d\n", dia, ano);
    }else if(mes == 3 && dia > 0 && dia < 32){
        printf("%d de marco de %d\n", dia, ano);
    }else if(mes == 4 && dia > 0 && dia < 31){
        printf("%d de abril de %d\n", dia, ano);
    }else if(mes == 5 && dia > 0 && dia < 32){
        printf("%d de maio de %d\n", dia, ano);
    }else if(mes == 6 && dia > 0 && dia < 31){
        printf("%d de junho de %d\n", dia, ano);
    }else if(mes == 7 && dia > 0 && dia < 32){
        printf("%d de julho de %d\n", dia, ano);
    }else if(mes == 8 && dia > 0 && dia < 32){
        printf("%d de agosto de %d\n", dia, ano);
    }else if(mes == 9 && dia > 0 && dia < 31){
        printf("%d de setembro de %d\n", dia, ano);
    }else if(mes == 10 && dia > 0 && dia < 32){
        printf("%d de outubro de %d\n", dia, ano);
    }else if(mes == 11 && dia > 0 && dia < 31){
        printf("%d de novembro de %d\n", dia, ano);
    }else if(mes == 12 && dia > 0 && dia < 32){
        printf("%d de dezembro de %d\n", dia, ano);
    }else
        printf("Data Invalida!\n");

    return 0;
}