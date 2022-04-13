#include <stdio.h>

#include <stdio.h>

int main(){

	int numero;
	int res = 1;
	int i;

	printf("ingesar numeros\n");
	scanf ("%i",&numero);

    for (i= numero;i != 0;i--){
    	res = res * i;
    }
      printf("%d \n",res );

    return 0;
}
