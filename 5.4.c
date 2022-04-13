


void inicializar (int a[], unisgned int t, int n){
    int i;
    for(i=0; i<t; i++)
        a[i]=n;
}
void inicializar_azar (int a[], unisgned int t, int min, int max){
    int i;
    for(i=0; i<t; i++)
        a[i]= rand() ;

    //(rand()%(longitud-i) +i )
}