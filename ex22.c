#include <stdio.h>

int main () {

    int i;
    float a, b, c;

    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a > b){
        float temp = a;
        a = b;
        b = temp;
    }
    if(a > c){
        float temp = a;
        a = c;
        c = temp;
    }
    if(b > c){
        float temp = b;
        b = c;
        c = temp;
    }
    if(i == 1)
        printf("%.2f %.2f %.2f", a, b, c);
    else if(i == 2)
        printf("%.2f %.2f %.2f", c, b, a);
    else if(i == 3)
        printf("%.2f %.2f %.2f", a, c, b);
    printf("\n");

    return 0;
}