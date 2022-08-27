#ifndef FUNCIONES_H
#define FUNCIONES_H

    struct monomio{
        int coeficiente;
        int grado;
    };

    void leerMonomio(struct monomio *monomio);
    void imprimirMonomio(struct monomio monomio);
    void mayor_menor_grado(struct monomio v[], int n, struct monomio *grado_mayor, struct monomio *grado_menor);
    int evaluar(struct monomio v[], int n, int x);

#endif