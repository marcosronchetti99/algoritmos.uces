
#include<iostream.h>
#include<conio.h>
void main()
{
int n,x,nmayor=-1000,nmenor=1000,c=0,cp=0,cn=0;
clrscr();
cout<<"ingresar cantidad de numeros:";
cin>>n;
while(c<n)
{
cout<<"Ingresar numero:"<<endl;
cin>>x;
if(x>nmayor)
nmayor=x;
if(x<nmenor)
nmenor=x;
if(x<0)
cn=cn+1;
else
cp=cp+1;
c=c+1;
}
cout<<"el numero mayor es:"<<nmayor<<endl;
cout<<"el numero menor es:"<<nmenor<<endl;
cout<<"la cantidad de positivos:"<<cp<<endl;
cout<<"la cantidad de negativos:"<<cn;
getch();
}



































































