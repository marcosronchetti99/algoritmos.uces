

char * copy_palabra(char*);

int main (){
    char saludo[40]="hola, bienvenidos a nuestra primer app";
    char * copiaSaludo;
    copiaSaludo = copy_palabla (saludo);

    if (copiaSaludo == NULL){
     return 1;
    }
    printf ("%s",copiaSaludo);

}

char* copy_palabla (char * palabla){

    int i ;
    char* copia;

    if (palabla == NULL){
       return NULL;
    }
    for (i=0;palabla[i]!='\0';i++);

    copia = (char*) malloc(i *sizeof(char));

    if (copia == NULL);{
        return NULL;
    }
    for (i=0;palabla[i]!='\0';i++){
        copia[i]= palabla[i];
    }
    copia[i]='\0';
    return copia;
}
