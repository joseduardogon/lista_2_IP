#include <stdio.h>

int main () {
   
    int num = 0, mi, ce, de, un, caso;

    scanf("%d", &num);

    if(num < 9999 && num > 0){
        mi = num / 1000;
        num -= mi * 1000;

        ce = num / 100;
        num -= ce * 100;

        de = num / 10;
        num -= de * 10;

        un = num;
        num += (mi*1000)+(ce*100)+(de*10);

        if(mi > 0)
            printf("(quarta ");
        else if(ce > 0)
            printf("(terceira ");
        else if(de > 0)
            printf("(segunda ");
        else
            printf("(primeira ");
    
        printf("ordem) %d = ", num);

        if(mi > 0){
            caso += 1000;
            printf("%d ", mi);
            if(mi > 1)
                printf("unidades de milhar");
            else 
                printf("unidade de milhar");
        }
        if(mi != 0 && (ce != 0 || de != 0 || un != 0))
            printf(" + ");

        if(ce > 0){
            caso += 100;
            printf("%d ", ce);
            if(ce > 1)
                printf("centenas");
            else 
                printf("centena");
        }
        if(ce != 0 && (de != 0 || un != 0))
            printf(" + ");

        if(de > 0){
            caso += 10;
            printf("%d ", de);
            if(de > 1)
                printf("dezenas");
            else 
                printf("dezena");
        }
        if(de != 0 && un != 0)
            printf(" + ");

        if(un > 0){
            caso += 1;
            printf("%d ", un);
            if(un > 1)
                printf("unidades");
            else 
                printf("unidade");
        }
        printf(" = ");
        if(caso >= 1000){
            caso -= 1000;
            printf("%d", mi*1000);
        }
        if(mi != 0 && (ce != 0 || de != 0 || un != 0))
            printf(" + ");
        if(caso >= 100){
            caso -= 100;
            printf("%d", ce*100);
        }
        if(ce != 0 && (de != 0 || un != 0))
            printf(" + ");
        if(caso >= 10){
            caso -= 10;
            printf("%d", de*10);
        }
        if(de != 0 && un != 0)
            printf(" + ");
        if(caso >= 1){
            caso -= 1;
            printf("%d", un);
        }

    }else 
        printf("Numero Invalido!");
    printf("\n");

    return 0;
}