#include <stdio.h>

int main () {

    float num1, num2, num3;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if(num1 < num2){
        if(num1 < num3){
            printf("%.2f ", num1);
            if(num2 < num3)
                printf("%.2f %.2f", num2, num3);
            else
                printf("%.2f %.2f", num3, num2); 
        }else
            printf("%.2f %.2f %.2f", num3, num1, num2);
    }
    else if(num2 < num1){
        if(num2 < num3){
            printf("%.2f ", num2);
            if(num3 < num1)
                printf("%2f %.2f", num3, num1);
            else 
                printf("%.2f %.2f", num1, num3);
        }else 
            printf("%.2f %.2f %.2f", num3, num2, num1);
    }

    return 0;
}