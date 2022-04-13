
#include<stdio.h>
void cargar(int [],int);
void sumar(int[],int[],int[],int);
int pescalar(int[],int[],int);
void mostrar(int [],int);



int main()
{
    int A[100],B[100],C[100],n,pe;
    do
    {
        printf("Ingrese la cantidad de elementos (hasta 100): ");
        scanf("%d",&n);
        if(n<=0 || n>100)
        {
            printf("Dato incorrecto\n");
        }
    }
    while(n<=0 || n>100);
    printf("Carga del vector A\n");
    cargar(A,n);
    printf("Carga del vector B\n");
    cargar(B,n);
    sumar(A,B,C,n);
    pe=pescalar(A,B,n);
    printf("Vector A\n");
    mostrar(A,n);
    printf("Vector B\n");
    mostrar(B,n);
    printf("Vector suma\n");
    mostrar(C,n);
    printf("EL producto escalar es %d\n",pe);
    return 0;
}

void cargar(int v[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {

        printf("Ingrese un entero: ");
        scanf("%d",&v[i]);

    }
}

void mostrar(int v[],int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {

        printf("%d-",v[i]);

    }
}


void sumar(int v1[],int v2[],int v3[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        v3[i]=v1[i]+v2[i];
    }
}

int pescalar(int v1[],int v2[],int tam)
{
    int i,suma=0;
    for(i=0;i<tam;i++)
    {
        suma+=v1[i]*v2[i];
    }
    return suma;
}
