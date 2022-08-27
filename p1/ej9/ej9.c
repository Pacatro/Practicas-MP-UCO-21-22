#include "funciones.h"
#include <stdio.h>

#define N 5

int main(){

    struct monomio v[N], grado_mayor, grado_menor;
    int i, x, resultado;

    for(i = 0; i<N; i++){
        leerMonomio(&v[i]);
    }

    printf("\nPolinomio: ");

    for(i = 0; i<N; i++){
        imprimirMonomio(v[i]);
    }

    mayor_menor_grado(v, N, &grado_mayor, &grado_menor);
    printf("\nMonomio con mayor grado -> ");
    imprimirMonomio(grado_mayor);
    printf("\nMonomio con menor grado -> ");
    imprimirMonomio(grado_menor);

    printf("\n\nEvaluar para x = ");
    scanf("%d", &x);

    resultado = evaluar(v, N, x);

    printf("Resultado: %d", resultado);
    
    return 0;

}