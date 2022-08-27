#include "funciones.h"
#include <math.h>
#include <stdio.h>

void leer_vector(int v[], int n){
    for(int i = 0; i<n; i++){
        scanf("%d", &v[i]);
    }
}

void mostrar_vector(int v[], int n){
    for(int i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
}

void estadisticasVector(int v[], int n, float *media, float *varianza, float *desviacion_tipica){

    float suma;

    for(int i = 0; i<n; i++){
        suma += v[i];
        *media = suma/n;
    }

    suma = 0;

    for(int i = 0; i<n; i++){
        suma += pow(v[i] - *media, 2);
        *varianza = suma/n;
    }

    *desviacion_tipica = sqrt(*varianza);

}