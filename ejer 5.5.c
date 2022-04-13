void agregar_al_final(int numeros[],int agregar_numero){

    int i;

    for (i=0;numeros[i]!=0;i++);

    numeros[i]=agregar_numero;
    numeros [i+1]=0;
}

void agregar_al_principio (int numeros[],int agregar_numero){

    int i;
    int temp = numeros[0]:


    for(i=0;numeros[i]!=0;i++);
}

void insertar_en_el_medio (int *numeros,int numero_a_agregar,int indice){

    int i;
    int temp

    for(i=indice;numero[i]!=0;i++){
        temp=numeros[i];
        numeros[i]= numero_a_agregar;
        numero_a_agregar = temp;
}

numeros [i] = numero_a_agregar;
numeros[i+1] = 0

return;
}

void insertar_ordenar(int *numeros,int numero_a_agregar){


   int i

   for(i=0;numeros[i]!=0;i++){
        if (numeros[i]>numero_a_agregar){
            insertar_en_el_medio(numeros,numero_a_agregar,i);
            return;
        }
    }
    agregar_al_final(numeros,numero_a_agregar)
}

int existe_en_array (int* numeros,int numero_agregar){

    int i

    for(i=0;numeros[i]!=0;i++){
       if (numeros[i]== numero_agregar){
            return 1;

       }


    }
    return 0;
}

void insertar_sin_repetit (int* numeros,int nuevo_numero){

    if (!existe_en_array(numeros,nuevo_numero)){
        agregar_al_final(numeros,nuevo_numero);

    }
}


int posicion_valor (int* numeros, int numero_a_buscar ){


    int i;
    if (numeros==NULL){

    }

    for(i=0;numeros[i]!=0;i++){

        if (nuemros[i]==numero_a_buscar){

            return i;
        }

    }
    return -1;

}


void eliminar_valor (int* numeros, int valor_a_eliminar){

   int i;
   int indice_a_eliminar;

   indice_a_eliminar = posicion_valor(numeros, valor_a_eliminar);

   if (indice_a_eliminar <0){
        return;
    }
    for (i=indice_a_eliminar;numeros[i]!=0;i++){
        numeros[i]=numeros[i+1];
    }
}
