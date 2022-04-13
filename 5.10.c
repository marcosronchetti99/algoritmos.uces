#include<stdio.h>

int main(){

int numero[20],num, i ,j;
int suma;
double x;
suma = 0;
i =0;


do{
    printf ("ingresar numero\n");
    scanf("%i",&num);

if (num >=0){
    numero[i] = num;
    i=i+1;
    suma = suma + num;
}

    }

    while (num >=0);

    for (j=0;j<i;j++){
       x=numero[j]*100/suma;
        printf ("%i --> (%lf )", numero[j],x);

    }




return 0;

}



