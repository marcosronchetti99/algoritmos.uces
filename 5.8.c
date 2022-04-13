#include<stdio.h>

double sumatoria (double numero[], unsigned int i);

double numero [4];


int main (){

    double numero [4];

    int i;
    double suma;


    for(i=0;i<4;i++)
    {
    printf ("ingrece un numero \n ");
    scanf("%lf",&numero[i]);
    }

      printf("%.2lf",sumatoria(numero,4));

}

 double sumatoria (double numero[], unsigned int i){

        int j;
        double suma = 0;


        for(j=0;j<i;j++)
        {
           suma = suma + numero[j];
        }
        return suma;

 }







