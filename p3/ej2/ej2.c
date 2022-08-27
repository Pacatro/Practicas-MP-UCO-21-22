#include "funciones.h"
#include <stdio.h>

int main(){
    int n, max, min;
    char nombre_fichero[50];

    printf("Nombre del fichero: ");
    scanf("%s", nombre_fichero);

    printf("\nNumero elementos del fichero: ");
    scanf("%d", &n);

    printf("\nMinimo del rango: ");
    scanf("%d", &min);

    printf("\nMaximo del rango: ");
    scanf("%d", &max);

    fichero_aleatorio(nombre_fichero, n, max, min);

    return 0;
}