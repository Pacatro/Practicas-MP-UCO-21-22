#include "funciones.h"
#include <stdio.h>

int main(){

    float media, varianza, desviacion_tipica;
    int n;

    printf("Introduzca el tamaño del vector: ");
    scanf("%d", &n);

    int v[n];

    printf("\nIntroduzca los elementos del vector: ");
    leer_vector(v, n);
    printf("Vector: ");
    mostrar_vector(v, n);

    estadisticasVector(v, n, &media, &varianza, &desviacion_tipica);
    printf("\nMedia = %f", media);
    printf("\nVarianza = %f", varianza);
    printf("\nDesviacion tipica = %f", desviacion_tipica);

    return 0;

}