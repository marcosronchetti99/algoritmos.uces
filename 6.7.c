#include<stdio.h>
#include<stdlib.h>
char *copiar (char *);

int main (){

    char texto[100]="hola a todos",*pt;
    pt = copiar(texto);
    printf ("texto copiado:%s\n", pt);

    return 0;

}

char *copiar (char *t){

    int i;
    char *p;
    for (i=0;t[i]!='\0';i++);
    p=malloc(sizeof(char)*(i+1));
    for (i=0;t[i]!='\0';i++)
    {
        p[i]=t[i];
    }
    p[i]='\0';

    return p;

}

