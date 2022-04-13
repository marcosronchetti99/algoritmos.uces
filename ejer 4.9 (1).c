#include <stdio.h>
unsigned int menu(void);
int leer_decimal(void);
int leer_hexadecimal(void);
void imprimir_decimal(int);
void imprimir_hexadecimal(int);

int main()
{
    unsigned int numero, opcion;

 for(opcion=menu();opcion!=0;opcion=menu())
 {
     if(opcion==1)
 {
     imprimir_hexadecimal(leer_decimal());
 }

 else if(opcion==2)
 {
     imprimir_decimal(leer_hexadecimal());
 }

 }
 return 0;
}

 unsigned int menu(void) {

        unsigned int n;

        printf("ingrese 1 imprimir numero decimal\n ingrese 2 imprimir numero hexadecimal\n ingrese o para reniciar\n"),
        scanf ("%d",&n);
        return n;

}
int leer_decimal(void){

       int d;
       scanf ("%d",&d);
       return d;

}
int leer_hexadecimal(void){

 int h;
 scanf("%x",&h);
 return h;

}
void imprimir_decimal(int decimal_a_implimir){

    printf("numero decimal es %d\n",decimal_a_implimir);

}
void imprimir_hexadecimal(int hexdecimal_a_implimir){

   printf("numero hexa es %x\n",hexdecimal_a_implimir);

}

