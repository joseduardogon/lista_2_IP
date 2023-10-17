#include <stdio.h>

int main () {

    int a, b, c, d, soma;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    if(a <= b){
        soma += a;
        if(b <= c){
            soma += b;
            if(c <= d)
                soma += c;
            else 
                soma += d;
        }else {
            soma += c;
            if (b <= d)
                soma += b;
            else 
                soma += d;
        }
    }else {
        soma += b;
        if(a <= c){
            soma += a;
            if(c <= d)
                soma += c;
            else 
                soma += d;
        }else {
            soma += c;
            if (a <= d)
                soma += a;
            else 
                soma += d;
        }
    }
    printf("%d\n", soma);

    return 0;
}