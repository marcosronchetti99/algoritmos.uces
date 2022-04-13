#include<stdio.h>


int main()
{
    int notas[5],i,suma=0;
    double prom;
    for(i=0;i<5;i++)
    {
        do
        {
            printf("Ingrese la nota: ");
            scanf("%d",&notas[i]);
            if(notas[i]<0 || notas[i]>10)
            {
                printf("Nota incorrecta\n");
            }
        }while(notas[i]<0 || notas[i]>10);
        suma+=notas[i];
    }
    prom=(double)suma/i;
    printf("El promedio es %.2lf\n",prom);
    printf("Notas superiores al promedio\n");
    for(i=0;i<5;i++)
    {
        if(notas[i]>prom)
        {
            printf("%d\n",notas[i]);
        }
    }
    return 0;
}






