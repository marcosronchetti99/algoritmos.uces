#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    double cateto1;
    double cateto2;
    double perimetro;

    printf("ingrese el primer cateto mayor \n");
    scanf("%lf", &cateto1);

    printf("ingrese el segundo cateto menor \n");
    scanf("%lf",&cateto2);

    perimetro = sqrt(pow(cateto1, 2) + pow(cateto2, 2)) + cateto1 + cateto2;

    printf("el perimetro es %lf\n", perimetro);

    return 0;
}