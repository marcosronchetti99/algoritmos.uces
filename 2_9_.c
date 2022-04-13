#include <stdio.h>
#include <math.h>

int main (){

double a,b,c;
double dis,raiz_1,raiz_2,x_1,x_2;

printf("ingrese numero a\n");
scanf ("%lf",&a);

printf("ingrese numero b\n");
scanf ("%lf",&b);

printf("ingrese numero c\n");
scanf("%lf",&c);

 dis = b * b - 4 * a * c;

 if (dis<0){
 	printf ("no tinen raices reales");
 } 
 else { 
 
 raiz_1 = - b + sqrt(dis);
 	x_1 = raiz_1 / (2 * a);
 	 
raiz_2 = - b - sqrt(dis); 	
	x_2 = raiz_2 / (2 * a);	


printf("la raiz 1: %lf\n",x_1);
printf("la raiz 2: %lf\n",x_2);

}

return 0;
}
