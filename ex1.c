#include <stdio.h>

int main () {

    float nota1, nota2, nota3, media;

    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = nota1 + nota2 + nota3;
    media /= 3;

    if(media < 6)
        printf("MEDIA = %.2f\nREPROVADO\n", media);
    else
        printf("MEDIA = %.2f\nAPROVADO\n", media);

    return 0;
}