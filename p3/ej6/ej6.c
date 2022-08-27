#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int *v, n;
    char nombre_fichero[100];
    float media;

    printf("Nombre del fichero: ");
    fgets(nombre_fichero, 100, stdin);
    if(nombre_fichero[strlen(nombre_fichero)-1] == '\n'){
        nombre_fichero[strlen(nombre_fichero)-1] = '\0';
    }

    printf("\nNumero de elementos del fichero: ");
    scanf("%d", &n);

    reservar_vector(&v, n);
    vector_fichero(nombre_fichero, v);

    printf("\nVector: ");
    mostrar_vector(v, n);

    media = media_pares(v, n);
    printf("\nMedia pares: %f", media);

    free(v);

    return 0;

}