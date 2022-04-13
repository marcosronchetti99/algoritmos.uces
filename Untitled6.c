
#include<stdio.h>
#include<conio.h>
#define N 100
void cargar_texto(char [],int);
void modificar(char [],char,char);
int main()
{
    char texto[N],letra1,letra2;
    printf("Ingrese texto: ");
    cargar_texto(texto,N);
    printf("\nTexto ingresado: %s",texto);
    printf("\nIngrese el caracter a reemplazar: ");
    letra1=getche();
    printf("\nIngrese el caracter de reemplazo: ");
    letra2=getche();
    modificar(texto,letra1,letra2);
    printf("\nTexto modificado %s",texto);
    return 0;
}

void cargar_texto(char t[],int tam)
{
    char l;
    int i=0;
    do
    {
        l=getche();
        t[i]=l;
        i++;
    }while(l!='\r' && i<tam-1);
    if(l=='\r')
    {
        t[i-1]='\0';
    }
    /*else
    {
        t[i]='\0';
    }*/
}

void modificar(char t[],char l1,char l2)
{
    int i;
    for(i=0;t[i]!='\0';i++)
    {
        if(t[i]==l1)
        {
            t[i]=l2;
        }
    }
}
