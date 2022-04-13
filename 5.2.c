
#include <stdio.h>
#define MAX_NUMEROS 1000

void ordenarVector(int* arr){

    int i,j,temp;
    for (i=0; arr[i]!=0 ;i++){
        for (j=i+1; arr[j]!= 0 ;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return ;
}


void invertirVector(int *arr) {
    int longitud ;
    int temporal;

    for(longitud = 0; arr[longitud]!= 0; longitud++);

    for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
         izquierda++, derecha--) {
        temporal = arr[izquierda];
        arr[izquierda] = arr[derecha];
        arr[derecha] = temporal;
    }
    return ;
}


void mezclarVector(int* arr){
    int longitud ;
    int i,random,temp;

    for(longitud = 0; arr[longitud]!= 0; longitud++);

    for(i=0; i< longitud; i++){
        random = (rand()%(longitud-i) +i );

        temp = arr[random];
        arr[random] = arr[i];
        arr[i] = temp;
    }
    return ;
}


int main (){
    int numeros[MAX_NUMEROS];
    int cantidadDeNumeros;
    int i;
    char c[2];
    printf("ingrese numeros \n");

    for(cantidadDeNumeros=0; cantidadDeNumeros< MAX_NUMEROS; cantidadDeNumeros++){
        scanf("%d",&numeros[cantidadDeNumeros]);
        if (numeros[cantidadDeNumeros] == 0){
            break;
        }
    }

    printf(" 1 para mezclar\n 2 para ordenar \n 3 para invertir\n ");
    scanf("%s",c);
    switch (c[0]){
        case '1':
            mezclarVector(numeros);
            break;

        case '2':
            ordenarVector(numeros);
            break;
        case '3':
            invertirVector(numeros);
            break;
        default:
            printf("opcion incorrecta\n ");
            return 1;
    }

    for(i=0; i<cantidadDeNumeros; i++){
        printf("%d  ",numeros[i]);
    }
    printf("\n");
    return 0;
}