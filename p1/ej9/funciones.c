#include "funciones.h"
#include <stdio.h>
#include <math.h>

void leerMonomio(struct monomio *monomio){
    printf("\nIntroduzca el coeficiente del monomio: ");
    scanf("%d", &monomio->coeficiente);
    printf("Introduzca el grado del monomio: ");
    scanf("%d", &monomio->grado);
}

void imprimirMonomio(struct monomio monomio){
    printf("%dx^%d ", monomio.coeficiente, monomio.grado);
}

void mayor_menor_grado(struct monomio v[], int n, struct monomio *grado_mayor, struct monomio *grado_menor){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(v[i].grado > v[j].grado){
                struct monomio aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    *grado_mayor = v[0];
    *grado_menor = v[n-1];
}

int evaluar(struct monomio v[], int n, int x){
    int resultado = 0;
    for(int i = 0; i<n; i++){
        resultado += v[i].coeficiente * pow(x, v[i].grado);
    }

    return resultado;
}