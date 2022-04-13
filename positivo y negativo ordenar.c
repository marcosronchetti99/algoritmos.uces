#include<stdio.h>
#define MAX_NUM 10
int main (){

  int numeros[MAX_NUM]={5,-4,1,4,700,2,2,-5,12,-300};
  int i, j, temp;

  for (i=0;i<MAX_NUM-1;i++){

   for (j=i+1;j<MAX_NUM;j++){

    if (numeros[i]<numeros[j]){

      temp=numeros[i];

       numeros[i]=numeros[j];

        numeros[j]=temp;
        }
    }
}

 for(i=0;i<MAX_NUM;i++){

    printf("%d  ",numeros[i]);

 }

 printf("\n");

 return 0;
 }


