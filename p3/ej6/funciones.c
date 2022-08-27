#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

void reservar_vector(int **v, int n){
    *v = (int*)malloc(n*sizeof(int));
    if(*v == NULL){
        printf("ERROR: No se pudo reservar el fichero");
        exit(-1);
    }
}

void vector_fichero(char nombre_fichero[], int *v){
    FILE *fichero;
    int elemento, i = 0;

    fichero = fopen(nombre_fichero, "rb");

    if(fichero == NULL){
        printf("ERROR: No se pudo abrir el fichero.");
    }

    fread(&elemento, sizeof(int), 1, fichero);
    while(!feof(fichero)){
        fread(&elemento, sizeof(int), 1, fichero);
        v[i] = elemento;
        i++;
    }

    fclose(fichero);
}

void mostrar_vector(int *v, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
}

float media_pares(int *v, int n){
    float suma = 0, media;

    for(int i = 0; i<n; i++){
        if(v[i]%2 == 0){
            suma+=v[i];
        }
    }

    media = suma/n;

    return media;
}

