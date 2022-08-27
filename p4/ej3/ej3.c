#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        qsort(v, n, sizeof(struct alumno), &mayor_enteros);
    }

    if(sentido_ordenacion == 2){
        qsort(v, n, sizeof(struct alumno), &menor_enteros);
    }

    printf("\nVector ordenado:\n");
    imprimir_vector(v, n);
    

}