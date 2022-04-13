
int existeEnElVector(int arr[], int x){
    int i;
    for (i=0; arr[i]!=0; i++){
        if( arr[i] == x){
            return 1;
        }
    }
    return 0;
}

void unionDeConjuntos(int c1[],int c2[], int resulado[]){
    int i,j,l_res,l1,l2, temp;

    for (i=0; c1[i]!=0; i++){
        resultado[i]= c1[i];
    }
    l_res=i;

    for(i=0; c2[i]!=0; i++){
        if(existeEnElVector(resulado,c2[i])){
            continue;
        }
        resulado[l_res]=c2[i];
        l_res++
    }

    resulado[l_res]=0;
}