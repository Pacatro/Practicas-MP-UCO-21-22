#ifndef FUNCIONES_H
#define FUNCIONES_H

    struct Ficha_jugador {
        char nombre[50];
        int dorsal;              /* Nº entero */
        float peso;             /* Expresado en kilos */
        int estatura;           /* Expresado en centímetros*/
    };

    struct Ficha_jugador leer_jugador();
    void reservar_vector(struct Ficha_jugador **v, int n);
    void leer_vectorJugadores(struct Ficha_jugador *v, int n);
    void mostrar_vectorJugadores(struct Ficha_jugador *v, int n);
    void nElementos_a(struct Ficha_jugador *v, int n, int *elementos_a);
    int borrar_jugadores_a(struct Ficha_jugador *v, int n);
    

#endif