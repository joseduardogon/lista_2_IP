#include <stdio.h>
#include <math.h>

int main () {

    float a, b, c, delta, x;

    scanf("%f %f %f", &a, &b, &c);

    delta = b * b;
    delta -= 4 * a *c;

    if(delta < 0)
        printf("RAIZES IMAGINARIAS\n");
    else if(delta == 0){
        printf("RAIZ UNICA\n");
        x = b * -1;
        x /= 2 * a;
        printf("X1 = %.2f\n", x);
    }else { 
        printf("RAIZES DISTINTAS\n");
        x = b * -1;
        x -= sqrt(delta);
        x /= 2 * a;
        printf("X1 = %.2f\n", x);
        x = b * -1;
        x += sqrt(delta);
        x /= 2 * a;
        printf("X2 = %.2f\n", x);
    }
    return 0;
}