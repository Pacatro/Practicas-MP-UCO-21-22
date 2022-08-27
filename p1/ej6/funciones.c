#include "funciones.h"

//minimo valor:
int minimo(int a, int b){

    if(a < b){
        return a;
    }

    return b;

}

//minimo referencia:
void minimo_referencia(int a, int b, int *resultado){

    if(a < b){
        *resultado = a;
    }

    else{
        *resultado = b;
    }

}