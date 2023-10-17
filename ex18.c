#include <stdio.h>

int main () {

    int a, b, c;
    char x, y, z;

    scanf("%d %d %d\n", &a, &b, &c);
    scanf("%c%c%c", &x, &y, &z);

    if(x == 'A')
        printf("%d", a);
    else if(x == 'B')
        printf("%d", b);
    else if(x == 'C')
        printf("%d", c);
        printf(" ");
    
    if(y == 'A')
        printf("%d", a);
    else if(y == 'B')
        printf("%d", b);
    else if(y == 'C')
        printf("%d", c);
        printf(" ");
    
    if(z == 'A')
        printf("%d", a);
    else if(z == 'B')
        printf("%d", b);
    else if(z == 'C')
        printf("%d", c);
    printf("\n");

    return 0;
}