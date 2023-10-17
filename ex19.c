#include <stdio.h>

int main() {
    float a, b, c, d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    if (a > b) {
        float temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        float temp = a;
        a = c;
        c = temp;
    }
    if (a > d) {
        float temp = a;
        a = d;
        d = temp;
    }
    if (b > c) {
        float temp = b;
        b = c;
        c = temp;
    }
    if (b > d) {
        float temp = b;
        b = d;
        d = temp;
    }
    if (c > d) {
        float temp = c;
        c = d;
        d = temp;
    }

    printf("%.2f, %.2f, %.2f, %.2f", a, b, c, d);
    printf("\n");

    return 0;
}
