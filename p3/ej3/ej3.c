#include "funciones.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv){

    if(argc != 2){
        printf("ERROR: Faltan más parámetros (nombre del archivo).");
        exit(1);
    }

    char nombre_fichero[80];
    int n;
    float media;

    strcpy(nombre_fichero, argv[1]);

    printf("Numero de elementos del fichero: ");
    scanf("%d", &n);

    media = media_pares(nombre_fichero, n);

    printf("\nMedia fichero: %f", media);

    return 0;


}