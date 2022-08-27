#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(int argc, char **argv){
    
    if(argc != 3){
        printf("ERROR: Faltan más parametros <tipo_ordenacion (ascendente = 1) (descendente = 2) nombre_fichero>");
        exit(-1);
    }

    int sentido_ordenacion, n;
    struct alumno *v;
    char nombre_fichero[100];

    strcpy(nombre_fichero, argv[2]);
    sentido_ordenacion = atoi(argv[1]);

    n = tamano(nombre_fichero);

    printf("\nNumero elementos del fichero: %d", n);

    reservar_vector(&v, n);
    fichero_vector(nombre_fichero, v, n);
    printf("\nVector sin ordenar:\n");
    imprimir_vector(v, n);

    if(sentido_ordenacion == 1){
        ordenar_DNI(v, n, &mayor);
    }

    if(sentido_ordenacion == 2){
        ordenar_DNI(v, n, &menor);
    }

    printf("\nVector ordenado:\n");
    imprimir_vector(v, n);
    

}