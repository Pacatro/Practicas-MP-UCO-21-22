#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, *v_mayor, *v_menor, n, num, elem_mayor, elem_menor;

    printf("Introduzca el numero de elementos del vector: ");
    scanf("%d", &n);

    reservar_vector(&v, n);

    printf("Introduzca los datos del vector: ");
    leer_vector(v, n);
    printf("\nVector: ");
    mostrar_vector(v, n);

    printf("\nIntroduzca el numero a comparar: ");
    scanf("%d", &num);

    nElementos(v, n, num, &elem_mayor, &elem_menor);
    printf("\nNumero elementos mayores = %d", elem_mayor);
    printf("\nNumero elementos menores = %d", elem_menor);

    reservar_vector(&v_mayor, elem_mayor);
    reservar_vector(&v_menor, elem_menor);

    mayor_menor(v, n, num, v_mayor, v_menor, &elem_mayor, &elem_menor);
    
    printf("\n\nVector con los elementos > %d: ", num);
    mostrar_vector(v_mayor, elem_mayor);
    
    printf("\nVector con los elementos < %d: ", num);
    mostrar_vector(v_menor, elem_menor);

    free(v);
    free(v_mayor);
    free(v_menor);


    return 0;

}