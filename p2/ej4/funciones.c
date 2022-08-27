#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>

int **reservarMemoria (int nFil, int nCol){
    int **matriz;

    matriz = (int**)malloc(nFil*sizeof(int*));

    if(matriz == NULL){
        printf("ERROR: No se pudo reservar las filas de la matriz.");
        exit(-1);
    }

    for(int i = 0; i<nFil; i++){
        matriz[i] = (int*)malloc(nCol*sizeof(int));
            
        if(matriz[i] == NULL){
            printf("ERROR: No se pudo reservar las filas de la matriz.");
            exit(-1);
        }
    }

    return matriz;

}

void rellenaMatriz (int **matriz, int nFil, int nCol){
    for(int i= 0; i<nFil; i++){
        for(int j = 0; j<nCol; j++){
            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimeMatriz (int **matriz, int nFil, int nCol){
    for(int i= 0; i<nFil; i++){
        for(int j = 0; j<nCol; j++){
            printf("Elemento [%d][%d]: %d\n", i, j, matriz[i][j]);
        }
    }
}

int *minCol (int **matriz, int nFil, int nCol){
    
    int *minimoCol;

    minimoCol = (int*)malloc(nCol*sizeof(int));
    if(minimoCol == NULL){
        printf("ERROR: No se pudo reservar el vector.");
        exit(-1);
    }

    for(int j = 0; j<nCol; j++){
        minimoCol[j] = matriz[0][j];
        for(int i = 0; i<nFil; i++){
            if(matriz[i][j] <= minimoCol[j]){
                minimoCol[j] = matriz[i][j];
            }
        }
    }

    return minimoCol;
}

void imprimir_vector(int *v, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
}

void liberarMemoria(int ***matriz, int nFil){
    for(int i = 0; i<nFil; i++){
        free(matriz[i]);
    }

    free(matriz);
}