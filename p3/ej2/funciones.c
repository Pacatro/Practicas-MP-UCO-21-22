#include "funciones.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fichero_aleatorio(char nombre_fichero[], int n, int max, int min){
    int random;
    FILE *fichero;

    fichero = fopen(nombre_fichero, "w");

    if(fichero == NULL){
        printf("ERROR: No se pudo abrir el fichero.");
    }

    srand(time(NULL));

    for(int i = 0; i<n; i++){
        random = rand() % (max-min+1)+min;
        fprintf(fichero, "%d ", random);
    }

    fclose(fichero);

}