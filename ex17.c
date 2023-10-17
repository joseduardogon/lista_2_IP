#include<stdio.h>

int main () {

    int num, x, mun, cont = 0;

    scanf("%d", &num);

    x = num;
    x /= 10;
    cont++;
    if(x > 0){
        x /= 10;
        cont++;
        if(x > 0){
            x /= 10;
            cont++;
            if(x > 0){
                x /= 10;
                cont++;
                if(x > 0){
                    x /= 10;
                    cont++;
                    if(x > 0){
                        cont = -1;
                    }
                }
            }
        }
    }
    x = num;
    if(cont > 0){
        mun = x % 10;
        x /= 10;
        cont--;
        if(cont > 0){
            mun *= 10;
            mun += x % 10;
            x /= 10;
            cont--;
            if(cont > 0){
                mun *= 10;
                mun += x % 10;
                x /= 10;
                cont--;
                if(cont > 0){
                    mun *= 10;
                    mun += x % 10;
                    x /= 10;
                    cont--;
                    if(cont > 0){
                        mun *= 10;
                        mun += x % 10;
                        x /= 10;
                        cont--;
                    }
                }
            }
        }
    }
    if(cont != -1){
        if(num == mun)
            printf("PALINDROMO");
        else 
            printf("NAO PALINDROMO");
    }else 
        printf("NUMERO INVALIDO");
    printf("\n");

    return 0;
}