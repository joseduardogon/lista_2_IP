#include <stdio.h>
#include <math.h>

int main () {

    float a, b, c, res;

    scanf("%f %f %f", &a, &b, &c);

    if((fabs(b - c) < a) && a < b + c){
        if((fabs(a - c) < b) && b < a + c){
            if((fabs(a - b) < c) && c < a + b){
                res = a + b + c;
                printf("Perimetro = %.1f", res);
            }else 
                res = -1;
        }else 
            res = -1;
    }else 
        res = -1;
    if(res == -1){
        res = ((a + b) * c) / 2;
        printf("Area = %.1f", res);
    }
    printf("\n");    

    return 0;
}