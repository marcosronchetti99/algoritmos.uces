#include <stdio.h>


int main ()
{

int dia, mes, year;
double div_4,div_100,div_400;

printf( "ingrese el dia " );
scanf ("%i",&dia);

printf( "ingrese el mes " );
scanf ("%i",&mes);

printf( "ingrese el eyer " );
scanf ("%i",&year);


div_4 = year&4;

div_100 = year&100;

div_400 = year&400;


if ((dia > 0 ) && ( (mes = 4) || (mes=6) || (mes= 9) || (mes =11)) &&(dia < 31) && (mes <= 12)){

 	if  ((((mes  = 1) || (mes =3) || (mes = 5) || (mes =7) || (mes= 8) || (mes =10) || (mes = 12)) && (dia <= 31) || (((mes= 2) &&  (dia <=29) && ((div_4) = 0) && ((div_4) < 0))) || ((div_100 = 0) && (div_400 = 0)))){

        printf("correcta" );


			}else {printf("incorrecta" );}

        }else {printf("incorrecta" );}





return 0;
}
