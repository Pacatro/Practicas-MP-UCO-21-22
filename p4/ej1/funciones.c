#include "funciones.h"
#include <math.h>

float evaluar_f(int x){
    float e = 2.718281828;
    return (3*pow(e, x)-(2*x));
}

float evaluar_g(int x){
    return (-x*sin(x)+1.5);
}

float evaluar_z(int x){
    return (pow(x, 3)-(2*x)+1);
}

float media_funcion(int N, float (*pf) (int)){
    float media, suma = 0;

    for(int i=0; i<=N; i++){
        suma+=pf(i);
    }

    media = suma/(N+1);

    return media;
}