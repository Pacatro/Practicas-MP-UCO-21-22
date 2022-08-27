#include "funciones.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


void reservar_vector(struct alumno **v, int n){
    *v = (struct alumno*)malloc(n*sizeof(struct alumno));

    if(*v == NULL){
        printf("\nERROR: No se pudo abrir el fichero");
        exit(-1);
    }
}

void imprimir_vector(struct alumno *v, int n){
    for(int i = 0; i<n; i++){
        printf("Nombre: %s\n", v[i].nombre);
        printf("DNI: %d\n", v[i].DNI);
        printf("Nota: %f\n", v[i].nota);
    }
}

long tamano(char nombre_fichero[]){
    FILE *fichero;
    long n;

    fichero = fopen(nombre_fichero, "rb");

    if(fichero == NULL){
        printf("\nERROR: No se pudo abrir el fichero.");
        exit(-1);
    }

    if(fseek(fichero, 0L, SEEK_END)){
        printf("\nERROR: No se pudo usar el fichero.");
        exit(-1);
    }

    n = ftell(fichero);

    fclose(fichero);
    return n/sizeof(struct alumno);
}

void fichero_vector(char nombre_fichero[], struct alumno *v, int n){
    FILE *fichero;
    int i;
    struct alumno alumno;

    fichero = fopen(nombre_fichero, "rb");

    if(fichero == NULL){
        printf("\nERROR: No se pudo abrir el fichero.");
        exit(-1);
    }

    fread(&alumno, sizeof(struct alumno), 1, fichero);
    while(!feof(fichero)){
        fread(&alumno, sizeof(struct alumno), 1, fichero);
        v[i] = alumno;
        i++;
    }

    fclose(fichero);

}

int mayor_enteros(const void *a, const void *b){
    struct alumno x, y;

    x = *(struct alumno*) a;
    y = *(struct alumno*) b;
    
    return x.DNI>y.DNI;
}


int menor_enteros(const void *a, const void *b){
    struct alumno x, y;
    
    x = *(struct alumno*) a;
    y = *(struct alumno*) b;

    return x.DNI<y.DNI;

}


