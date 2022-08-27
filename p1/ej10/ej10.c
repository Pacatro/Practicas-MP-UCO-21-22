#include "funciones.h"
#include <stdio.h>


int main(){
    double suma;
    int n;

    printf("Introduzca el numero de elementos del vector: ");
    scanf("%d", &n);

    double v[n];

    printf("Introduzca los elementos del vector: ");
    leerVector(v, n);
    printf("\nVector: ");
    imprimirVector(v, n);
    
    suma = sumaPositivos(v, n);

    printf("\nSuma de positivos: %lf", suma);

    return 0;
}