#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ficha_jugador leer_jugador(){
    struct Ficha_jugador jugador;
    
    printf("\nIntroduzca el nombre del jugador: ");
    
    scanf("%s", jugador.nombre);
    getchar();

    printf("Introduzca el dorsal del jugador: ");
    scanf("%d", &jugador.dorsal);

    
    printf("Introduzca el peso del jugador (en Kg): ");
    scanf("%f", &jugador.peso);

    
    printf("Introduzca la estatura del jugador (en cm): ");
    scanf("%d", &jugador.estatura);

    return jugador;

}

void reservar_vector(struct Ficha_jugador **v, int n){

    *v = (struct Ficha_jugador*)malloc(n*sizeof(struct Ficha_jugador));

    if(v == NULL){
        printf("\nERROR: No se pudo reservar el vector.");
        exit(-1);
    }

}

void leer_vectorJugadores(struct Ficha_jugador *v, int n){

    for(int i = 0; i<n; i++){
        v[i] = leer_jugador();
    }
}

void mostrar_vectorJugadores(struct Ficha_jugador *v, int n){
    
    for(int i = 0; i<n; i++){
        printf("\nNombre: %s", v[i].nombre);
        printf("\nDorsal: %d", v[i].dorsal);
        printf("\nPeso: %f Kg", v[i].peso);
        printf("\nEstatura: %d cm\n", v[i].estatura);
    }

}

void nElementos_a(struct Ficha_jugador *v, int n, int *elementos_a){
    *elementos_a = 0;
    char a = 'a';

    for(int i = 0; i<n; i++){
        if(strchr(v[i].nombre, a) != NULL){
            (*elementos_a)++;
        }
    }
}

int borrar_jugadores_a(struct Ficha_jugador *v, int n){
    int aux = 0;
    char a = 'a';

    for(int i = 0; i<n; i++){
        if(strchr(v[i].nombre, a) == NULL){
            strcpy(v[aux].nombre, v[i].nombre);
            v[aux].dorsal = v[i].dorsal;
            v[aux].peso = v[i].peso;
            v[aux].estatura = v[i].estatura;
            aux++;
        }
    }

    v = (struct Ficha_jugador*)realloc(v, n*sizeof(struct Ficha_jugador));
    if(v == NULL){
        printf("\nERROR: No se pudo reservar el vector.");
        exit(-1);
    }

    return aux;
}   
