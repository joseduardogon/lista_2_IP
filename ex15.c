#include <stdio.h>

int main () {

    int cc, dr, rt, grau = 7;

    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);

    if(cc < 7){
        grau++;
        if(dr > 50){
            grau++;
            if(rt > 80000)
                grau++;
        }
    }
    printf("ACO DE GRAU = %d\n", grau);

    return 0;
}