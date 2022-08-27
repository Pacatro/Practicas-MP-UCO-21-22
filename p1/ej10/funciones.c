#include "funciones.h"
#include <stdio.h>

void leerVector(double v[], int n){
    for(int i = 0; i<n; i++){
        scanf("%lf", (v+i));
    }
}

void imprimirVector(double v[], int n){
    for(int i = 0; i<n; i++){
        printf("%lf ", *(v+i));
    }
}

double sumaPositivos(double v[], int n){
    double suma = 0;

    for(int i = 0; i<n; i++){
        if(*(v+i) > 0){
            suma += *(v+i);
        }
    }

    return suma;
}