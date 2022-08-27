#include "funciones.h"
#include <stdio.h>
#include <ctype.h>

void ficheroMayus(char nombre_origen[], char nombre_mayus[]){
    FILE *fichero_origen, *fichero_mayus;
    int c;

    fichero_origen = fopen(nombre_origen, "r");
    
    if(fichero_origen == NULL){
        printf("ERROR: No se pudo abrir el fichero.");
    }

    
    fichero_mayus = fopen(nombre_mayus, "a");
    
    if(fichero_origen == NULL){
        printf("ERROR: No se pudo abrir el fichero.");
    }

    while((c = fgetc(fichero_origen)) != EOF){
        fputc(toupper(c), fichero_mayus);

    }
    fclose(fichero_origen);
    fclose(fichero_mayus);

}