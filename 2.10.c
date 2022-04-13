#include <stdio.h>

 int main()
{
	double  a,b;
	double restar;

	printf("ingrese un entero \n");
	scanf ("%lf",&a);

	printf("ingrese un etero \n");
	scanf("%lf",&b);

	if (a<b){
		restar = b - a;
	}
	else{
		restar = a - b;
	}
	if  (restar>a){

	if (restar<b){
	printf("la diferencia esta entre los numeros ingresados\n");
	}
}
	else {
		printf("la diferencia no entra en los numeros ingresados\n");
	}


	return 0;
}
