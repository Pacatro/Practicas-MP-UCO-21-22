#include "funciones.h"
#include <stdio.h>

int main(){

    int a, b, min_valor, resultado;

    printf("Introduzca un numero: ");
    scanf("%d", &a);

    printf("Introduzca otro numero: ");
    scanf("%d", &b);

    min_valor = minimo(a, b);

    printf("\nMinimo por valor = %d", min_valor);

    minimo_referencia(a, b, &resultado);

    printf("\nMinimo por referencia = %d", resultado);

    return 0;

}