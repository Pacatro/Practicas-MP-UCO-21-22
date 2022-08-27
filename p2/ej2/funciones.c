#include "funciones.h"
#include <stdlib.h>
#include <stdio.h>

void reservar_vector(int **v, int n){
    *v = (int*)malloc(n*sizeof(int));

    if(v == NULL){
        printf("\nError, no se pudo reservar el vector.");
        exit(-1);
    }
}

void leer_vector(int *v, int n){
    int elem;
    for(int i = 0; i<n; i++){
        scanf("%d", &elem);
        v[i] = elem;
    }
}

void mostrar_vector(int *v, int n){
    for(int i = 0; i<n; i++){
        printf("%d ", v[i]);
    }
}

void nElementos(int *v, int n, int num, int *elem_mayor, int *elem_menor){
    *elem_menor = 0;
    *elem_mayor = 0;

    for(int i = 0; i<n; i++){
        if(v[i] >= num){
            (*elem_mayor)++;
        }

        else{
            (*elem_menor)++;
        }
    }
}

void mayor_menor(int *v, int n, int num, int *v_mayor, int *v_menor, int *elem_mayor, int *elem_menor){
    
    *elem_mayor = 0;
    *elem_menor = 0;

    for(int i = 0; i<n; i++){
        if(v[i] >= num){
            v_mayor[*elem_mayor] = v[i];
            (*elem_mayor)++;
        }

        else{
            v_menor[*elem_menor] = v[i];
            (*elem_menor)++;
        }
    }
}
