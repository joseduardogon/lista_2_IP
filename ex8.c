#include <stdio.h>

int main () {

    int x, y;

    scanf ("%d", &x);

    if(x < 1)
        y = x;
    else if(x == 0)
        y = 0;
    if(x > 1)
        y = x * x;
    
    printf("Y = %d\n", y);
    
    return 0;
}