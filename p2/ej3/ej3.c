#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    struct Ficha_jugador *v; 
    int n, elementos_a;

    printf("\nIntroduzca el numero de jugadores: ");
    scanf("%d", &n);

    reservar_vector(&v, n);

    leer_vectorJugadores(v, n);
    
    printf("\nLista de jugadores:\n");
    mostrar_vectorJugadores(v, n);

    nElementos_a(v, n, &elementos_a);
    printf("\nNumero de jugadores con 'a' en sus nombres: %d\n", elementos_a);

    printf("\nBorrando jugadores con 'a' en su nombre...\n");

    n = borrar_jugadores_a(v, n);

    printf("\nNueva lista de jugadores: \n");
    mostrar_vectorJugadores(v, n);

    free(v);
    

    return 0;
}