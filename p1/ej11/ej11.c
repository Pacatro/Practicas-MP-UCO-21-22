#include "funciones.h"
#include <stdio.h>
#include <string.h>

int main(){

    char cad[200], prefijo[200];
    int comp_prefijo;

    printf("Introduce una cadena: ");

    fgets(cad, 200, stdin);
    if(cad[strlen(cad)-1] == '\n'){
        cad[strlen(cad)-1] = '\0';
    }

    printf("Introduce un prefijo o sufijo: ");

    fgets(prefijo, 200, stdin);
    if(prefijo[strlen(prefijo)-1] == '\n'){
        prefijo[strlen(prefijo)-1] = '\0';
    }

    comp_prefijo = es_prefijo(cad, prefijo);

    if(comp_prefijo == 1){
        printf("\nEs prefijo.");
    }

    else if(comp_prefijo == 0){
        printf("\nNo es prefijo.");
    
    }



}
