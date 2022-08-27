#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

float media_pares(char nombre_fichero[], int n){
    FILE *fichero;
    int elemento;
    float media, suma = 0;


    fichero = fopen(nombre_fichero, "r");

    if(fichero == NULL){
        printf("ERROR: No se pudo abrir el fichero");
        exit(-1);
    }

    while(fscanf(fichero, "%d", &elemento) != EOF){
        if(elemento % 2 == 0){
            suma+=elemento;
        }
    }

    media = suma/n;

    fclose(fichero);
    return media;
    
}