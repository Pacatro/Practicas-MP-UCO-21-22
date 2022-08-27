#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void reservar_vector(int **v, int n){
    *v = (int*)malloc(n*sizeof(int));

    if(v == NULL){
        printf("ERROR: No se pudo reservar el vector");
        exit(-1);
    }
}

void imprimir_vector(int *v, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
}

void fichero_aleatorio(char nombre_fichero[], int n, int min, int max, int *v){
    FILE *fichero;
    int random;
    fichero = fopen(nombre_fichero, "ab");

    if(fichero == NULL){
        printf("ERROR: No se pudo abrir el fichero");
        exit(-1);
    }

    srand(time(NULL));

    for(int i = 0; i<n; i++){
        random = rand() % (max-min+1)+min;
        fwrite(&random, sizeof(int), 1, fichero);
        v[i] = random;
    }

    fclose(fichero);
}

void ver_fichero(char nombre_fichero[]){
    FILE *fichero;
    int elementos;
    fichero = fopen(nombre_fichero, "rb");

    if(fichero == NULL){
        printf("ERROR: No se pudo abrir el fichero");
        exit(-1);
    }

    fread(&elementos, sizeof(int), 1, fichero);
    while(!feof(fichero)){
        printf("%d ", elementos);
        fread(&elementos, sizeof(int), 1, fichero);
    }

    fclose(fichero);

}