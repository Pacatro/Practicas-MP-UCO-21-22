#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    int **matriz, nFil, nCol, *minimoCol;

    printf("\nIntroduzca el numero de filas de la matriz: ");
    scanf("%d", &nFil);

    printf("\nIntroduzca el numero de columnas de la matriz: ");
    scanf("%d", &nCol);

    matriz = reservarMemoria(nFil, nCol);

    rellenaMatriz(matriz, nFil, nCol);
    printf("\nMatriz:\n");
    imprimeMatriz(matriz, nFil, nCol);

    minimoCol = minCol(matriz, nFil, nCol);
    printf("\nVector con los minimos de cada columna: ");
    imprimir_vector(minimoCol, nCol);

    liberarMemoria(&matriz, nFil);

    return 0;
}