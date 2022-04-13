#include <stdio.h>
#define CANT_PERSONAS 5
int main(){
    int edades[CANT_PERSONAS];
    int dnis[CANT_PERSONAS];
    int i,j,temp;

    for(i=0; i< CANT_PERSONAS; i++){
        printf ("ingrese el dni de la persona %d  \n",i+1);
        scanf ("%d",&dnis[i]);

        printf ("ingrese la edad de la eprsona  %d \n",i+1);
        scanf ("%d",&edades[i]);
    }
    // buble sort
    for (i = 0 ; i < CANT_PERSONAS; i++){
        for (j = 0 ; j < CANT_PERSONAS; j++){
            if (edades[i] > edades[j]){
                temp       = edades[j];
                edades[j]   = edades[i];
                edades[i] = temp;

                temp       = dnis[j];
                dnis[j]   = dnis[i];
                dnis[i] = temp;
            }
        }
    }
    printf ("el dni %d es el mas viejo con una edad de %d\n",dnis[0],edades[0]);
    printf ("el dni %d es el mas joven con una edad de %d\n",dnis[CANT_PERSONAS-1],edades[CANT_PERSONAS-1]);
    return 0;
}