#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){

    if(argc != 5){
        printf("ERROR: Se necesitan mas parametros (nombre_fichero, elementos, min, max)");
        exit(-1);
    }

    int n, min, max, *v;
    char nombre_fichero[100];

    strcpy(nombre_fichero, argv[1]);
    n = atoi(argv[2]);
    min = atoi(argv[3]);
    max = atoi(argv[4]);

    reservar_vector(&v, n);
    fichero_aleatorio(nombre_fichero, n, min, max, v);

    printf("\nVector: ");
    imprimir_vector(v, n);
    
    printf("\nFichero: ");
    ver_fichero(nombre_fichero);

    free(v);
    return 0;
}