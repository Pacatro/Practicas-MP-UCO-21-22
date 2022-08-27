#ifndef FUNCIONES_H
#define FUNCIONES_H

    int **reservarMemoria (int nFil, int nCol);
    void rellenaMatriz (int **matriz, int nFil, int nCol);
    void imprimeMatriz (int **matriz, int nFil, int nCol);
    int *minCol (int **matriz, int nFil, int nCol);
    void imprimir_vector(int *v, int n);
    void liberarMemoria(int ***matriz, int nFil);


#endif